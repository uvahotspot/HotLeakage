/* ***************************************************************
The following is the license agreement for all components in this
archive with exceptions listed in Section II.

I. LICENSE	

Copyright (c)2003 Dharmesh Parikh, Yan Zhang, Karthik Sankaranarayanan, Kevin Skadron, and
Mircea R. Stan.  All rights reserved.

Permission is hereby granted, without written agreement and without
license or royalty fees, to use, copy, modify, and distribute this
software and its documentation for any purpose, provided that the
above copyright notice and the following four paragraphs appear in all
copies of this software, whether in binary form or not.

IN NO EVENT SHALL THE AUTHORS, THE UNIVERSITY OF VIRGINIA, OR THE
STATE OF VIRGINIA BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE
OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THEY HAVE BEEN ADVISED
OF THE POSSIBILITY OF SUCH DAMAGE.

THE AUTHORS, THE UNIVERSITY OF VIRGINIA, AND THE STATE OF VIRGINIA
SPECIFICALLY DISCLAIM ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE. THE SOFTWARE PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND
THE AUTHORS HAVE NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT,
UPDATES, ENHANCEMENTS, OR MODIFICATIONS.

NEITHER THE NAME OF ANY VIRGINIA ENTITY NOR THE NAMES OF THE
CONTRIBUTORS MAY BE USED TO ENDORSE OR PROMOTE PRODUCTS
DERIVED FROM THIS SOFTWARE WITHOUT SPECIFIC PRIOR WRITTEN
PERMISSION.

If you use this software or a modified version of it, please cite the
following paper or an appropriate updated version by the same authors: 
Y. Zhang, D. Parikh, K. Sankaranarayanan, K. Skadron, and M. R. Stan. "HotLeakage: An
Architectural, Temperature-Aware Model of Subthreshold and Gate
Leakage".  University of Virginia Dept. of Computer Science
Tech. Report CS-2003-05, Mar. 2003.


II. EXCEPTIONS

SimpleScalar
------------
SimpleScalar simulators, tools, and functions are held under license by
SimpleScalar LLC.  SimpleScalar is licensed under the following terms.

   SimpleScalar Tool Suite
   (c)1994-2001 Todd M. Austin, Ph.D. and SimpleScalar, LLC
   All Rights Reserved. 

   THIS IS A LEGAL DOCUMENT
   BY USING SIMPLESCALAR,
   YOU ARE AGREEING TO THESE TERMS AND CONDITIONS.

   No portion of this work may be used by any commercial entity, or
   for any commercial purpose, without the prior, written permission 
   of SimpleScalar, LLC (info@simplescalar.com). Nonprofit and 
   noncommercial use is permitted as described below.

     1. SimpleScalar is provided AS IS, with no warranty of any kind,
     express or implied. The user of the program accepts full
     responsibility for the application of the program and the use of any
     results.

     2. Nonprofit and noncommercial use is encouraged. SimpleScalar
     may be downloaded, compiled, executed, copied, and modified
     solely for nonprofit, educational, noncommercial research, and
     noncommercial scholarship purposes provided that this notice in its
     entirety accompanies all copies. Copies of the modified software
     can be delivered to persons who use it solely for nonprofit,
     educational, noncommercial research, and noncommercial
     scholarship purposes provided that this notice in its entirety
     accompanies all copies.

     3. ALL COMMERCIAL USE, AND ALL USE BY FOR PROFIT
     ENTITIES, IS EXPRESSLY PROHIBITED WITHOUT A LICENSE
     FROM SIMPLESCALAR, LLC (info@simplescalar.com).

     4. No nonprofit user may place any restrictions on the use of this
     software, including as modified by the user, by any other authorized
     user.

     5. Noncommercial and nonprofit users may distribute copies of
     SimpleScalar in compiled or executable form as set forth in Section
     2, provided that either: (A) it is accompanied by the corresponding
     machine-readable source code, or (B) it is accompanied by a
     written offer, with no time limit, to give anyone a machine-readable
     copy of the corresponding source code in return for reimbursement
     of the cost of distribution. This written offer must permit verbatim
     duplication by anyone, or (C) it is distributed by someone who
     received only the executable form, and is accompanied by a copy of
     the written offer of source code.

     6. SimpleScalar was developed by Todd M. Austin, Ph.D. The tool
     suite is currently maintained by SimpleScalar LLC
     (info@simplescalar.com). US Mail: 2395 Timbercrest Court, Ann
     Arbor, MI 48105.

   Copyright (c)1994-2001 by Todd M. Austin, Ph.D. and SimpleScalar, LLC.


Wattch
------
Wattch is a microarchitectural power model built on top of
simplescalar.  At the time this document was written, there were no
licensing restrictions on Wattch itself, but users should check the Wattch homepage at
http://www.ee.princeton.edu/~dbrooks/wattch-form.html

Wattch is built on SimpleScalar and CACTI and hence is still subject to the
licensing terms associated with those software releases.


CACTI
-----
CACTI is subject to the following licensing terms.

Copyright 1994 Digital Equipment Corporation and Steve Wilton, All
Rights Reserved

   Permission to use, copy, and modify this software and its documentation is
   hereby granted only under the following terms and conditions.   Both the
   above copyright notice and this permission notice must appear in all copies
   of the software, derivative works or modified versions, and any portions
   thereof, and both notices must appear in supporting documentation.

   Users of this software agree to the terms and conditions set forth herein,
   and hereby grant back to Digital a non-exclusive, unrestricted, royalty-
   free right and license under any changes, enhancements or extensions
   made to the core functions of the software, including but not limited to
   those affording compatibility with other hardware or software
   environments, but excluding applications which incorporate this software.
   Users further agree to use their best efforts to return to Digital any
   such changes, enhancements or extensions that they make and inform Digital
   of noteworthy uses of this software.  Correspondence should be provided
   to Digital at:

                       Director of Licensing 
                       Western Research Laboratory 
                       Digital Equipment Corporation
                       100 Hamilton Avenue 
                       Palo Alto, California  94301

   This software may be distributed (but not offered for sale or transferred
   for compensation) to third parties, provided such third parties agree to
   abide by the terms and conditions of this notice.

   THE SOFTWARE IS PROVIDED "AS IS" AND DIGITAL EQUIPMENT CORP. DISCLAIMS ALL
   WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES
   OF MERCHANTABILITY AND FITNESS.    IN NO EVENT SHALL DIGITAL EQUIPMENT
   CORPORATION BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
   DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
   PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
   ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
   OF THIS SOFTWARE


Cache Decay
-----------
Our functions to implement various forms of cache leakage control are
based on the original cache-decay codebase provided by Zhigang Hu and
Margaret Martonosi of Princeton University and Stefanos Kaxiras of
Agere Corp.  This code consists chiefly of the functions
update_cache_stats(), update_cache_decay(),
update_cache_block_stats_when_hit(),
update_cache_block_stats_when_miss(), and various other changes in
sim-outorder.c and cache.c.  These Princeton/Agere modifications are
subject to the following license terms:

This software is provided subject to the following terms and
conditions, which you should read carefully before using the
software. Using this software indicates your acceptance of these terms
and conditions.  If you do not agree with these terms and conditions,
do not use the software.

   Copyright (c) 2002,2003 Agere Systems
   All rights reserved.

   Redistribution and use in source or binary forms, with or
   without modifications, are permitted provided that the
   following conditions are met:

   - Redistributions of source code must retain the above
     copyright notice, this list of conditions and the
     following Disclaimer in comments in the code as well as
     in the documentation and/or other materials provided with
     the distribution.
   - Redistributions in binary form must reproduce the above
     copyright notice, this list of conditions and the following
     Disclaimer in the documentation and/or other materials
     provided with the distribution.
   - Neither the name of Agere Systems nor the names of the
     contributors may be used to endorse or promote products
     derived from this software without specific prior written
     permission.

   Disclaimer:
   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, INFRINGEMENT AND THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
   PURPOSE ARE DISCLAIMED. ANY USE, MODIFICATION OR DISTRIBUTION OF
   THIS SOFTWARE IS SOLELY AT THE USER'S OWN RISK. IN NO EVENT SHALL
   AGERE SYSTEMS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
   INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
   BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
   CAUSED AND ON ANY THEORY OF LIABILITY, INCLUDING, BUT NOT LIMITED
   TO, CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
   OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
   EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************* */

/*
 *
 * Revision 0.91
 * HotLeakage Leakage Modeling Tool
 * Leakage power calculation for the TAG arrays
        of all the caches fixed (With feedback from Ruchira Sasanka)
 * Leakage power for copmarators and mux-drivers
         fixed for all the caches.
 *
*/

#include "cache.h"
#include "cache_leak_ctrl.h"
#include "leakage.h"
#include "stats.h"
#include "options.h"
#include "misc.h"

/* externs */
extern tick_t sim_cycle;
extern struct cache_t *cache_il1;
extern struct cache_t *cache_dl1;
extern struct cache_t *cache_dl2;
extern struct cache_t *itlb;
extern struct cache_t *dtlb;
extern leakage_power_type leakage_power;
/* 
 * Turnoff/turnon scheduler data structures for measuring 
 * leakage effects of cache line shutoffs and power ons 
 * scheduled for future. This helps in modeling the effect 
 * of "time to turn on/off" (leakage settles some finite 
 * time after turn-off. same MIGHT hold good for power on)
 */

#define MAXELE	1024
#define NONE -1

typedef struct sched_list_ele_t
{
	double val;
	tick_t when;
}sched_list_ele;

typedef struct sched_list_t
{
	sched_list_ele ele[MAXELE];
	unsigned int head;
	unsigned int tail;
}sched_list;

sched_list incr_list={0}, dcr_list={0};



/* Supply Voltage for L1-ICaches */
extern double Vdd_L1_ICache;

/* Supply Voltage for L1-DCaches */
extern double Vdd_L1_DCache;


/* Supply Voltage for L1-ICaches */
extern double Vdd_L2_ICache;

/* Supply Voltage for L1-DCaches */
extern double Vdd_L2_DCache;
/* stats collected              */

/* baseline leakage energy - without control	*/
static double total_baseline_leak;

/* leakage energy spent due to 'xtra'		*/
static double total_xtra_leak;

/* leakage power saved due to control		*/
static double total_orig_leak_savings;

/* dynamic power due to 'xtra'			*/
static double total_xtra_dynamic_power;

/* low to high mode switch dynamic power 	*/
static double total_mode_switch_power_l2h;

/* high to low mode switch dynamic power 	*/
static double total_mode_switch_power_h2l;

/* total turnoff ratio	*/
static double total_low_leak_ratio;

/* lym */
static double total_subleak_savings, total_gleak_savings;
static double total_subleak,total_gleak;
static double total_bitlineleak;

/* 
 * note: hidden power due to extra latency is not 
 * explicitly modeled. it is subsumed in the general
 * processor modeling 
 */

/* total number of low to high mode switches	*/
static counter_t total_mode_switch_l2h;

/* total number of high to low mode switches	*/
static counter_t total_mode_switch_h2l;


/* some  parameters - that are static */

/* The control technique used	*/
enum leak_ctrl_type_t ctrl_type;

/* ratio of 'xtra' leakage to 'orig' leakage	*/
static double xtra2orig_ratio;

/* low to high switch time */
static unsigned int switch_cycles_l2h;

/* high to low switch time */
static unsigned int switch_cycles_h2l;

/* low to high per switch power */
static double switch_cost_l2h;

/* high to low per switch power */
static double switch_cost_h2l;

/* extra latency in low leakage mode		*/
static int low_leak_penalty;


/* some  parameters - that can vary dynamically	*/

/* ratio of 'low leakage' to total leakage	*/
static double low_leak_ratio; 

/* 
 * per cycle stats - for dynamic power calculations. 
 * cleared every cycle 
 */

/* number of low to high mode switches		*/
static counter_t mode_switch_l2h;

/* number of high to low mode switches		*/
static counter_t mode_switch_h2l;



/* Leakage: definitions	*/

static enum leak_ctrl_type_t cache_ctrl_type;
static char *cache_ctrl_type_str;
static unsigned int cache_l2h_switch_cycles;
static unsigned int cache_h2l_switch_cycles;
static double cache_l2h_switch_power;
static double cache_h2l_switch_power;
static unsigned int cache_leak_ctrl_penalty;

/* Leakage: register options */
   
void cache_leak_ctrl_reg_options(struct opt_odb_t *odb)
{
  opt_reg_string(odb, "-cache_leak_ctrl:type",
	      "leakage control type {none|gatedVss|drowsy|RBB}",
	      &cache_ctrl_type_str, /* default */"gatedVss",
	      /* print */TRUE, /* format */NULL);

  opt_reg_uint(odb, "-cache_leak_ctrl:switch_cycles_l2h",
	      "time for low to high switch",
	      &cache_l2h_switch_cycles, /* default */0,
	      /* print */TRUE, /* format */NULL);

  opt_reg_uint(odb, "-cache_leak_ctrl:switch_cycles_h2l",
	      "time for high to low switch",
	      &cache_h2l_switch_cycles, /* default */300,
	      /* print */TRUE, /* format */NULL);

  opt_reg_double(odb, "-cache_leak_ctrl:switch_power_l2h",
	      "low to high switch cost",
	      &cache_l2h_switch_power, /* default */0,
	      /* print */TRUE, /* format */NULL);

  opt_reg_double(odb, "-cache_leak_ctrl:switch_power_h2l",
	      "high to low switch cost",
	      &cache_h2l_switch_power, /* default */0,
	      /* print */TRUE, /* format */NULL);

  opt_reg_uint(odb, "-cache_leak_ctrl:penalty",
	      "extra latency in low leak mode",
	      &cache_leak_ctrl_penalty, /* default */0,
	      /* print */TRUE, /* format */NULL);
	
}

/* Leakage: check options */

void cache_leak_ctrl_check_options(struct opt_odb_t *odb, int argc, char **argv)
{
	if (!mystricmp(cache_ctrl_type_str, "none"))
		cache_ctrl_type = None;
	else if (!mystricmp(cache_ctrl_type_str, "gatedVss"))
		cache_ctrl_type = GatedVss;
	else if (!mystricmp(cache_ctrl_type_str, "drowsy"))
		cache_ctrl_type = Drowsy;
	else if (!mystricmp(cache_ctrl_type_str, "RBB"))
		cache_ctrl_type = RBB;
	else 
    		fatal("cannot parse cache_ctrl type `%s'", cache_ctrl_type);

	cache_leak_ctrl_init (cache_ctrl_type,\
			    cache_l2h_switch_cycles,\
			    cache_h2l_switch_cycles,\
			    cache_l2h_switch_power,\
			    cache_h2l_switch_power,\
			    cache_leak_ctrl_penalty);
}








/* routines 	*/

/* turnoff/turnon scheduler routines	*/

/* initialization	*/
void sched_list_init (void)
{
	incr_list.head = dcr_list.head = NONE;	/* first filled location	*/
	incr_list.tail = dcr_list.tail = 0;		/* next free location		*/
}



/* print routine - for debug 	*/
void  sched_list_print (sched_list *list)
{
	int i, idx;
	debug("printing list...\n");

	/* list full	*/
	if(list->head == list->tail)
		for (i=0; i < MAXELE; i++)
		{
			idx = (i+list->head)%MAXELE;
			debug("val=%4.2lg, when=%u\n", list->ele[idx].val, (unsigned)list->ele[idx].when);
		}
	else
		for (i=list->head; (i != list->tail) && (list->head != NONE); i=(i+1)%MAXELE)
			debug("val=%4.2lg, when=%u\n", list->ele[i].val, (unsigned)list->ele[i].when);

	debug("\n");
}

/* schedule a new turnon/turnoff	*/
void insert_ele (sched_list *list, sched_list_ele ele)
{
	int i,pos;

	if (list->head == list->tail)
		fatal("turnoff/on scheduler list - space not sufficient\n");
	else if (list->head == NONE)
	{
		list->head = 0;
		list->ele[list->head]=ele;
		list->tail=(list->head+1)%MAXELE;
	}
	else
	{
		/* keep the ascending order of the list	*/

		for (i=list->head; (i != list->tail) && (list->ele[i].when < ele.when); i=(i+1)%MAXELE);
		pos=i;

		/* merge duplicates and increment 'val' accordingly	*/

		if (list->ele[pos].when == ele.when)
		{
			list->ele[pos].val+=ele.val;
			return;
		}

		/* shift by one	if needed */
		if(pos != list->tail)
			for (i=list->tail; i != pos; i=(i+MAXELE-1)%MAXELE)
				list->ele[i]=list->ele[(i+MAXELE-1)%MAXELE];

		/* insert element	*/
		list->ele[pos] = ele;
		list->tail=(list->tail+1)%MAXELE;
	}
}

/* find turnon/turnoff scheduled for now and remove from list	*/
double get_delta_now (sched_list *list, tick_t now)
{
	int i, count=0;
	double delta=0;

	if (list->head == NONE)
		return delta;

	/* sorted list. so 'now' should only be first	*/

	if(list->ele[list->head].when < now)
		fatal ("turnoff/on scheduler list - obsolete element found\n");
	
	if(list->head == list->tail)	/* list full	*/
		for (i=0; (i < MAXELE) && (list->ele[(i+list->head)%MAXELE].when == now); i++)
		{
			count++;
			delta+=list->ele[(i+list->head)%MAXELE].val;
		}
	else
		for (i=list->head; (i != list->tail) && (list->ele[i].when == now); i=(i+1)%MAXELE)
		{
			count++;
			delta+=list->ele[i].val;
		}

	list->head = (list->head+count)%MAXELE;

	if (list->head == list->tail && count != 0)
		list->head = NONE;

	return delta;
	
}

/* schedule increment of low_leak_ratio at cycle "when" 	*/
void schedule_incr (double delta, tick_t when)
{
	sched_list_ele ele;
	ele.val=delta;
	ele.when=when;
	insert_ele(&incr_list,ele);
}

/* schedule decrement of low_leak_ratio at cycle "when" 	*/
void schedule_dcr (double delta, tick_t when)
{
	sched_list_ele ele;
	ele.val=delta;
	ele.when=when;
	insert_ele(&dcr_list,ele);
}

/* dispatch increments scheduled for this cycle 	*/
void dispatch_incr (void)
{
	double incr = get_delta_now (&incr_list, sim_cycle);
	low_leak_ratio_incr (incr, 0);	/* increment now	*/
}

/* dispatch decrements scheduled for this cycle 	*/
void dispatch_dcr (void)
{
	double dcr = get_delta_now (&dcr_list, sim_cycle);	
	low_leak_ratio_dcr (dcr, 0);	/* decrement now	*/
}

/* exposed interface routines	*/

/* initialization	*/
void  cache_leak_ctrl_init (enum leak_ctrl_type_t type, \
			    unsigned int l2h_switch_cycles,\
			    unsigned int h2l_switch_cycles,\
			    double l2h_switch_power,\
			    double h2l_switch_power,\
			    int  leak_ctrl_penalty)
{
	cache_leak_init();
	sched_list_init();	/* initialization for turnoff scheduler	*/
	ctrl_type = type;
	switch_cycles_l2h = l2h_switch_cycles;
	switch_cycles_h2l = h2l_switch_cycles;
	switch_cost_l2h = l2h_switch_power;
	switch_cost_h2l = h2l_switch_power;
	low_leak_penalty = leak_ctrl_penalty;
	xtra2orig_ratio = cache_get_ctrl_ovhd_ratio (type);

	total_xtra_leak = 0;
	total_orig_leak_savings = 0;
	total_xtra_dynamic_power = 0;
	total_mode_switch_power_l2h = 0;
	total_mode_switch_power_h2l = 0;

	total_mode_switch_l2h = 0;
	total_mode_switch_h2l = 0;

	low_leak_ratio = 0;
	total_low_leak_ratio = 0;

/* lym */
        total_subleak_savings = total_gleak_savings = 0;
	total_subleak = total_gleak = 0;
	total_bitlineleak = 0;

	cache_leak_ctrl_clear_stats ();
}

/* clear per cycle stats	*/
void cache_leak_ctrl_clear_stats (void)
{
	mode_switch_l2h = 0;
	mode_switch_h2l = 0;
}

/* uninitialization	*/
void cache_leak_ctrl_uninit (void)
{
	/* Nothing as yet now	*/
}

/* update per cycle stats 	*/
void cache_leak_ctrl_update_stats (void)
{
	/* 
	 * first dispatch the incr/dcr of low_leak_ratio
	 * scheduled for this cycle
	 */
	if(switch_cycles_h2l) 
		dispatch_incr();
	if(switch_cycles_l2h)
		dispatch_dcr();

	/* now update the stats	*/

	/* 
	 * Note: though most of the following remain constant 
	 * cycle after cycle, they are modeled here instead of 
	 * being calculated in cache_leak_ctrl_end. This allows
	 * for leakage modeling to model dynamic effects (like 
	 * increase of temperature etc..)
	 */

	total_baseline_leak += baseline_leak();
	total_xtra_leak += xtra_leak();
	total_orig_leak_savings += orig_leak_savings();
	total_mode_switch_power_h2l += mode_switch_power_h2l(); 
	total_mode_switch_power_l2h += mode_switch_power_l2h(); 
	total_xtra_dynamic_power += xtra_dynamic_power();
	total_low_leak_ratio += low_leak_ratio;

/* lym */
        total_subleak_savings += subleak_savings();
	total_gleak_savings += gleak_savings();

	total_subleak += cache_active_subleakage(decayed_cache);
	total_gleak += cache_active_gateleakage(decayed_cache);

	total_bitlineleak += cache_bitline_leakage(decayed_cache); /* lym */

	/* clear per cycle stats	*/
	cache_leak_ctrl_clear_stats();
}

/* access functions for updating stats	*/
void mode_switch_l2h_incr (void)
{
	mode_switch_l2h++;
	total_mode_switch_l2h++;
}

void mode_switch_h2l_incr (void)
{
	mode_switch_h2l++;
	total_mode_switch_h2l++;
}

/* 'when' is the no. of cycles after which this should occur */
void low_leak_ratio_incr (double delta, unsigned int when)
{

	if (when == 0)	/* now	*/
		low_leak_ratio += delta;
	else			/* schedule it at appropriate time	*/
		schedule_incr (delta, sim_cycle+when);
}

/* 'when' is the no. of cycles after which this should occur */
void low_leak_ratio_dcr (double delta, unsigned int when)
{
	if (when == 0)	/* now	*/
		low_leak_ratio -= delta;
	else			/* schedule it at appropriate time	*/
		schedule_dcr (delta, sim_cycle+when);
}


/* leakage power calculation functions	*/

/* baseline leakage */
double baseline_leak ()
{
  /* need change here to different cache structure*/

 double active_leakage;

 /* if we consider the gate leakage in the leakage reduction techniques.*/

#if defined(TECH_070)
//active_leakage =leakage_power.dl1_data + leakage_power.dl1_tag+leakage_power.dl1_cell_gate_leakage+leakage_power.dl1_tag_gate_leakage;

#endif



return cache_active_leakage (decayed_cache);

   
}

/* leakage due to 'xtra' */
double xtra_leak (void)
{

//	return  xtra2orig_ratio * baseline_leak();
 return  xtra2orig_ratio * cache_active_leakage (decayed_cache);
}

/* leakage_savings due to ctrl	*/
double orig_leak_savings (void)
{
 double active_leakage;
 double standby_leakage;
 active_leakage= baseline_leak ();


// fprintf(stderr," baseline leak unit: %g\n",cache_active_leakage(decayed_cache));
// fprintf(stderr," standby leak unit: %g\n",cache_standby_leakage(decayed_cache,ctrl_type));
// fprintf(stderr," low_leak_ratio: %g\n",low_leak_ratio);
// printf("%f	%f	%f	%f\n",cache_active_subleakage(decayed_cache),cache_standby_subleakage(decayed_cache,ctrl_type),cache_active_gateleakage(decayed_cache),cache_standby_gateleakage(decayed_cache,ctrl_type));

//return (low_leak_ratio * (cache_active_leakage (decayed_cache) - cache_standby_leakage(decayed_cache,ctrl_type)));
return (low_leak_ratio * cache_standby_leakage(decayed_cache,ctrl_type) + (1-low_leak_ratio) * cache_active_leakage(decayed_cache));
/* lym */

}

/* lym */
double subleak_savings (void)
{
//return (low_leak_ratio * (cache_active_subleakage(decayed_cache)-cache_standby_subleakage(decayed_cache,ctrl_type))) - xtra2orig_ratio * cache_active_subleakage (decayed_cache);
//printf("%f	%f	%f	%f\n",low_leak_ratio,cache_active_subleakage(decayed_cache),cache_standby_subleakage(decayed_cache,ctrl_type),(1-low_leak_ratio)*cache_active_subleakage(decayed_cache)+low_leak_ratio*cache_standby_subleakage(decayed_cache,ctrl_type));
return (1-low_leak_ratio)*cache_active_subleakage(decayed_cache)+low_leak_ratio*cache_standby_subleakage(decayed_cache,ctrl_type);
/* lym */
}

double gleak_savings (void)
{
//return (low_leak_ratio * (cache_active_gateleakage(decayed_cache)-cache_standby_gateleakage(decayed_cache,ctrl_type))) - xtra2orig_ratio * cache_active_gateleakage (decayed_cache);
/* lym */
//printf ("%f	%f\n",cache_active_gateleakage(decayed_cache),cache_standy_gateleakage(decayed_cache,ctrl_type));
return (1-low_leak_ratio)*cache_active_gateleakage(decayed_cache)+low_leak_ratio*cache_standby_gateleakage(decayed_cache,ctrl_type);
}

/* dynamic power due to low to high mode switch	*/
double mode_switch_power_l2h(void)
{
	return  mode_switch_l2h * switch_cost_l2h;
}

/* dynamic power due to high to low mode switch	*/
double mode_switch_power_h2l(void)
{
	return  mode_switch_h2l * switch_cost_h2l;
}

/* dynamic power due to 'xtra'	*/
double xtra_dynamic_power(void)
{
  	return cache_get_xtra_power (ctrl_type);
}



/* miscellaneous functions */

/* queries on the control mode	*/

int cache_leak_ctrl_is_state_losing (void)
{
	switch (ctrl_type)
	{
		case GatedVss:	
				return 1;
		case Drowsy:
		case RBB:	
		case None:
		default:
				return 0;
	}
}

int cache_leak_is_ctrlled (void)
{
	if (ctrl_type == None)
		return 0;
	return 1;
}

/* other access functions */

int get_low_leak_penalty (void)
{
	return low_leak_penalty;
}

unsigned int get_switch_cycles_l2h (void)
{
	return switch_cycles_l2h;
}

unsigned int get_switch_cycles_h2l (void)
{
	return switch_cycles_h2l;
}

double get_low_leak_ratio (void)
{
	return low_leak_ratio;
}

/* register stats */
void cache_leak_ctrl_reg_stats (struct stat_sdb_t *sdb) /* stats database */
{
	char buf[512], buf1[512], name[512];
	struct cache_t *cp = decayed_cache;

	// fprintf(stderr," baseline leak unit: %g\n",baseline_leak ());
	// fprintf(stderr," standby leak unit: %g\n",cache_standby_leakage(decayed_cache,&leakage_power));
	//fprintf(stderr," saving leak unit: %g\n",orig_leak_savings ());	


 
	sprintf (name,"%s.%s",cp->name, "leak_ctrl");

	sprintf(buf, "%s.mode_switch_l2h", name);
	stat_reg_counter(sdb, buf, "total no. of switches from low to high mode",\
	&total_mode_switch_l2h, 0, NULL);

	sprintf(buf, "%s.mode_switch_h2l", name);
	stat_reg_counter(sdb, buf, "total no. of switches from high to low mode",\
	&total_mode_switch_h2l, 0, NULL);

	sprintf(buf, "%s.baseline_leak", name);
	stat_reg_double(sdb, buf, "total baseline leakage",\
	&total_baseline_leak, 0, NULL);

	sprintf(buf, "%s.orig_leakage_savings", name);
	stat_reg_double(sdb, buf, "total leakage power saved",\
	&total_orig_leak_savings, 0, NULL);

	sprintf(buf, "%s.xtra_leak", name);
	stat_reg_double(sdb, buf, "total leakage due to 'xtra'",\
	&total_xtra_leak, 0, NULL);

	sprintf(buf, "%s.xtra_dynamic_power", name);
	stat_reg_double(sdb, buf, "total dynamic power due to 'xtra'",\
	&total_xtra_dynamic_power, 0, NULL);

	sprintf(buf, "%s.mode_switch_power_l2h", name);
	stat_reg_double(sdb, buf, "total dynamic power due to low to high mode switches",\
	&total_mode_switch_power_l2h, 0, NULL);

	sprintf(buf, "%s.mode_switch_power_h2l", name);
	stat_reg_double(sdb, buf, "total dynamic power due to high to low mode switches",\
	&total_mode_switch_power_h2l, 0, NULL);
/* lym */
        sprintf(buf, "%s.bitlineleak", name);
        stat_reg_double(sdb, buf, "total bitline leakage",\
        &total_bitlineleak,0,NULL); /* lym */


	sprintf(buf, "%s.total_net_savings", name);
	sprintf(buf1, "(((%s.orig_leakage_savings + %s.xtra_leak) + %s.xtra_dynamic_power) +  \
	%s.mode_switch_power_l2h) + %s.mode_switch_power_h2l", name, name, name, name, name);
	stat_reg_formula(sdb, buf, "total net savings",\
	buf1, NULL);

	sprintf(buf, "%s.low_leak_ratio", name);
	stat_reg_double(sdb, buf, "total turnoff ratio",\
	&total_low_leak_ratio, 0, NULL);

	sprintf(buf, "%s.avg_mode_switch_l2h", name);
	sprintf(buf1, "%s.mode_switch_l2h / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg no. of switches from low to high mode",\
	buf1, NULL);

	sprintf(buf, "%s.avg_mode_switch_h2l", name);
	sprintf(buf1, "%s.mode_switch_h2l / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg no. of switches from high to low mode",\
	buf1, NULL);

	sprintf(buf, "%s.avg_leakage_savings", name);
	sprintf(buf1, "%s.orig_leakage_savings / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg leakage power saved",\
	buf1, NULL);

	sprintf(buf, "%s.avg_baseline_leak", name);
	sprintf(buf1, "%s.baseline_leak / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg baseline leakage",\
	buf1, NULL);

	sprintf(buf, "%s.avg_xtra_leak", name);
	sprintf(buf1, "%s.xtra_leak / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg leakage due to 'xtra'",\
	buf1, NULL);

	sprintf(buf, "%s.avg_xtra_dynamic_power", name);
	sprintf(buf1, "%s.xtra_dynamic_power / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg dynamic power due to 'xtra'",\
	buf1, NULL);

	sprintf(buf, "%s.avg_mode_switch_power_l2h", name);
	sprintf(buf1, "%s.mode_switch_power_l2h / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg dynamic power due to low to high mode switches",\
	buf1, NULL);

	sprintf(buf, "%s.avg_mode_switch_power_h2l", name);
	sprintf(buf1, "%s.mode_switch_power_h2l / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg dynamic power due to high to low mode switches",\
	buf1, NULL);

	sprintf(buf, "%s.avg_net_savings", name);
	sprintf(buf1, "%s.total_net_savings / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg net savings",\
	buf1, NULL);

	sprintf(buf, "%s.avg_low_leak_ratio", name);
	sprintf(buf1, "%s.low_leak_ratio / sim_cycle", name);
	stat_reg_formula(sdb, buf, "avg turnoff ratio",\
	buf1, NULL);

	sprintf(buf, "%s.norm_net_savings", name);
	sprintf(buf1, "%s.avg_net_savings / %s.avg_baseline_leak", name, name);
	stat_reg_formula(sdb, buf, "normalized net savings",\
	buf1, NULL);

/* lym */
        sprintf(buf, "%s.total_subleak_savings", name);
        stat_reg_double(sdb, buf, "total sub leakage savings",\
        &total_subleak_savings, 0, NULL);

	sprintf(buf, "%s.norm_subleak_savings", name);
	sprintf(buf1, "%s.total_subleak_savings / %s.baseline_leak", name, name);
	stat_reg_formula(sdb, buf, "normalized subleakage savings",\
	buf1, NULL);

        sprintf(buf, "%s.total_gleak_savings", name);
        stat_reg_double(sdb, buf, "total sub leakage savings",\
        &total_gleak_savings, 0, NULL);

        sprintf(buf, "%s.norm_gleak_savings", name);
        sprintf(buf1, "%s.total_gleak_savings / %s.baseline_leak", name, name);
        stat_reg_formula(sdb, buf, "normalized gateleakage savings",\
        buf1, NULL);

        sprintf(buf, "%s.subleak", name);
        stat_reg_double(sdb, buf, "total sub leakage for tag and array",\
        &total_subleak, 0, NULL);

        sprintf(buf, "%s.gateleak", name);
        stat_reg_double(sdb, buf, "total gate leakage for tag and array",\
        &total_gleak, 0, NULL);

}
