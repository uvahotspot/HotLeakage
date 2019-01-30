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
Y. Zhang, D. Parikh, K. Sankaranarayanan, K. Skadron, and M. R. Stan.  "HotLeakage: An
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
******************************************************************** */

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


#include "stats.h"
#include <stdlib.h>
#include "cache.h"


/*===================================================================*/

/*
 * The following are things you probably wouldn't want to change.  
 */



/* .18 technology */ 

/* Common for all the Technology */
#define Bk   1.38066E-23  /* Boltzman Constant */

#define Qparam    1.602E-19    /* FIXME     */
#define Eox       3.5E-11

/* Technology Dependendent Factors */




#define TECHNOLOGY              TECH_FACTOR


#define NBITS_PER_LINE(cp)      (cp->bsize * 8) /* number of bits in the cache */
#define NLINES(cp)              (cp->sets * cp->assoc) /* number of lines in cache */

/* Technology Length */
 extern  char * TECH_FACTOR;

double nmos_ileakage(double aspect_ratio,double Volt, double Vth0,double Tkelvin,double tox0 );

double pmos_ileakage(double aspect_ratio,double Volt, double Vth0,double Tkelvin , double tox0);


double nmos_ileakage_var(double aspect_ratio, double Volt, double Vth0, double Tkelvin, double tox0, double tech_length);

double pmos_ileakage_var(double aspect_ratio,double Volt, double Vth0,double Tkelvin,double tox0, double tech_length);

typedef struct{
 double Nmos_Il;
 double Pmos_Il;
 double il1_bitline_data_ileak;
 double il1_cell_data_ileak;
 double il1_data;
 double il1_tag;
 double il2_bitline_data_ileak;
 double il2_cell_data_ileak;
 double il2_data;
 double il2_tag;
 double dl1_bitline_data_ileak;
 double dl1_cell_data_ileak;
 double dl1_data;
 double dl1_tag;
 double dl2_bitline_data_ileak;
 double dl2_cell_data_ileak;
 double dl2_data;
 double dl2_tag;

 double il1_decoder_first_stage_data_ileak;
 double il1_decoder_second_stage_data_ileak;
 double il1_decoder_third_stage_data_ileak;
 double il1_decoder_complete_stage_data_ileak;
 double il1_decoder_data_ileak;

 double il1_decoder_first_stage_tag_ileak;
 double il1_decoder_second_stage_tag_ileak;
 double il1_decoder_third_stage_tag_ileak;
 double il1_decoder_complete_stage_tag_ileak;
 double il1_decoder_tag_ileak;

 double il1_comparator_leak;

 double il1_muxdrv_leak;

 double il1_outdrv_leak;

 double il1_senseamp_data_leak;
 double il1_senseamp_tag_leak;

 double il1_leakage;

 double il2_decoder_first_stage_data_ileak;
 double il2_decoder_second_stage_data_ileak;
 double il2_decoder_third_stage_data_ileak;
 double il2_decoder_complete_stage_data_ileak;
 double il2_decoder_data_ileak;

 double il2_decoder_first_stage_tag_ileak;
 double il2_decoder_second_stage_tag_ileak;
 double il2_decoder_third_stage_tag_ileak;
 double il2_decoder_complete_stage_tag_ileak;
 double il2_decoder_tag_ileak;

 double il2_comparator_leak;

 double il2_muxdrv_leak;

 double il2_outdrv_leak;

 double il2_senseamp_data_leak;
 double il2_senseamp_tag_leak;

 double il2_leakage;

 double dl1_decoder_first_stage_data_ileak;
 double dl1_decoder_second_stage_data_ileak;
 double dl1_decoder_third_stage_data_ileak;
 double dl1_decoder_complete_stage_data_ileak;
 double dl1_decoder_data_ileak;

 double dl1_decoder_first_stage_tag_ileak;
 double dl1_decoder_second_stage_tag_ileak;
 double dl1_decoder_third_stage_tag_ileak;
 double dl1_decoder_complete_stage_tag_ileak;
 double dl1_decoder_tag_ileak;

 double dl1_comparator_leak;

 double dl1_muxdrv_leak;

 double dl1_outdrv_leak;

 double dl1_senseamp_data_leak;
 double dl1_senseamp_tag_leak;

 double dl1_leakage;

 double dl2_decoder_first_stage_data_ileak;
 double dl2_decoder_second_stage_data_ileak;
 double dl2_decoder_third_stage_data_ileak;
 double dl2_decoder_complete_stage_data_ileak;
 double dl2_decoder_data_ileak;

 double dl2_decoder_first_stage_tag_ileak;
 double dl2_decoder_second_stage_tag_ileak;
 double dl2_decoder_third_stage_tag_ileak;
 double dl2_decoder_complete_stage_tag_ileak;
 double dl2_decoder_tag_ileak;

 double dl2_comparator_leak;
 
 double dl2_muxdrv_leak;

 double dl2_outdrv_leak;

 double dl2_senseamp_data_leak;
 double dl2_senseamp_tag_leak;

 double dl2_leakage;


 double ireg_write_bitline_data_ileak;
 double ireg_read_bitline_data_ileak;
 double ireg_cell_data_ileak;
 double i_reg ;
 double ireg_leakage;

 double il1_cell_gate_leakage;
  double il1_tag_gate_leakage;
  double il2_cell_gate_leakage;
  double il2_tag_gate_leakage;
  double dl1_cell_gate_leakage;
  double dl1_tag_gate_leakage;
  double dl2_cell_gate_leakage;
  double dl2_tag_gate_leakage;

  double il1_cell_gateVss_leakage;
  double il1_tag_gateVss_leakage;
  double dl1_cell_gateVss_leakage;
  double dl1_tag_gateVss_leakage;
  double dl2_cell_gateVss_leakage;
  double dl2_tag_gateVss_leakage;

  double il1_cell_drowsy_leakage;
  double il1_tag_drowsy_leakage;
  double dl1_cell_drowsy_leakage;
  double dl1_tag_drowsy_leakage;
  double dl2_cell_drowsy_leakage;
  double dl2_tag_drowsy_leakage;
  
  double il1_cell_rbb_leakage;
  double il1_tag_rbb_leakage;
  double dl1_cell_rbb_leakage;
  double dl1_tag_rbb_leakage;
  double dl2_cell_rbb_leakage;
  double dl2_tag_rbb_leakage;

 
  double dl1_cell_dual_leakage;
  double dl1_bit_dual_leakage;

  double dl1_cell_gatevss_gleak;
  double dl1_cell_drowsy_gleak;
  double dl1_cell_rbb_gleak; 
 double dl1_tag_gatevss_gleak;
  double dl1_tag_drowsy_gleak;
  double dl1_tag_rbb_gleak; 

  double dl1_bitline_gateVss_leakage; /* lym */

}leakage_power_type;
 
/* miscellaneous functions */
double cache_standby_leakage (struct cache_t *cp,  enum leak_ctrl_type_t type);
double cache_active_leakage (struct cache_t *cp);

/* lym */
double cache_standby_subleakage (struct cache_t *cp,  enum leak_ctrl_type_t type);
double cache_active_subleakage (struct cache_t *cp);
double cache_standby_gateleakage (struct cache_t *cp,  enum leak_ctrl_type_t type);
double cache_active_gateleakage (struct cache_t *cp);
double cache_bitline_leakage (struct cache_t *cp);

void leakage_init();
void leak_options();
double box_mueller(double std_var, double value);
void init_cacti_model(struct cache_t * cache_il1, struct cache_t *cache_il2, struct cache_t *cache_dl1, struct cache_t *cache_dl2);

double calculate_leakage_il1cache(double Vdds, double Tkelvin , leakage_power_type *leakage_power);
double calculate_leakage_dl1cache(double Vdds, double Tkelvin, leakage_power_type *leakage_power);
double calculate_leakage_dl2cache(double Vdds, double Tkelvin, leakage_power_type *leakage_power);
double calculate_leakage_il2cache(double Vdds, double Tkelvin, leakage_power_type *leakage_power);

double cal_il1_cell_gate_leakage(double Vdd_L1_ICache,double Tkelvin_L1_ICache,leakage_power_type * leakage_power);
double  cal_dl1_cell_gate_leakage(double Vdd_L1_DCache,double Tkelvin_L1_DCache,leakage_power_type * leakage_power);
double  cal_dl2_cell_gate_leakage(double Vdd_L2_DCache,double Tkelvin_L2_DCache,leakage_power_type * leakage_power);
void dump_leakage_stats(leakage_power_type * leakage_power);






