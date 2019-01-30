 /*
 * cache.c - cache module routines
 *
 * This file is a part of the SimpleScalar tool suite written by
 * Todd M. Austin as a part of the Multiscalar Research Project.
 *  
 * The tool suite is currently maintained by Doug Burger and Todd M. Austin.
 * 
 * Copyright (C) 1994, 1995, 1996, 1997, 1998 by Todd M. Austin
 *
 * This source file is distributed "as is" in the hope that it will be
 * useful.  The tool set comes with no warranty, and no author or
 * distributor accepts any responsibility for the consequences of its
 * use. 
 * 
 * Everyone is granted permission to copy, modify and redistribute
 * this tool set under the following conditions:
 * 
 *    This source code is distributed for non-commercial use only. 
 *    Please contact the maintainer for restrictions applying to 
 *    commercial use.
 *
 *    Permission is granted to anyone to make or distribute copies
 *    of this source code, either as received or modified, in any
 *    medium, provided that all copyright notices, permission and
 *    nonwarranty notices are preserved, and that the distributor
 *    grants the recipient permission for further redistribution as
 *    permitted by this document.
 *
 *    Permission is granted to distribute this file in compiled
 *    or executable form under the same conditions that apply for
 *    source code, provided that either:
 *
 *    A. it is accompanied by the corresponding machine-readable
 *       source code,
 *    B. it is accompanied by a written offer, with no time limit,
 *       to give anyone a machine-readable copy of the corresponding
 *       source code in return for reimbursement of the cost of
 *       distribution.  This written offer must permit verbatim
 *       duplication by anyone, or
 *    C. it is distributed by someone who received only the
 *       executable form, and is accompanied by a copy of the
 *       written offer of source code that they received concurrently.
 *
 * In other words, you are welcome to use, share and improve this
 * source file.  You are forbidden to forbid anyone else to use, share
 * and improve what you give them.
 *
 * INTERNET: dburger@cs.wisc.edu
 * US Mail:  1210 W. Dayton Street, Madison, WI 53706
 *
 *
 * Revision 1.5  1998/08/27 08:02:01  taustin
 * implemented host interface description in host.h
 * added target interface support
 * implemented a more portable random() interface
 * fixed cache writeback stats for cache flushes
 *
 * Revision 1.4  1997/03/11  01:08:30  taustin
 * updated copyright
 * long/int tweaks made for ALPHA target support
 * double-word interfaces removed
 *
 * Revision 1.3  1997/01/06  15:56:20  taustin
 * comments updated
 * fixed writeback bug when balloc == FALSE
 * strdup() changed to mystrdup()
 * cache_reg_stats() now works with stats package
 * cp->writebacks stat added to cache
 *
 /* Revision 1.1  1996/12/05  18:52:32  taustin
 * Initial revision
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#include "host.h"
#include "misc.h"
#include "machine.h"
#include "cache.h"

/* Leakage: includes */
#include "cache_leak_ctrl.h"
#include "power.h"

#ifndef _CACHE_C
#define _CACHE_C


extern tick_t sim_cycle;
extern struct cache_t *cache_dl1;


/* Leakage: some globals */
static int global_tick = 0;	/* if a global tick happened this cycle	*/
static int n_resets = 0;	/* no. of local counter resets in this cycle	*/
static int local_width;		/* width of local counters in bits	*/
static int global_width;	/* width of global counters in bits	*/
static int n_lines;		/* no. of lines in the decayed_cache	*/
static int tag_size; 		/* tag + status bits' size in bits	*/
static int tag_array_size;	/* total tag + status array size - bytes	*/
static int v_addr_size;		/* no bits in virtual address	*/
static int cache_size ;		/* decayed_cache size - bytes	*/

static double global_access_power;	/* power per access of global counter	*/
static double global_af;			/* activity factor for global counter	*/
static double local_access_power;	/* power per access of local counter	*/
static double local_af;				/* activity factor for local counter	*/
static double local_reset_power;	/* power per rest of local counter		*/

/*********************************************************************************
 *********************************************************************************/
extern int sample_interval;
extern int b_decay_enabled;
extern int b_decay_profile_enabled;


static counter_t sum_real_miss;
static counter_t sum_decay_caused_miss;
static counter_t sum_real_decay_caused_miss;
static counter_t sum_false_decay_caused_miss;
static counter_t induced_decay_misses;      /* misses due to decay */
static counter_t induced_wbacks;            /* extra writebacks due to decay */
static counter_t real_decay_misses;         /* real misses to decayed lines */


#if defined(cache_decay)
	#define MAX_LIFE						100
	#define MAX_USAGE						100
	#define MAX_INTERVAL					100
	#define MAX_INTERVAL_FINE				400


	extern md_addr_t cur_pc;

/* usage profile */
	static struct stat_stat_t *n_read_prof; /* profile the # of usage of value */
	static struct stat_stat_t *n_access_prof; /* profile the # of usage of value */

	static counter_t n_profiled_blocks;	/* total # of blocks profiled */

	static counter_t sum_access;		/* average access = sum_access/n_profiled_blocks */
	static counter_t sum_live_time;	/* average live time length = sum_live_time/n_profiled_blocks */
	static counter_t sum_dead_time; /* average dead time length = sum_dead_time/n_profiled_blocks */

	static counter_t n_decay, n_valid_decay, n_invalid_decay;

#if (decayed_cache == cache_dl2) 
	#define ACCESS_INTERVAL_STEP_FINE		1000
	#define ACCESS_INTERVAL_STEP			10000
	#define ACCESS_INTERVAL_STEP_COARSE		100000
	#define DEAD_TIME_STEP					10000				
	#define DEAD_TIME_STEP_COARSE			100000
#else
	#define ACCESS_INTERVAL_STEP_FINE		10
	#define ACCESS_INTERVAL_STEP			100
	#define ACCESS_INTERVAL_STEP_COARSE		1000
	#define DEAD_TIME_STEP					100
	#define DEAD_TIME_STEP_COARSE			1000
#endif

	static struct stat_stat_t *access_interval_prof;	/* profile access interval */
	static struct stat_stat_t *access_interval_prof_coarse;	/* coarse profile access interval */
	static struct stat_stat_t *access_interval_prof_fine;	/* coarse profile access interval */
	static counter_t sum_access_interval;
	static counter_t num_access_interval;


	static struct stat_stat_t *valid_ratio_prof;	/* ratio of valid cache line */
	static struct stat_stat_t *dirty_ratio_prof;	/* ratio of dirty cache line */

/* life time profile */
	static struct stat_stat_t *whole_life_prof;	/* time_replaced - time_first_access */
	#define WHOLE_LIFE_STEP	100000				/* time for each dead time step */

	static struct stat_stat_t *live_time_prof;	/* time_last_access - time_first_access */
	#define LIVE_TIME_STEP	50000					/* time for each live time step */

	static struct stat_stat_t *dead_time_prof;	/* time_replaced - time_last_access */
	static struct stat_stat_t *dead_time_prof_coarse;	/* time_replaced - time_last_access */

	static struct stat_stat_t *dirty_time_prof;	/* time_last_access - time_dirty */
	#define DIRTY_time_STEP	100					/* time for each dirty time step */

	static counter_t sum_dirty_time;

	#define MAX_WRITEBACK		100
	static struct stat_stat_t *n_writeback_prof;	/* time_last_access - time_dirty */



	extern int global_counter_max;
	extern int local_counter_max;
	extern int fast_counter;
	extern int slow_counter;

	static counter_t counter_update;

	extern tick_t sim_cycle;
	/* level 1 instruction cache, entry level instruction cache */
	extern struct cache_t *cache_il1;

	/* level 1 instruction cache */
	extern struct cache_t *cache_il2;

	/* level 1 data cache, entry level data cache */
	extern struct cache_t *cache_dl1;

	/* level 2 data cache */
	extern struct cache_t *cache_dl2;

	/* instruction TLB */
	extern struct cache_t *itlb;

	/* data TLB */
	extern struct cache_t *dtlb;



#endif


/*********************************************************************************
 *********************************************************************************/

/* cache access macros */
#define CACHE_TAG(cp, addr)	((addr) >> (cp)->tag_shift)
#define CACHE_SET(cp, addr)	(((addr) >> (cp)->set_shift) & (cp)->set_mask)
#define CACHE_BLK(cp, addr)	((addr) & (cp)->blk_mask)
#define CACHE_TAGSET(cp, addr)	((addr) & (cp)->tagset_mask)

/* extract/reconstruct a block address */
#define CACHE_BADDR(cp, addr)	((addr) & ~(cp)->blk_mask)
#define CACHE_MK_BADDR(cp, tag, set)					\
  (((tag) << (cp)->tag_shift)|((set) << (cp)->set_shift))

/* index an array of cache blocks, non-trivial due to variable length blocks */
#define CACHE_BINDEX(cp, blks, i)					\
  ((struct cache_blk_t *)(((char *)(blks)) +				\
			  (i)*(sizeof(struct cache_blk_t) +		\
			       ((cp)->balloc				\
				? (cp)->bsize*sizeof(byte_t) : 0))))

/* cache data block accessor, type parameterized */
#define __CACHE_ACCESS(type, data, bofs)				\
  (*((type *)(((char *)data) + (bofs))))

/* cache data block accessors, by type */
#define CACHE_DOUBLE(data, bofs)  __CACHE_ACCESS(double, data, bofs)
#define CACHE_FLOAT(data, bofs)	  __CACHE_ACCESS(float, data, bofs)
#define CACHE_WORD(data, bofs)	  __CACHE_ACCESS(unsigned int, data, bofs)
#define CACHE_HALF(data, bofs)	  __CACHE_ACCESS(unsigned short, data, bofs)
#define CACHE_BYTE(data, bofs)	  __CACHE_ACCESS(unsigned char, data, bofs)

/* cache block hashing macros, this macro is used to index into a cache
   set hash table (to find the correct block on N in an N-way cache), the
   cache set index function is CACHE_SET, defined above */
#define CACHE_HASH(cp, key)						\
  (((key >> 24) ^ (key >> 16) ^ (key >> 8) ^ key) & ((cp)->hsize-1))

/* copy data out of a cache block to buffer indicated by argument pointer p */
#define CACHE_BCOPY(cmd, blk, bofs, p, nbytes)	\
  if (cmd == Read)							\
    {									\
      switch (nbytes) {							\
      case 1:								\
	*((byte_t *)p) = CACHE_BYTE(&blk->data[0], bofs); break;	\
      case 2:								\
	*((half_t *)p) = CACHE_HALF(&blk->data[0], bofs); break;	\
      case 4:								\
	*((word_t *)p) = CACHE_WORD(&blk->data[0], bofs); break;	\
      default:								\
	{ /* >= 8, power of two, fits in block */			\
	  int words = nbytes >> 2;					\
	  while (words-- > 0)						\
	    {								\
	      *((word_t *)p) = CACHE_WORD(&blk->data[0], bofs);	\
	      p += 4; bofs += 4;					\
	    }\
	}\
      }\
    }\
  else /* cmd == Write */						\
    {									\
      switch (nbytes) {							\
      case 1:								\
	CACHE_BYTE(&blk->data[0], bofs) = *((byte_t *)p); break;	\
      case 2:								\
        CACHE_HALF(&blk->data[0], bofs) = *((half_t *)p); break;	\
      case 4:								\
	CACHE_WORD(&blk->data[0], bofs) = *((word_t *)p); break;	\
      default:								\
	{ /* >= 8, power of two, fits in block */			\
	  int words = nbytes >> 2;					\
	  while (words-- > 0)						\
	    {								\
	      CACHE_WORD(&blk->data[0], bofs) = *((word_t *)p);		\
	      p += 4; bofs += 4;					\
	    }\
	}\
    }\
  }

/* bound sqword_t/dfloat_t to positive int */
#define BOUND_POS(N)		((int)(MIN(MAX(0, (N)), 2147483647)))

/* unlink BLK from the hash table bucket chain in SET */
static void
unlink_htab_ent(struct cache_t *cp,		/* cache to update */
		struct cache_set_t *set,	/* set containing bkt chain */
		struct cache_blk_t *blk)	/* block to unlink */
{
  struct cache_blk_t *prev, *ent;
  int index = CACHE_HASH(cp, blk->tag);

  /* locate the block in the hash table bucket chain */
  for (prev=NULL,ent=set->hash[index];
       ent;
       prev=ent,ent=ent->hash_next)
    {
      if (ent == blk)
	break;
    }
  assert(ent);

  /* unlink the block from the hash table bucket chain */
  if (!prev)
    {
      /* head of hash bucket list */
      set->hash[index] = ent->hash_next;
    }
  else
    {
      /* middle or end of hash bucket list */
      prev->hash_next = ent->hash_next;
    }
  ent->hash_next = NULL;
}

/* insert BLK onto the head of the hash table bucket chain in SET */
static void
link_htab_ent(struct cache_t *cp,		/* cache to update */
	      struct cache_set_t *set,		/* set containing bkt chain */
	      struct cache_blk_t *blk)		/* block to insert */
{
  int index = CACHE_HASH(cp, blk->tag);

  /* insert block onto the head of the bucket chain */
  blk->hash_next = set->hash[index];
  set->hash[index] = blk;
}

/* where to insert a block onto the ordered way chain */
enum list_loc_t { Head, Tail };

/* insert BLK into the order way chain in SET at location WHERE */
static void
update_way_list(struct cache_set_t *set,	/* set contained way chain */
		struct cache_blk_t *blk,	/* block to insert */
		enum list_loc_t where)		/* insert location */
{
  /* unlink entry from the way list */
  if (!blk->way_prev && !blk->way_next)
    {
      /* only one entry in list (direct-mapped), no action */
      assert(set->way_head == blk && set->way_tail == blk);
      /* Head/Tail order already */
      return;
    }
  /* else, more than one element in the list */
  else if (!blk->way_prev)
    {
      assert(set->way_head == blk && set->way_tail != blk);
      if (where == Head)
	{
	  /* already there */
	  return;
	}
      /* else, move to tail */
      set->way_head = blk->way_next;
      blk->way_next->way_prev = NULL;
    }
  else if (!blk->way_next)
    {
      /* end of list (and not front of list) */
      assert(set->way_head != blk && set->way_tail == blk);
      if (where == Tail)
	{
	  /* already there */
	  return;
	}
      set->way_tail = blk->way_prev;
      blk->way_prev->way_next = NULL;
    }
  else
    {
      /* middle of list (and not front or end of list) */
      assert(set->way_head != blk && set->way_tail != blk);
      blk->way_prev->way_next = blk->way_next;
      blk->way_next->way_prev = blk->way_prev;
    }

  /* link BLK back into the list */
  if (where == Head)
    {
      /* link to the head of the way list */
      blk->way_next = set->way_head;
      blk->way_prev = NULL;
      set->way_head->way_prev = blk;
      set->way_head = blk;
    }
  else if (where == Tail)
    {
      /* link to the tail of the way list */
      blk->way_prev = set->way_tail;
      blk->way_next = NULL;
      set->way_tail->way_next = blk;
      set->way_tail = blk;
    }
  else
    panic("bogus WHERE designator");
}

void clear_cache_stats(struct cache_t *cp)
{
  /* initialize cache stats */
  cp->hits = 0;
  cp->misses = 0;
  cp->read_misses = 0;
  cp->write_misses = 0;
  cp->replacements = 0;
  cp->writebacks = 0;
  cp->invalidations = 0;
}/* clear_cache_stats */

/* create and initialize a general cache structure */
struct cache_t *			/* pointer to cache created */
cache_create(char *name,		/* name of the cache */
	     int nsets,			/* total number of sets in cache */
	     int bsize,			/* block (line) size of cache */
	     int balloc,		/* allocate data space for blocks? */
	     int usize,			/* size of user data to alloc w/blks */
	     int assoc,			/* associativity of cache */
	     enum cache_policy policy,	/* replacement policy w/in sets */
	     /* block access function, see description w/in struct cache def */
	     unsigned int (*blk_access_fn)(enum mem_cmd cmd,
					   md_addr_t baddr, int bsize,
					   struct cache_blk_t *blk,
					   tick_t now),
	     unsigned int hit_latency)	/* latency in cycles for a hit */
{
  struct cache_t *cp;
  struct cache_blk_t *blk;
  int i, j, bindex;

  /* check all cache parameters */
  if (nsets <= 0)
    fatal("cache size (in sets) `%d' must be non-zero", nsets);
  if ((nsets & (nsets-1)) != 0)
    fatal("cache size (in sets) `%d' is not a power of two", nsets);
  /* blocks must be at least one datum large, i.e., 8 bytes for SS */
  if (bsize < 8)
    fatal("cache block size (in bytes) `%d' must be 8 or greater", bsize);
  if ((bsize & (bsize-1)) != 0)
    fatal("cache block size (in bytes) `%d' must be a power of two", bsize);
  if (usize < 0)
    fatal("user data size (in bytes) `%d' must be a positive value", usize);
  if (assoc <= 0)
    fatal("cache associativity `%d' must be non-zero and positive", assoc);
  if ((assoc & (assoc-1)) != 0)
    fatal("cache associativity `%d' must be a power of two", assoc);
  if (!blk_access_fn)
    fatal("must specify miss/replacement functions");

  /* allocate the cache structure */
  cp = (struct cache_t *)
    calloc(1, sizeof(struct cache_t) + (nsets-1)*sizeof(struct cache_set_t));
  if (!cp)
    fatal("out of virtual memory");

  /* initialize user parameters */
  cp->name = mystrdup(name);
  cp->nsets = nsets;
  cp->bsize = bsize;
  cp->balloc = balloc;
  cp->usize = usize;
  cp->assoc = assoc;
  cp->policy = policy;
  cp->hit_latency = hit_latency;

  /* miss/replacement functions */
  cp->blk_access_fn = blk_access_fn;

  /* compute derived parameters */
  cp->hsize = CACHE_HIGHLY_ASSOC(cp) ? (assoc >> 2) : 0;
  cp->blk_mask = bsize-1;
  cp->set_shift = log_base2(bsize);
  cp->set_mask = nsets-1;
  cp->tag_shift = cp->set_shift + log_base2(nsets);
  cp->tag_mask = (1 << (32 - cp->tag_shift))-1;
  cp->tagset_mask = ~cp->blk_mask;
  cp->bus_free = 0;

  /* print derived parameters during debug */
  debug("%s: cp->hsize     = %d", cp->name, cp->hsize);
  debug("%s: cp->blk_mask  = 0x%08x", cp->name, cp->blk_mask);
  debug("%s: cp->set_shift = %d", cp->name, cp->set_shift);
  debug("%s: cp->set_mask  = 0x%08x", cp->name, cp->set_mask);
  debug("%s: cp->tag_shift = %d", cp->name, cp->tag_shift);
  debug("%s: cp->tag_mask  = 0x%08x", cp->name, cp->tag_mask);

  /* initialize cache stats */
  cp->hits = 0;
  cp->misses = 0;
  cp->read_misses = 0;
  cp->write_misses = 0;
  cp->replacements = 0;
  cp->writebacks = 0;
  cp->invalidations = 0;

  /* blow away the last block accessed */
  cp->last_tagset = 0;
  cp->last_blk = NULL;

  /* allocate data blocks */
  cp->data = (byte_t *)calloc(nsets * assoc,
			      sizeof(struct cache_blk_t) +
			      (cp->balloc ? (bsize*sizeof(byte_t)) : 0));
  if (!cp->data)
    fatal("out of virtual memory");


  /* slice up the data blocks */
  for (bindex=0,i=0; i<nsets; i++)
    {
      cp->sets[i].way_head = NULL;
      cp->sets[i].way_tail = NULL;
      /* get a hash table, if needed */
      if (cp->hsize)
	{
	  cp->sets[i].hash =
	    (struct cache_blk_t **)calloc(cp->hsize,
					  sizeof(struct cache_blk_t *));
	  if (!cp->sets[i].hash)
	    fatal("out of virtual memory");
	}
      /* NOTE: all the blocks in a set *must* be allocated contiguously,
	 otherwise, block accesses through SET->BLKS will fail (used
	 during random replacement selection) */
      cp->sets[i].blks = CACHE_BINDEX(cp, cp->data, bindex);
       
      /* link the data blocks into ordered way chain and hash table bucket
         chains, if hash table exists */
      for (j=0; j<assoc; j++)
	{
	  /* locate next cache block */
	  blk = CACHE_BINDEX(cp, cp->data, bindex);
	  bindex++;

	  /* invalidate new cache block */
	  blk->status = 0;
	  blk->tag = 0;
	  blk->ready = 0;
	  blk->user_data = (usize != 0
			    ? (byte_t *)calloc(usize, sizeof(byte_t)) : NULL);

/* cache_decay: init */
#if defined(cache_decay)
		blk->time_first_access = 0;
		blk->time_last_access = 0;
		blk->time_dirty = 0;
		blk->n_access = 0;
		blk->n_total_access = 0;
		blk->n_total_miss = 0;
		blk->n_read = 0;
		blk->n_write = 0;
		blk->frequency = 0;
		blk->local_counter_max = local_counter_max;
		blk->local_counter = blk->local_counter_max;
#endif /* defined(cache_decay) */

	  /* insert cache block into set hash table */
	  if (cp->hsize)
	    link_htab_ent(cp, &cp->sets[i], blk);

	  /* insert into head of way list, order is arbitrary at this point */
	  blk->way_next = cp->sets[i].way_head;
	  blk->way_prev = NULL;

	  if (cp->sets[i].way_head)
	    cp->sets[i].way_head->way_prev = blk;
	  cp->sets[i].way_head = blk;
	  if (!cp->sets[i].way_tail)
	    cp->sets[i].way_tail = blk;

	  } /* for j = assoc */
  } /* for i = nsets */


  return cp;
}/* cache_create */

/* parse policy */
enum cache_policy			/* replacement policy enum */
cache_char2policy(char c)		/* replacement policy as a char */
{
  switch (c) {
  case 'l': return LRU;
  case 'r': return Random;
  case 'f': return FIFO;
  default: fatal("bogus replacement policy, `%c'", c);
  }
}

/* print cache configuration */
void
cache_config(struct cache_t *cp,	/* cache instance */
	     FILE *stream)		/* output stream */
{
  fprintf(stream,
	  "cache: %s: %d sets, %d byte blocks, %d bytes user data/block\n",
	  cp->name, cp->nsets, cp->bsize, cp->usize);
  fprintf(stream,
	  "cache: %s: %d-way, `%s' replacement policy, write-back\n",
	  cp->name, cp->assoc,
	  cp->policy == LRU ? "LRU"
	  : cp->policy == Random ? "Random"
	  : cp->policy == FIFO ? "FIFO"
	  : (abort(), ""));
}

/* register cache stats */
void
cache_reg_stats(struct cache_t *cp,	/* cache instance */
		struct stat_sdb_t *sdb)	/* stats database */
{
  char buf[512], buf1[512], *name;

  /* get a name for this cache */
  if (!cp->name || !cp->name[0])
    name = "<unknown>";
  else
    name = cp->name;

  sprintf(buf, "%s.accesses", name);
  sprintf(buf1, "%s.hits + %s.misses", name, name);
  stat_reg_formula(sdb, buf, "total number of accesses", buf1, "%12.0f");
  sprintf(buf, "%s.hits", name);
  stat_reg_counter(sdb, buf, "total number of hits", &cp->hits, 0, NULL);
  sprintf(buf, "%s.misses", name);
  stat_reg_counter(sdb, buf, "total number of misses", &cp->misses, 0, NULL);
  sprintf(buf, "%s.read_misses", name);
  stat_reg_counter(sdb, buf, "total number of read misses", &cp->read_misses, 0, NULL);
  sprintf(buf, "%s.write_misses", name);
  stat_reg_counter(sdb, buf, "total number of write misses", &cp->write_misses, 0, NULL);
  sprintf(buf, "%s.replacements", name);
  stat_reg_counter(sdb, buf, "total number of replacements",
		 &cp->replacements, 0, NULL);
  sprintf(buf, "%s.writebacks", name);
  stat_reg_counter(sdb, buf, "total number of writebacks",
		 &cp->writebacks, 0, NULL);
  sprintf(buf, "%s.invalidations", name);
  stat_reg_counter(sdb, buf, "total number of invalidations",
		 &cp->invalidations, 0, NULL);
  sprintf(buf, "%s.miss_rate", name);
  sprintf(buf1, "%s.misses / %s.accesses", name, name);
  stat_reg_formula(sdb, buf, "miss rate (i.e., misses/ref)", buf1, NULL);
  sprintf(buf, "%s.repl_rate", name);
  sprintf(buf1, "%s.replacements / %s.accesses", name, name);
  stat_reg_formula(sdb, buf, "replacement rate (i.e., repls/ref)", buf1, NULL);
  sprintf(buf, "%s.wb_rate", name);
  sprintf(buf1, "%s.writebacks / %s.accesses", name, name);
  stat_reg_formula(sdb, buf, "writeback rate (i.e., wrbks/ref)", buf1, NULL);
  sprintf(buf, "%s.inv_rate", name);
  sprintf(buf1, "%s.invalidations / %s.accesses", name, name);
  stat_reg_formula(sdb, buf, "invalidation rate (i.e., invs/ref)", buf1, NULL);

}

/* update cache stats every sample_interval cycles */
int update_cache_stats()
{
#if defined(cache_decay)	/* do nothing if do not decay cache */
  int i,bindex; 
  struct cache_blk_t *blk;
	int n_valid, n_dirty, n_total;
	struct cache_t *cp = decayed_cache;

	n_valid = 0;
	n_dirty = 0;
	n_total = cp->assoc * cp->nsets;


  /* count the valid ratio and dirty ratio */
  for (i=0; i<cp->nsets; i++)
  {
    for (blk=cp->sets[i].way_head; blk; blk=blk->way_next)
		{
			if (blk->status & CACHE_BLK_VALID)
			{
				n_valid++;
				if (blk->status & CACHE_BLK_DIRTY) n_dirty++;
			}
		}
	}/* for */




  return 0;
#endif
}/* update_cache_stats */ 

int print_total_access()
{
	int i, bindex; 
	struct cache_blk_t *blk;
	struct cache_t *cp = decayed_cache;

	fprintf(stderr," cache total access\n");

	for (i=0; i<cp->nsets; i++)
	{
		for(bindex = 0; bindex < cp->assoc; bindex++)
		{
			blk = CACHE_BINDEX(cp, cp->sets[i].blks, bindex);
			fprintf(stderr," %ld            %ld",(long) blk->n_total_access, (long) blk->n_total_miss);
		}

		fprintf(stderr," \n");
	}

	fprintf(stderr," \n\n\n");

  return 0;
}/* update_cache_stats */ 



/* update cache decay every global_counter_max cycles */
int update_cache_decay()
{
#if defined(cache_decay)	
	struct cache_blk_t *blk;
	struct cache_t *cp = decayed_cache;
	int n_writeback = 0;
	int i;

	/* Leakage: locals	*/
	counter_t incr_count=0;

	/* Leakage: update stats	*/
	if (!cache_leak_is_ctrlled())
		return 0;
	global_tick = 1;	

	/* glock tick arrived, update local counters */
	for (i=0; i<cp->nsets; i++)
	{
		int k;

		for (blk=cp->sets[i].blks, k=0; k< cp->assoc; blk++, k++)
		{

			if(!(blk->status & CACHE_BLK_DECAYED))
			{
				counter_update++;	
				blk->local_counter--;

				/* perform decay here */
				if(blk->local_counter < 0)
				{


					/* decay this cache block */
					/* Leakage: block still valid if no loss of state */
					if( cache_leak_ctrl_is_state_losing()) 
						blk->status &= ~CACHE_BLK_VALID;
					blk->status |= CACHE_BLK_DECAYED;
					blk->time_decayed = sim_cycle;
					n_decay++;

					/* Leakage: update stats	*/
					/* mode switch to low	*/
					mode_switch_h2l_incr();
					incr_count++;

					/* after decay, use local counter to count how long will next miss happen. */
					#if defined(counter_based_adaptive) || defined(combined_adaptive)
						blk->local_counter = blk->local_counter_max;
					#endif /* defined(counter_based_adaptive) || defined(combined_adaptive) */

					/* Leakage: modification */
					/* need to write back dirty decay blocks  if state losing*/
					if((blk->status & CACHE_BLK_DIRTY) && cache_leak_ctrl_is_state_losing())
					{
						cp->writebacks++;	
						n_writeback++;
		     		  	induced_wbacks++;	/* pessimistic estimate */
						/* decayed line could be followed only by reads not resulting in extra wbacks */
  						cp->blk_access_fn(Write, CACHE_MK_BADDR(cp, blk->tag, i /* set */), cp->bsize, blk, sim_cycle);
					}
				}
			}else
			{
			}
		}/* for blk */
	}/* for i */

	/*
	 * Leakage: update stats
	 * leakage throughout the cache assumed uniform. Also to model 
	 * the effect of settling time of leakage current, the lines 
	 * are assumed to be turned off after 'switch_cycles_h2l/2'. 
	 * The assumption is that settling is a linear function of time.
	 */

	low_leak_ratio_incr((double)incr_count/(cp->nsets * cp->assoc), get_switch_cycles_h2l()/2);

	return 0;
#endif
}/* update_cache_decay */ 


void update_cache_block_stats_when_hit(struct cache_t *cp, struct cache_blk_t *blk, enum mem_cmd cmd)
{
	int i;
	int access_interval;

#if defined(cache_decay)
	if( cp == decayed_cache ) 
	{
		if( blk->time_first_access > 0 )
		{
			access_interval = sim_cycle - blk->time_last_access + 1;


			sum_access_interval += access_interval;
			num_access_interval += 1;

			blk->time_last_access = sim_cycle;
			blk->pc_last_access = cur_pc;
			blk->n_access++;
			blk->n_total_access++;
			blk->last_cmd = cmd;
			if (cmd == Read)	blk->n_read++;
			else	blk->n_write++;

			/* reset the counter for each cache hit */
				/* cache hit when power is on, reset the local counter */
				if(blk->local_counter != blk->local_counter_max)
				{
					blk->local_counter = blk->local_counter_max;
					counter_update++;
					/* Leakage: local counter reset */
					n_resets++;
				}
		} else
		{
			i = 0;
		}/* if */

	}/* if cp */
#endif
  
}/* update_cache_block_stats_when_hit */

/* update cache block stats when we are sure the block is dead, current done when it's evicted out of the cache */
void update_cache_block_stats_when_miss(struct cache_t *cp, struct cache_blk_t *repl, enum mem_cmd cmd, int decay_caused_miss) 
{
#if defined(cache_decay)	/* refresh profile when cache block is replaced out */
	if( cp == decayed_cache ) 
	{
		/* if this block has been initialized */
		if( repl->time_first_access > 0 )
		{
			n_profiled_blocks++;

			sum_access += repl->n_access;
			sum_live_time += repl->time_last_access - repl->time_first_access;
			sum_dead_time += sim_cycle - repl->time_last_access;


			if (repl->time_decayed)
			{
				n_invalid_decay += decay_caused_miss;
				n_valid_decay += 1 - decay_caused_miss;
			}

		}/* if */

		/* reset cache blocks, the replaced block is now reset to be a new valid block */
		repl->time_first_access = sim_cycle;
		repl->first_cmd = cmd;

		repl->pc_last_access = cur_pc;
		repl->time_last_access = sim_cycle;
		repl->last_cmd = cmd;

		repl->time_decayed = 0;	/* init to never decayed */
		repl->n_total_miss++;

		repl->n_access = 1;
		repl->n_total_access++;
		repl->n_read = (cmd == Read ? 1 : 0);
		repl->n_write = (cmd == Write ? 1 : 0);


			/* reset the counter for each access */
			if(repl->local_counter != repl->local_counter_max)
			{
				repl->local_counter = repl->local_counter_max;
				counter_update++;
				/* Leakage: local counter reset */
				n_resets++;
			}

	}/* if */
#endif

}/* update_cache_block_stats_when_miss */

/* print cache stats */
void
cache_stats(struct cache_t *cp,		/* cache instance */
	    FILE *stream)		/* output stream */
{
  double sum = (double)(cp->hits + cp->misses);

  fprintf(stream,
	  "cache: %s: %.0f hits %.0f misses %.0f repls %.0f invalidations\n",
	  cp->name, (double)cp->hits, (double)cp->misses,
	  (double)cp->replacements, (double)cp->invalidations);
  fprintf(stream,
	  "cache: %s: miss rate=%f  repl rate=%f  invalidation rate=%f\n",
	  cp->name,
	  (double)cp->misses/sum, (double)(double)cp->replacements/sum,
	  (double)cp->invalidations/sum);
}

extern int b_in_dispatch;

/* access a cache, perform a CMD operation on cache CP at address ADDR,
   places NBYTES of data at *P, returns latency of operation if initiated
   at NOW, places pointer to block user data in *UDATA, *P is untouched if
   cache blocks are not allocated (!CP->BALLOC), UDATA should be NULL if no
   user data is attached to blocks */
unsigned int				/* latency of access in cycles */
cache_access(struct cache_t *cp,	/* cache to access */
	     enum mem_cmd cmd,		/* access type, Read or Write */
	     md_addr_t addr,		/* address of access */
	     void *vp,			/* ptr to buffer for input/output */
	     int nbytes,		/* number of bytes to access */
	     tick_t now,		/* time of access */
	     byte_t **udata,		/* for return of user data ptr */
	     md_addr_t *repl_addr)	/* for address of replaced block */
{
  byte_t *p = vp;
  md_addr_t tag = CACHE_TAG(cp, addr);
  md_addr_t set = CACHE_SET(cp, addr);
  md_addr_t bofs = CACHE_BLK(cp, addr);
  struct cache_blk_t *blk, *repl;
  int lat = 0;
  int possible_real_miss = 0;
  int low_leak_penalty_flag =0;
  int temp;
  int decay_caused_miss = FALSE;	/* TRUE if it's a decay caused miss */


  if (b_in_dispatch)
	  b_in_dispatch = TRUE;
  /* default replacement address */
  if (repl_addr)
    *repl_addr = 0;

  /* check alignments */
  if ((nbytes & (nbytes-1)) != 0 || (addr & (nbytes-1)) != 0)
    fatal("cache: access error: bad size or alignment, addr 0x%08x", addr);

  /* access must fit in cache block */
  /* FIXME:     
	((addr + (nbytes - 1)) > ((addr & ~cp->blk_mask) + (cp->bsize - 1))) */
  if ((addr + nbytes) > ((addr & ~cp->blk_mask) + cp->bsize))
    fatal("cache: access error: access spans block, addr 0x%08x", addr);

  /* permissions are checked on cache misses */

  /* check for a fast hit: access to same block */
  if (CACHE_TAGSET(cp, addr) == cp->last_tagset)
    {
      /* hit in the same block */
      blk = cp->last_blk;
      goto cache_fast_hit;
    }
    
  if (cp->hsize)
    {
      /* higly-associativity cache, access through the per-set hash tables */
      int hindex = CACHE_HASH(cp, tag);

      for (blk=cp->sets[set].hash[hindex];
	   blk;
	   blk=blk->hash_next)
	{
if ((blk->status & CACHE_BLK_DECAYED) &&  cache_leak_is_ctrlled())
low_leak_penalty_flag  = 1;
	  if (blk->tag == tag)
	  {
		  /* Leakage: induced misses only in state losing ctrl techniques	*/
		  if ((blk->status & CACHE_BLK_DECAYED) &&  cache_leak_ctrl_is_state_losing())
		  {
			decay_caused_miss = TRUE;
			induced_decay_misses++;
			break;
		  }
		  else if ((blk->status & CACHE_BLK_DECAYED) &&  (blk->status & CACHE_BLK_VALID)\
		  			&& cache_leak_is_ctrlled())
		  {
  			/* 
			 * Leakage: update stats 
			 * in state preserving ctrl, mode switch to high happens 
			 * on a hit to a decayed block too
			 */

  			mode_switch_l2h_incr ();
			/*
	 		 * leakage throughout the cache assumed uniform. Also to model 
	 		 * the effect of settling time of leakage current, the lines 
	 		 * are assumed to be turned off after 'switch_cycles_l2h/2'. 
	 		 * The assumption is that settling is a linear function of time.
	 		 */
			low_leak_ratio_dcr(1.0/(cp->nsets * cp->assoc), get_switch_cycles_l2h()/2);
		  	
		  	goto cache_hit;
		  }	
		  else if( blk->status & CACHE_BLK_VALID)
			goto cache_hit;
	  }
	  else
		if (blk->status & CACHE_BLK_DECAYED)
		    possible_real_miss = 1;

	}
    }
  else
    {
      /* low-associativity cache, linear search the way list */
      for (blk=cp->sets[set].way_head;
	   blk;
	   blk=blk->way_next)
	{
if ((blk->status & CACHE_BLK_DECAYED) &&  cache_leak_is_ctrlled())
low_leak_penalty_flag  = 1;
	  if (blk->tag == tag)
	  {
		  /* Leakage: induced misses only in state losing ctrl techniques	*/
		  if ((blk->status & CACHE_BLK_DECAYED) &&  cache_leak_ctrl_is_state_losing())
		  {
			decay_caused_miss = TRUE;
		
  	        	if (cp == decayed_cache)
			{
				induced_decay_misses++;
				break;
			}
		  }
		  else if ((blk->status & CACHE_BLK_DECAYED) &&  (blk->status & CACHE_BLK_VALID)\
		  			&& cache_leak_is_ctrlled())
		  {
  			/* 
			 * Leakage: update stats 
			 * in state preserving ctrl, mode switch to high happens 
			 * on a hit to a decayed block too
			 */

  			mode_switch_l2h_incr ();
			/*
	 		 * leakage throughout the cache assumed uniform. Also to model 
	 		 * the effect of settling time of leakage current, the lines 
	 		 * are assumed to be turned off after 'switch_cycles_l2h/2'. 
	 		 * The assumption is that settling is a linear function of time.
	 		 */
			low_leak_ratio_dcr(1.0/(cp->nsets * cp->assoc), get_switch_cycles_l2h()/2);
		  	
		  	goto cache_hit;
		  }	
		  else if( blk->status & CACHE_BLK_VALID)
			goto cache_hit;
	  }
	  else
		if (blk->status & CACHE_BLK_DECAYED)
		    possible_real_miss = 1;
	}
    }

  /* cache block not found */

  /* **MISS** */
  cp->misses++;

  if (cmd == Write) cp->write_misses++;
	else cp->read_misses++;

  if (cp == decayed_cache && !decay_caused_miss && possible_real_miss)
	 real_decay_misses++;




  /* select the appropriate block to replace, and re-link this entry to
     the appropriate place in the way list */
  switch (cp->policy) {
  case LRU:
  case FIFO:
    repl = cp->sets[set].way_tail;

/* FIXMEHZG: replacement policy: choose invalid block first, does this diff from LRU?  */
#if defined(cache_decay)
	if(b_decay_enabled)
	{
		int k, found=0;
		for (blk=cp->sets[set].blks, k=0; k< cp->assoc; blk++, k++)
		{
			/* invalid block has highest priority to be evicted */
			if (!(blk->status & CACHE_BLK_VALID))	
			{
				repl = blk;
				found=1;
				break;
			}
		}
		/* Leakage: if an invalid blk can't be found, find a shutdown one */
		if (!found && cache_leak_ctrl_is_state_losing())
			for (blk=cp->sets[set].blks, k=0; k< cp->assoc; blk++, k++)
			{
				/* invalid block has highest priority to be evicted */
				if (blk->status & CACHE_BLK_DECAYED)	
				{
					repl = blk;
					break;
				}
			}
	}
#endif /* defined(cache_decay) */

    update_way_list(&cp->sets[set], repl, Head);
    break;
  case Random:
    {
      int bindex = myrand() & (cp->assoc - 1);
      repl = CACHE_BINDEX(cp, cp->sets[set].blks, bindex);
    }
    break;
  default:
    panic("bogus replacement policy");
  }

  /* remove this block from the hash bucket chain, if hash exists */
  if (cp->hsize)
    unlink_htab_ent(cp, &cp->sets[set], repl);

  /* blow away the last block to hit */
  cp->last_tagset = 0;
  cp->last_blk = NULL;
 if (low_leak_penalty_flag == 1 && /* repl-> status & CACHE_BLK_DECAYED */ cache_leak_is_ctrlled() )
  {
		temp = get_low_leak_penalty();
	/* latency hiding assumed */
		  lat += get_low_leak_penalty() ;
  }


  /* Leakage: update stats */
  /* mode switch to high happens if   block to be evicted is decayed*/
  if (repl->status & CACHE_BLK_DECAYED)
  {
  	mode_switch_l2h_incr ();
	/*
	 * leakage throughout the cache assumed uniform. Also to model 
	 * the effect of settling time of leakage current, the lines 
	 * are assumed to be turned off after 'switch_cycles_l2h/2'. 
	 * The assumption is that settling is a linear function of time.
	 */
	low_leak_ratio_dcr(1.0/(cp->nsets * cp->assoc), get_switch_cycles_l2h()/2);
  }

  /* write back replaced block data */
  if (repl->status & CACHE_BLK_VALID)
    {
      cp->replacements++;

      if (repl_addr)
		*repl_addr = CACHE_MK_BADDR(cp, repl->tag, set);
 
      /* don't replace the block until outstanding misses are satisfied */
      lat += BOUND_POS(repl->ready - now);
 
      /* stall until the bus to next level of memory is available */
      lat += BOUND_POS(cp->bus_free - (now + lat));
 
      /* track bus resource usage */
      cp->bus_free = MAX(cp->bus_free, (now + lat)) + 1;

      if (repl->status & CACHE_BLK_DIRTY)
	{
	  /* write back the cache block */
	  cp->writebacks++;


	  lat += cp->blk_access_fn(Write,
				   CACHE_MK_BADDR(cp, repl->tag, set),
				   cp->bsize, repl, now+lat);
	}
    }/* if */

	if (b_decay_profile_enabled)
		update_cache_block_stats_when_miss(cp, repl, cmd, decay_caused_miss);

  /* update block tags */
  repl->tag = tag;
  repl->status = CACHE_BLK_VALID;	/* dirty bit set on update */
  repl->status &= ~CACHE_BLK_DECAYED;	/* not decayed	*/

  /* read data block */ 
  lat += cp->blk_access_fn(Read, CACHE_BADDR(cp, addr), cp->bsize, repl, now+lat);

  /* copy data out of cache block */
  if (cp->balloc)
    {
      CACHE_BCOPY(cmd, repl, bofs, p, nbytes);
    }

  /* update dirty status */
  if (cmd == Write)
  {
    repl->status |= CACHE_BLK_DIRTY;
	repl->time_dirty = sim_cycle;
  }

  /* get user block data, if requested and it exists */
  if (udata)
    *udata = repl->user_data;
/* Leakage: for misses in low leak mode */

 
  /* update block status */
  repl->ready = now+lat;

  /* link this entry back into the hash table */
  if (cp->hsize)
    link_htab_ent(cp, &cp->sets[set], repl);

  /* return latency of the operation */
  return lat;


 cache_hit: /* slow hit handler */

  /* Leakage: for hits in low leak mode */

  if (blk-> status & CACHE_BLK_DECAYED && cache_leak_is_ctrlled() )
  {
  	blk->status &= ~CACHE_BLK_DECAYED;
		temp = get_low_leak_penalty();
	/* latency hiding assumed */
	if (blk->ready < now + get_low_leak_penalty ())
	  blk->ready = now + get_low_leak_penalty() +cp->hit_latency  ;
  }

	if (b_decay_profile_enabled)
		update_cache_block_stats_when_hit(cp, blk, cmd);

  /* **HIT** */
  cp->hits++;

  /* copy data out of cache block, if block exists */
  if (cp->balloc)
    {
      CACHE_BCOPY(cmd, blk, bofs, p, nbytes);
    }

  /* update dirty status */
  if (cmd == Write)
  {
    blk->status |= CACHE_BLK_DIRTY;
	blk->time_dirty = sim_cycle;
  }

  /* if LRU replacement and this is not the first element of list, reorder */
  if (blk->way_prev && cp->policy == LRU)
    {
      /* move this block to head of the way (MRU) list */
      update_way_list(&cp->sets[set], blk, Head);
    }

  /* tag is unchanged, so hash links (if they exist) are still valid */

  /* record the last block to hit */
  cp->last_tagset = CACHE_TAGSET(cp, addr);
  cp->last_blk = blk;

  /* get user block data, if requested and it exists */
  if (udata)
    *udata = blk->user_data;

  /* return first cycle data is available to access */
  return (int) MAX(cp->hit_latency, (blk->ready - now));

 cache_fast_hit: /* fast hit handler */

  /* Leakage: for hits in low leak mode */

  if (blk-> status & CACHE_BLK_DECAYED)
  	fatal ("can't have decayed block in fast_hit");

	if (b_decay_profile_enabled)
		update_cache_block_stats_when_hit(cp, blk, cmd);
  
  /* **FAST HIT** */
  cp->hits++;

  /* copy data out of cache block, if block exists */
  if (cp->balloc)
    {
      CACHE_BCOPY(cmd, blk, bofs, p, nbytes);
    }

  /* update dirty status */
  if (cmd == Write)
  {
    blk->status |= CACHE_BLK_DIRTY;
	blk->time_dirty = sim_cycle;
  }

  /* this block hit last, no change in the way list */

  /* tag is unchanged, so hash links (if they exist) are still valid */

  /* get user block data, if requested and it exists */
  if (udata)
    *udata = blk->user_data;

  /* record the last block to hit */
  cp->last_tagset = CACHE_TAGSET(cp, addr);
  cp->last_blk = blk;

  /* return first cycle data is available to access */
  return (int) MAX(cp->hit_latency, (blk->ready - now));
}/* cache_access */

/* return non-zero if block containing address ADDR is contained in cache
   CP, this interface is used primarily for debugging and asserting cache
   invariants */
int					/* non-zero if access would hit */
cache_probe(struct cache_t *cp,		/* cache instance to probe */
	    md_addr_t addr)		/* address of block to probe */
{
  md_addr_t tag = CACHE_TAG(cp, addr);
  md_addr_t set = CACHE_SET(cp, addr);
  struct cache_blk_t *blk;

  /* permissions are checked on cache misses */


  if (cp->hsize)
  {
    /* higly-associativity cache, access through the per-set hash tables */
    int hindex = CACHE_HASH(cp, tag);
    
    for (blk=cp->sets[set].hash[hindex];
	 blk;
	 blk=blk->hash_next)
    {	
      if (blk->tag == tag && (blk->status & CACHE_BLK_VALID))
	  return TRUE;
    }
  }
  else
  {
    /* low-associativity cache, linear search the way list */
    for (blk=cp->sets[set].way_head;
	 blk;
	 blk=blk->way_next)
    {
      if (blk->tag == tag && (blk->status & CACHE_BLK_VALID))
	  return TRUE;
    }
  }
  
  /* cache block not found */
  return FALSE;
}/* cache_probe */

/* flush the entire cache, returns latency of the operation */
unsigned int				/* latency of the flush operation */
cache_flush(struct cache_t *cp,		/* cache instance to flush */
	    tick_t now)			/* time of cache flush */
{
  int i, lat = cp->hit_latency; /* min latency to probe cache */
  struct cache_blk_t *blk;

  /* blow away the last block to hit */
  cp->last_tagset = 0;
  cp->last_blk = NULL;

  /* no way list updates required because all blocks are being invalidated */
  for (i=0; i<cp->nsets; i++)
    {
      for (blk=cp->sets[i].way_head; blk; blk=blk->way_next)
	{
	  if (blk->status & CACHE_BLK_VALID)
	    {
	      cp->invalidations++;
	      blk->status &= ~CACHE_BLK_VALID;

	      if (blk->status & CACHE_BLK_DIRTY)
		{
		  /* write back the invalidated block */
          	  cp->writebacks++;
		  lat += cp->blk_access_fn(Write,
					   CACHE_MK_BADDR(cp, blk->tag, i),
					   cp->bsize, blk, now+lat);
		}
	    }
	}
    }

  /* return latency of the flush operation */
  return lat;
}/* cache_flush */

/* flush the block containing ADDR from the cache CP, returns the latency of
   the block flush operation */
unsigned int				/* latency of flush operation */
cache_flush_addr(struct cache_t *cp,	/* cache instance to flush */
		 md_addr_t addr,	/* address of block to flush */
		 tick_t now)		/* time of cache flush */
{
  md_addr_t tag = CACHE_TAG(cp, addr);
  md_addr_t set = CACHE_SET(cp, addr);
  struct cache_blk_t *blk;
  int lat = cp->hit_latency; /* min latency to probe cache */

  if (cp->hsize)
    {
      /* higly-associativity cache, access through the per-set hash tables */
      int hindex = CACHE_HASH(cp, tag);

      for (blk=cp->sets[set].hash[hindex];
	   blk;
	   blk=blk->hash_next)
	{
	  if (blk->tag == tag && (blk->status & CACHE_BLK_VALID))
	    break;
	}
    }
  else
    {
      /* low-associativity cache, linear search the way list */
      for (blk=cp->sets[set].way_head;
	   blk;
	   blk=blk->way_next)
	{
	  if (blk->tag == tag && (blk->status & CACHE_BLK_VALID))
	    break;
	}
    }

  if (blk)
    {
      cp->invalidations++;
      blk->status &= ~CACHE_BLK_VALID;

      /* blow away the last block to hit */
      cp->last_tagset = 0;
      cp->last_blk = NULL;

      if (blk->status & CACHE_BLK_DIRTY)
	{
	  /* write back the invalidated block */
          cp->writebacks++;
	  lat += cp->blk_access_fn(Write,
				   CACHE_MK_BADDR(cp, blk->tag, set),
				   cp->bsize, blk, now+lat);
	}
      /* move this block to tail of the way (LRU) list */
      update_way_list(&cp->sets[set], blk, Tail);
    }

  /* return latency of the operation */
  return lat;
} /* cache_flush_addr */

/* Leakage: extra routines added here */

double ln2 (double x)
{
	return log10(x) / log10(2.0);
}

void cache_leak_init (void)
{
	
	n_lines = decayed_cache->nsets * decayed_cache->assoc;
	cache_size = n_lines * decayed_cache->bsize;

	/* local width =  bits_per_counter	*/ 
	local_width = ln2(local_counter_max + 1); 

	/* global width = bits_per_counter	*/ 
	global_width = ln2(global_counter_max + 1);

	/* tag size = virtual_addr_size - ln(nsets*bsize)	*/
	v_addr_size = sizeof (md_addr_t) * 8;
	tag_size = v_addr_size - (ln2(decayed_cache->nsets) + ln2(decayed_cache->bsize)) + CACHE_BLK_NFLAGS;
	tag_array_size = (tag_size * n_lines)/8; /* bytes */

	/* store the power estimates for leakage modeling overhead	*/

	/* overhead power modeled as simple array  */
	global_af = 1.0/global_width;	/* assuming gray coding	*/
	local_af = 0.5; 

	/* global counter power - per access	*/
	global_access_power = simple_array_wordline_power(1,global_width,1,1,0);
	/* no decoder power - may need to FIX THIS */
	global_access_power += global_af * simple_array_bitline_power(1,global_width,1,1,0);

	/* local counter power - per access	*/
	local_access_power = simple_array_wordline_power(n_lines,local_width,1,1,0);
	/* no decoder power - may need to FIX THIS */
	local_access_power += local_af * simple_array_bitline_power(n_lines,local_width,1,1,0);

	/* power per local counter reset */
	local_reset_power = simple_array_wordline_power(1,local_width,1,1,0);
	/* no decoder power - may need to FIX THIS */
	local_reset_power += local_af * simple_array_bitline_power(1,local_width,1,1,0);
}

/* 
 * ratio between 'xtra' leakage and 'orig' leakage.
 * note that we are approximating the counters and 
 * associated logic as array  structures. if not, 
 * appropriate leakage calculation routine in to be 
 * called in this function
 */

double cache_get_ctrl_ovhd_ratio (enum leak_ctrl_type_t type)
{
	double xtra2orig_ratio;
	
	switch (type)
	{
		/* assuming all of these use n bit counters 	*/
		case GatedVss:
		case Drowsy:
		case RBB:
		/* n bits for every line and a constant global counter 	*/
			xtra2orig_ratio = ((double) local_width) / (decayed_cache->bsize*8+tag_size) ;
			xtra2orig_ratio +=((double) global_width) /(8*(cache_size+tag_array_size));
			break;
		case None:
		default:
			xtra2orig_ratio = 0;
			break;
	}

	return  xtra2orig_ratio;
}

/*
 * get an estimate of dynamic power for the overhead logic per cycle
 * Note: right now, the counter array of the xtra logic is considered 
 * as a simple array with n_cache_lines rows and bits_per_counter 
 * columns. 
 */

double cache_get_xtra_power(enum leak_ctrl_type_t type)
{
	double xtra_power = 0;

	switch (type)
	{
		/* assuming all of these use n bit counters 	*/
	   case GatedVss:
	   case Drowsy:
	   case RBB:

			/* global counter ticks every cycle -  so charge one global access every cycle */
			xtra_power += global_access_power;

			/* power due to any counter resets */
			xtra_power += n_resets * local_reset_power;

			/* power due to update of local counters */
			if (global_tick)
				xtra_power += local_access_power;

			break;

	   case None:
	   default:
			break;
	}

	/* reset measurements	*/
	global_tick = 0;
	n_resets = 0;

	return xtra_power;
}

#endif

