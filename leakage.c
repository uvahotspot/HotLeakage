/* *****************************************************************
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
************************************************************************
*/

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
#include <math.h>
#include "leakage.h"
#include "cache.h"
#include "power.h"
#include <time.h>



extern int data_width;

extern double tech_length0;

extern double Tox_User;

extern int No_of_Samples;
extern struct cache_t *cache_il1;
extern struct cache_t *cache_dl1;
extern struct cache_t *cache_il2;
extern struct cache_t *cache_dl2;

/* Tox variation */
double Tox_Std;

/* Vdd Variation */
extern double Vdd_Std;

/* Tech Length Variation */
extern double Tech_Std;

/* Threshold Voltage Nmos  Variation */
extern double Vthn_Std;

/* Threshold Voltage Pmos  Variation */
extern double Vthp_Std;

extern double M0n ;       /* Zero Bias Mobility for N-Type */
extern double  M0p  ;      /* Zero Bias Mobility for P-Type */
extern double  Tox ;
extern double  Cox ;       /* Gate Oxide Capacitance per unit area */
extern double  Vnoff0  ;      /* Empirically Determined Model Parameter for N-Type */
                          /* FIX ME */
extern double  Vpoff0  ;    /* Empirically Determined Model Parameter for P-Type */
extern double  Nfix ;     /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
extern double  Pfix ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
extern double  Vthn  ;     /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
extern double  Vthp  ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
extern double  Vnthx  ;   /* In the Equation Vth = Vth0 +Vnthx*(T-300) */ 
extern double  Vpthx ;  /* In the Equation Vth = Vth0 +Vpthx*(T-300) */ 
extern double  Vdd_init ;    /* Default Vdd. Can be Changed in leakage.c */ 
extern double  Volt0  ;
extern double  Na  ;    /* Empirical param for the Vdd fit */
extern double  Nb ;    /* Empirical param for the Vdd fit */
extern double  Pa  ;    /* Empirical param for the Vdd fit */
extern double  Pb  ;   /* Empirical param for the Vdd fit */
extern double  NEta  ;           /* Sub-threshold Swing Co-efficient N-Type */
extern double  PEta   ;          /* Sub-threshold Swing Co-efficient P-Type */ 

extern double Kdesign_3in_nand ;

extern double  Kdesign_2in_nand_outdrv ;

extern double  Kdesign_2in_nor_outdrv ;
extern double  Kdesign_2in_nor_mux_driver ;

extern double  Kdesign_comparator ;

extern double  Kdesign_sensamp ;

extern double  Kdesign_ireg_readbitline  ;


extern double  Kdesigp_ireg_readbitline  ;



extern double Kndesign_3in_nand  ;
extern double in3_nandn_t_slope  ;
extern double in3_nandn_vdd_slope  ;

extern double  Kpdesign_3in_nand ;
extern double  in3_nandp_t_slope ;
extern double  in3_nandp_vdd_slope ;

extern double  Kndesign_2in_nand_outdrv ;
extern double  in2_nandn_outdrv_t_slope ;
extern double  in2_nandn_outdrv_vdd_slope ;

extern double  Kpdesign_2in_nand_outdrv  ;
extern double  in2_nandp_outdrv_t_slope ;
extern double  in2_nandp_outdrv_vdd_slope ;

/* NOR gate of decoder*/

extern double  Kndesign_4in_nor_decoder ;
extern double  in4_norn_decoder_t_slope ;
extern double  in4_norn_decoder_vdd_slope;

extern double  Kpdesign_4in_nor_decoder ;
extern double  in4_norp_decoder_t_slope;
extern double  in4_norp_decoder_vdd_slope ;

extern double  Kndesign_3in_nor_decoder ;
extern double  in3_norn_decoder_t_slope ;
extern double  in3_norn_decoder_vdd_slope ;

extern double  Kpdesign_3in_nor_decoder ;
extern double  in3_norp_decoder_t_slope ;
extern double  in3_norp_decoder_vdd_slope ;

extern double  Kndesign_2in_nor_decoder ;
extern double  in2_norn_decoder_t_slope;
extern double  in2_norn_decoder_vdd_slope ;

extern double  Kpdesign_2in_nor_decoder ;
extern double  in2_norp_decoder_t_slope ;
extern double  in2_norp_decoder_vdd_slope ;



extern double  Kndesign_2in_nor_mux_driver ;
extern double  in2_norn_mux_driver_t_slope ;
extern double  in2_norn_mux_driver_vdd_slope ;


extern double  Kpdesign_2in_nor_mux_driver ;
extern double  in2_norp_mux_driver_t_slope ;
extern double  in2_norp_mux_driver_vdd_slope ;


extern double  Kndesign_2in_nor_outdrv  ;
extern double  in2_norn_outdrv_t_slope ;
extern double  in2_norn_outdrv_vdd_slope;

extern double  Kpdesign_2in_nor_outdrv  ;
extern double  in2_norp_outdrv_t_slope ;
extern double  in2_norp_outdrv_vdd_slope ;


extern double  Kndesign_comparator          ;
extern double  Kpdesign_comparator          ;

extern double  Kndesign_sensamp            ;
extern double  Kpdesign_sensamp            ;

extern double  Kndesign_ireg_readbitline   ;
extern double  Kpdesigp_ireg_readbitline   ;

/* gate Vss */
extern double  Vth0_gate_vss ;
extern double  aspect_gate_vss;
/*drowsy cache*/
extern double  Vdd_low ;

/*RBB*/
extern double  k1_body_n ;
extern double  k1_body_p ;
extern double  vfi ;

extern double  VSB_NMOS ;
extern double  VSB_PMOS ;
/* dual VT*/
extern double  Vt_cell_nmos_high ;
extern double  Vt_cell_pmos_high ;
extern double  Vt_bit_nmos_low ;
extern double  Vt_bit_pmos_low ;

/* Gate lekage for 70nm */
extern double   nmos_unit_leakage ;
extern double  a_nmos_vdd ;
extern double  b_nmos_t;
extern double  c_nmos_tox;

extern double  pmos_unit_leakage;
extern double  a_pmos_vdd ;
extern double  b_pmos_t ;
extern double  c_pmos_tox ;



extern double L_nmos_d  ;     /* Adjusting Factor for Length */
extern double Tox_nmos_e  ;   /* Adjusting Factor for Tox */
extern double L_pmos_d ;    /* Adjusting Factor for Length */
extern double Tox_pmos_e ;  /* Adjusting Factor for Tox */

/* ************************************************************************ */

/* CACTI Data */

static int No_3to8_il1_data;
static int No_3to8_il1_tag;
static int No_Nor_il1_data;
static int No_Nor_il1_tag;
static int No_banks_il1_data;
static int No_banks_il1_tag;

static int No_3to8_dl1_data;
static int No_3to8_dl1_tag;
static int No_Nor_dl1_data;
static int No_Nor_dl1_tag;
static int No_banks_dl1_data;
static int No_banks_dl1_tag;

static int No_3to8_dl2_data;
static int No_3to8_dl2_tag;
static int No_Nor_dl2_data;
static int No_Nor_dl2_tag;
static int No_banks_dl2_data;
static int No_banks_dl2_tag;

static int No_3to8_il2_data;
static int No_3to8_il2_tag;
static int No_Nor_il2_data;
static int No_Nor_il2_tag;
static int No_banks_il2_data;
static int No_banks_il2_tag;


/* Kdesign Params for decoder nor gate*/

static double Kndesign_nor_decoder;
static double norn_decoder_t_slope;
static double norn_decoder_vdd_slope;
static double Kpdesign_nor_decoder;
static double norp_decoder_t_slope;
static double norp_decoder_vdd_slope;


/* Tox Given */
extern double Tox_user;
/* Aspect Ratio Ireg Access Cell N */
extern double aspect_ratio_access_ireg_cell_N;

/* Aspect Ratio Ireg Cell N */
extern double aspect_ratio_ireg_cell_l2_N;

/* Aspect Ratio Ireg Cell P */
extern double aspect_ratio_ireg_cell_l3_P;


/* Ports for read Ireg */
extern double ireg_read_ports;

/* Ports for write Ireg */
extern double ireg_write_ports;

/* Supply Voltage for L1-ICaches */
extern double Vdd_I_Reg;

/* Zero Bias Threshold Voltage for Ireg Cell  N-Mos */
extern double Vth0N_Cell_I_Reg;

/* Zero Bias Threshold Voltage for Ireg Cell  P-Mos */
extern double Vth0P_Cell_I_Reg;

/* Zero Bias Threshold Voltage for Ireg Access N-Mos */
extern double Vth0N_Access_I_Reg;

/* Temperature in Absolute Kelvin for Ireg */
extern double Tkelvin_I_Reg;





/* Aspect Ratio Ram Access Cell N */
extern double aspect_ratio_access_ram_cell_N;

/* Aspect Ratio Ram Cell N */
extern double aspect_ratio_ram_cell_l2_N;

/* Aspect Ratio Ram Cell P */
extern double aspect_ratio_ram_cell_l3_P;

/* Aspect Ratio Decoder Inverter P */
extern double aspect_ratio_decoder_inverter_P;

/* Aspect Ratio Decoder Inverter N */
extern double aspect_ratio_decoder_inverter_N;

/* Aspect Ratio of Comparator Inverter4 N */
extern double aspect_ratio_comparator_inverter4_N;

/* Aspect Ratio of Comparator Inverter4 P */
extern double aspect_ratio_comparator_inverter4_P;

/* Aspect Ratio of Comparator Inverter3 N */
extern double aspect_ratio_comparator_inverter3_N;

/* Aspect Ratio of Comparator Inverter3 P */
extern double aspect_ratio_comparator_inverter3_P;

/* Aspect Ratio of Comparator Inverter2 N */
extern double aspect_ratio_comparator_inverter2_N;

/* Aspect Ratio of Comparator Inverter2 P */
extern double aspect_ratio_comparator_inverter2_P;

/* Aspect Ratio of Comparator Inverter1 N */
extern double aspect_ratio_comparator_inverter1_N;

/* Aspect Ratio of Comparator Inverter4 P */
extern double aspect_ratio_comparator_inverter1_P;

/* Aspect Ratio of Comparator Inverter P */
extern double aspect_ratio_comparator_P;

/* Aspect Ratio of Comparator Inverter N */
extern double aspect_ratio_comparator_N;

/* Aspect Ratio of MUX DRIVER STAGE 1 N */
extern double aspect_ratio_muxdrv12_N;

/* Aspect Ratio of MUX DRIVER STAGE 1 P */
extern double aspect_ratio_muxdrv12_P;

/* Aspect Ratio of MUX DRIVER STAGE 2 N */
extern double aspect_ratio_muxdrvNOR_N;

/* Aspect Ratio of MUX DRIVER STAGE 1 P */
extern double aspect_ratio_muxdrvNOR_P;

/* Aspect Ratio of MUX DRIVER STAGE 3 N */
extern double aspect_ratio_muxdrv3_N;

/* Aspect Ratio of MUX DRIVER STAGE 3 P */
extern double aspect_ratio_muxdrv3_P;


/* Aspect Ratio of OUTPUT DRIVER STAGE 1 N */
extern double aspect_ratio_outdrvsel_N;

/* Aspect Ratio of OUTPUT DRIVER STAGE 1 P */
extern double aspect_ratio_outdrvsel_P;

/* Aspect Ratio of OUTPUT DRIVER NOR N */
extern double aspect_ratio_outdrvnor_N;

/* Aspect Ratio of OUTPUT DRIVER NOR P */
extern double aspect_ratio_outdrvnor_P;

/* Aspect Ratio of OUTPUT DRIVER NAND N */
extern double aspect_ratio_outdrvnand_N;

/* Aspect Ratio of OUTPUT DRIVER NAND P */
extern double aspect_ratio_outdrvnand_P;

/* Aspect Ratio of OUTPUT DRIVER FINAL STAGE N */
extern double aspect_ratio_outdriver_N;

/* Aspect Ratio of OUTPUT DRIVER FINAL STAGE P */
extern double aspect_ratio_outdriver_P;


/* Ports for L1-ICache (both read and write) */
extern double il1_ports;

/* Ports for L2-ICache (both read and write) */
extern double il2_ports;

/* Ports for L1-DCache (both read and write) */
extern double dl1_ports;

/* Ports for L2-DCache (both read and write) */
extern double dl2_ports;


/* Supply Voltage for L1-ICaches */
extern double Vdd_L1_ICache;

/* Supply Voltage for L1-DCaches */
extern double Vdd_L1_DCache;

/* Zero Bias Threshold Voltage for L1-ICaches Cell  N-Mos */
extern double Vth0N_Cell_L1_ICache;

/* Zero Bias Threshold Voltage for L1-ICaches Cell  P-Mos */
extern double Vth0P_Cell_L1_ICache;


/* Zero Bias Threshold Voltage for L1-ICaches Access N-Mos */
extern double Vth0N_Access_L1_ICache;

/* Zero Bias Threshold Voltage for L1-DCaches P-Mos */
extern double Vth0P_L1_DCache;

/* Zero Bias Threshold Voltage for L1-ICaches P-Mos */
extern double Vth0P_L1_ICache;

/* Zero Bias Threshold Voltage for L1-DCaches Cell N-Mos */
extern double Vth0N_Cell_L1_DCache;

/* Zero Bias Threshold Voltage for L1-DCaches Cell  P-Mos */
extern double Vth0P_Cell_L1_DCache;

/* Zero Bias Threshold Voltage for L1-DCaches Access N-Mos */
extern double Vth0N_Access_L1_DCache;

/* Supply Voltage for L2-ICaches */
extern double Vdd_L2_ICache;

/* Supply Voltage for L2-DCaches */
extern double Vdd_L2_DCache;

/* Zero Bias Threshold Voltage for L2-ICaches Access N-Mos */
extern double Vth0N_Access_L2_ICache;

/* Zero Bias Threshold Voltage for L2-ICaches Cell  N-Mos */
extern double Vth0N_Cell_L2_ICache;

/* Zero Bias Threshold Voltage for L2-ICaches Cell  P-Mos */
extern double Vth0P_Cell_L2_ICache;

/* Zero Bias Threshold Voltage for L2-DCaches P-Mos */
extern double Vth0P_L2_DCache;

/* Zero Bias Threshold Voltage for L2-ICaches P-Mos */
extern double Vth0P_L2_ICache;

/* Zero Bias Threshold Voltage for L2-DCaches Cell N-Mos */
extern double Vth0N_Cell_L2_DCache;

/* Zero Bias Threshold Voltage for L2-DCaches Cell  P-Mos */
extern double Vth0P_Cell_L2_DCache;

/* Zero Bias Threshold Voltage for L2-DCaches Access N-Mos */
extern double Vth0N_Access_L2_DCache;

/* Temperature in Absolute Kelvin for L1-ICaches */
extern double Tkelvin_L1_ICache;

/* Temperature in Absolute Kelvin for L1-DCaches */
extern double Tkelvin_L1_DCache;

/* Temperature in Absolute Kelvin for L2-ICaches */
extern double Tkelvin_L2_ICache;

/* Temperature in Absolute Kelvin for L2-DCaches */
extern double Tkelvin_L2_DCache;



/* ************************************************************************ */

/* Parameters Common like caches etc */
extern struct cache_t *cache_dl1;
extern struct cache_t *cache_il1;
extern struct cache_t *cache_il2;
extern struct cache_t *cache_dl2;

extern struct cache_t *dtlb;
extern struct cache_t *itlb;


leakage_power_type leakage_power;


/* initializing some of the parameters like Vdd etc */

init_leakage_param()

{

  
/* Supply Voltage for L1-ICaches. Default */

/* Supply Voltage for L1-DCaches. Default */

/* Supply Voltage for L2-ICaches */

/* Supply Voltage for L2-DCaches */

/* Default Tech  Threshold Voltages*/
/*#ifdef TECH_180
 Vth0N_Cell_L1_ICache = 0.3979;
 Vth0P_Cell_L2_ICache = 0.4659;
 Vth0N_Access_L1_ICache = 0.3979; 
 #endif
*/

}

/* Resetting the parameters like Vdd  Temperature etc and  */
/* then again calculation of the Leakage Values */
/* FIXME */
/* TO BE DONE after the interface with the HotGroup has been decided */

reset_leakage_param()
{
}

/* Box-Mueller Method */

double box_mueller(double std_var, double value)
{
double temp;
double temp1;
double random;
random = drand48();
temp = sqrt((double)(-2.00 * (double)log(random)));
random = drand48();
temp1 = cos(2.00 * M_PI * random);
return(temp * temp1 * std_var * value);


}


/* ************************************************************************ */

/* Calculating the NMOS I Normalized Leakage From the BSIM Equation.*/
/* Also Using Box-Mueller to Find the Random Samples Due to Any Variation */
/* In any of the parameters like length, Vdd etc. */
/* ************************************************************************ */
double nmos_ileakage(double aspect_ratio, double Volt, double Vth0, double Tkelvin, double tox0)
{
double Tox_Std_Array[No_of_Samples];
double Vdd_Std_Array[No_of_Samples];
double Tech_Std_Array[No_of_Samples];
double Vthn_Std_Array[No_of_Samples];
double Ileak_Std_Array[No_of_Samples];
int i;
double mean =0.0;
for(i =0; i<No_of_Samples;i++)
  {
    Tox_Std_Array[i] = tox0;
    Vdd_Std_Array[i] = Volt;
    Tech_Std_Array[i] = tech_length0;
    Vthn_Std_Array[i] = Vth0;
  }

if(Tox_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      	Tox_Std_Array[i] = tox0 + box_mueller(Tox_Std,tox0);
  }
if(Tech_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      	Tech_Std_Array[i] = tech_length0 + box_mueller(Tech_Std,tech_length0);
  }
if(Vdd_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      	Vdd_Std_Array[i] = Volt + box_mueller(Vdd_Std,Volt);
  }
if(Vthn_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      	Vthn_Std_Array[i] = Vth0 + box_mueller(Vthn_Std,Vth0);
  }

if(Tox_Std || Tech_Std || Vdd_Std || Vthn_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      {
     Ileak_Std_Array[i] = nmos_ileakage_var(aspect_ratio, Vdd_Std_Array[i], Vthn_Std_Array[i],  Tkelvin,  Tox_Std_Array[i], Tech_Std_Array[i]);

      }
  }
else
  {
return(nmos_ileakage_var(aspect_ratio,Volt,  Vth0,Tkelvin, tox0, tech_length0));

  }
for(i =0; i<No_of_Samples;i++)
mean += Ileak_Std_Array[i];
mean = mean/(double)No_of_Samples;
return mean;


}

double nmos_ileakage_var(double aspect_ratio, double Volt, double Vth0, double Tkelvin, double tox0, double tech_length)
{
double Ileak;
double Vthermal;
double Vth,temp , Vnoff;
double param1,param2,param3, param4,param5,param6;
double temp1;
param1 = (aspect_ratio * tech_length0 *M0n*Cox)/tech_length;
/* Thermal Voltage */
Vthermal =((Bk*Tkelvin)/Qparam);
/* Vdd Fitting */
temp =  Nb*(Volt- Volt0);
param2 = exp(temp);
param3 = 1-exp((-Volt/Vthermal));
Vth =Vth0 + Vnthx * (Tkelvin-300);
Vnoff = Vnoff0 + Nfix*(Vth0-Vthn);
param4 = exp(((-fabs(Vth)-Vnoff)/(NEta*Vthermal)));
temp = (tech_length0 - tech_length) * L_nmos_d ;
param5 = exp(temp);
temp1 = (tox0 - Tox) * Tox_nmos_e;
param6 = exp(temp1);
Ileak = param1*pow(Vthermal,2.0)*param2*param3*param4*param5*param6;
return Ileak;
}

/* ************************************************************************ */

/* Calculating the PMOS I Normalized Leakage From the BSIM Equation.*/
/* Also Using Box-Mueller to Find the Random Samples Due to Any Variation */
/* In any of the parameters like length, Vdd etc. */
/* ************************************************************************ */
double pmos_ileakage(double aspect_ratio,double Volt, double Vth0,double Tkelvin,double tox0)
{

double Tox_Std_Array[No_of_Samples];
double Vdd_Std_Array[No_of_Samples];
double Tech_Std_Array[No_of_Samples];
double Vthp_Std_Array[No_of_Samples];
double Ileak_Std_Array[No_of_Samples];
int i;
double mean =0.0;
for(i =0; i<No_of_Samples;i++)
  {
    Tox_Std_Array[i] = tox0;
    Vdd_Std_Array[i] = Volt;
    Tech_Std_Array[i] = tech_length0;
    Vthp_Std_Array[i] = Vth0;
  }

if(Tox_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      	Tox_Std_Array[i] = tox0 + box_mueller(Tox_Std,tox0);
  }
if(Tech_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      	Tech_Std_Array[i] = tech_length0 + box_mueller(Tech_Std,tech_length0);
  }
if(Vdd_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      	Vdd_Std_Array[i] = Volt + box_mueller(Vdd_Std,Volt);
  }
if(Vthp_Std)
  {
    for(i =0; i<No_of_Samples;i++)
      	Vthp_Std_Array[i] = Vth0 + box_mueller(Vthp_Std,Vth0);
  }

if(Tox_Std || Tech_Std || Vdd_Std || Vthp_Std)
  {
    for(i =0; i<No_of_Samples;i++)
     Ileak_Std_Array[i] =  pmos_ileakage_var(aspect_ratio, Vdd_Std_Array[i], Vthp_Std_Array[i],  Tkelvin,  Tox_Std_Array[i], Tech_Std_Array[i]);
  }

else
  {
return (pmos_ileakage_var(aspect_ratio,Volt,  Vth0, Tkelvin, tox0, tech_length0));

  }
for(i =0; i<No_of_Samples;i++)
mean += Ileak_Std_Array[i];
mean = mean/(double)No_of_Samples;
return mean;


}

double pmos_ileakage_var(double aspect_ratio,double Volt, double Vth0,double Tkelvin,double tox0, double tech_length)
{
double Ileak;
double Vthermal;
double Vth, temp ,temp1,Vpoff;
double param1,param2,param3,param4,param5,param6;
param1 = (aspect_ratio * tech_length0 *M0p*Cox )/tech_length;
/* Thermal Voltage */
Vthermal =((Bk*Tkelvin)/Qparam);
/* Vdd Fitting */
temp =  Pb*(Volt- Volt0);
param2 = exp(temp);
param3 = 1-exp((-Volt/Vthermal));
Vth =Vth0 + Vpthx * (Tkelvin-300);
Vpoff = Vpoff0 + Pfix*(Vth0-Vthp);
param4 = exp(((-fabs(Vth)-Vpoff)/(PEta*Vthermal)));
temp = (tech_length0 - tech_length) * L_nmos_d ;
param5 = exp(temp);
temp1 = (tox0 - Tox) * Tox_nmos_e;
param6 = exp(temp1);
Ileak = param1*pow(Vthermal,2.0)*param2*param3*param4*param5*param6;
return Ileak;
}
/* ************************************************************************ */

/* Initilize the CACTI Model to get all the factors such as number of banks etc , so that the decoder calculations etc. can be easier */

/* ************************************************************************ */
void init_cacti_model(struct cache_t * cache_il1, struct cache_t *cache_il2, struct cache_t *cache_dl1, struct cache_t *cache_dl2)
{

/* these variables are needed to use Cacti to auto-size cache arrays 
     (for optimal delay) */
  time_result_type time_result;
  time_parameter_type time_parameters;

 int ndwl, ndbl, nspd, ntwl, ntbl, ntspd, c,b,a,cache, rowsb, colsb;
  int trowsb, tcolsb, tagsize;
  int va_size = 48;

  /* Calculation of the parameters for LEVEL ONE INSTRUCTION CACHE */
 time_parameters.cache_size = cache_il1->nsets * cache_il1->bsize * cache_il1->assoc; /* C */
  time_parameters.block_size = cache_il1->bsize; /* B */
  time_parameters.associativity = cache_il1->assoc; /* A */
  time_parameters.number_of_sets = cache_il1->nsets; /* C/(B*A) */

  calculate_time(&time_result,&time_parameters);
  output_data(&time_result,&time_parameters);

  ndwl=time_result.best_Ndwl;
  ndbl=time_result.best_Ndbl;
  nspd=time_result.best_Nspd;
  ntwl=time_result.best_Ntwl;
  ntbl=time_result.best_Ntbl;
  ntspd=time_result.best_Ntspd;
No_banks_il1_data = ndwl*ndbl;
No_banks_il1_tag = ntwl*ntbl;
  c = time_parameters.cache_size;
  b = time_parameters.block_size;
  a = time_parameters.associativity;

 No_Nor_il1_data= rowsb = c/(b*a*ndbl*nspd);

  No_3to8_il1_data = ceil((logtwo(rowsb))/3);

  colsb = 8*b*a*nspd/ndwl;

  tagsize = va_size - ((int)logtwo(cache_il1->nsets) + (int)logtwo(cache_il1->bsize));
   No_Nor_il1_tag=trowsb = c/(b*a*ntbl*ntspd);
No_3to8_il1_tag = ceil((logtwo(trowsb))/3);
  tcolsb = a * (tagsize + 1 + 6) * ntspd/ntwl;
if(verbose)
  { 
    fprintf(stderr,"%d KB %d-way cache (%d-byte block size):\n",c,a,b);
    fprintf(stderr,"ndwl == %d, ndbl == %d, nspd == %d\n",ndwl,ndbl,nspd);
    fprintf(stderr,"%d sets of %d rows x %d cols\n",ndwl*ndbl,rowsb,colsb);
    fprintf(stderr,"tagsize == %d\n",tagsize);
  }

 /* Calculation of the parameters for LEVEL ONE DATA CACHE */

time_parameters.cache_size = cache_dl1->nsets * cache_dl1->bsize * cache_dl1->assoc; /* C */
  time_parameters.block_size = cache_dl1->bsize; /* B */
  time_parameters.associativity = cache_dl1->assoc; /* A */
  time_parameters.number_of_sets = cache_dl1->nsets; /* C/(B*A) */

  calculate_time(&time_result,&time_parameters);
  output_data(&time_result,&time_parameters);

  ndwl=time_result.best_Ndwl;
  ndbl=time_result.best_Ndbl;
  nspd=time_result.best_Nspd;
  ntwl=time_result.best_Ntwl;
  ntbl=time_result.best_Ntbl;
  ntspd=time_result.best_Ntspd;

No_banks_dl1_data = ndwl*ndbl;
No_banks_dl1_tag = ntwl*ntbl;

  c = time_parameters.cache_size;
  b = time_parameters.block_size;
  a = time_parameters.associativity; 

  cache=1;

 No_Nor_dl1_data=  rowsb = c/(b*a*ndbl*nspd);
 No_3to8_dl1_data = ceil((logtwo(rowsb))/3);
  colsb = 8*b*a*nspd/ndwl;

  tagsize = va_size - ((int)logtwo(cache_dl1->nsets) + (int)logtwo(cache_dl1->bsize));
   No_Nor_dl1_tag=trowsb = c/(b*a*ntbl*ntspd);
No_3to8_dl1_tag = ceil((logtwo(trowsb))/3);
  tcolsb = a * (tagsize + 1 + 6) * ntspd/ntwl;
 
 /* Calculation of the parameters for LEVEL TWO DATA CACHE */
  /* FIXME Right Now Both L2 I And D cache are same */
 time_parameters.cache_size = cache_dl2->nsets * cache_dl2->bsize * cache_dl2->assoc; /* C */
  time_parameters.block_size = cache_dl2->bsize; /* B */
  time_parameters.associativity = cache_dl2->assoc; /* A */
  time_parameters.number_of_sets = cache_dl2->nsets; /* C/(B*A) */

  calculate_time(&time_result,&time_parameters);
  output_data(&time_result,&time_parameters);

  ndwl=time_result.best_Ndwl;
  ndbl=time_result.best_Ndbl;
  nspd=time_result.best_Nspd;
  ntwl=time_result.best_Ntwl;
  ntbl=time_result.best_Ntbl;
  ntspd=time_result.best_Ntspd;

No_banks_dl2_data = ndwl*ndbl;
No_banks_dl2_tag = ntwl*ntbl;

  c = time_parameters.cache_size;
  b = time_parameters.block_size;
  a = time_parameters.associativity;

 No_Nor_dl2_data=  rowsb = c/(b*a*ndbl*nspd);
 No_3to8_dl2_data = ceil((logtwo(rowsb))/3);
  colsb = 8*b*a*nspd/ndwl;

  tagsize = va_size - ((int)logtwo(cache_dl2->nsets) + (int)logtwo(cache_dl2->bsize));
No_Nor_dl2_tag =trowsb = c/(b*a*ntbl*ntspd);
No_3to8_dl2_tag = ceil((logtwo(trowsb))/3);
  tcolsb = a * (tagsize + 1 + 6) * ntspd/ntwl;

/* Calculation of the parameters for LEVEL TWO INSTRUCTION CACHE */
  /* FIXME Right Now Both L2 I And D cache are same */
 time_parameters.cache_size = cache_il2->nsets * cache_il2->bsize * cache_il2->assoc; /* C */
  time_parameters.block_size = cache_il2->bsize; /* B */
  time_parameters.associativity = cache_il2->assoc; /* A */
  time_parameters.number_of_sets = cache_il2->nsets; /* C/(B*A) */

  calculate_time(&time_result,&time_parameters);
  output_data(&time_result,&time_parameters);

  ndwl=time_result.best_Ndwl;
  ndbl=time_result.best_Ndbl;
  nspd=time_result.best_Nspd;
  ntwl=time_result.best_Ntwl;
  ntbl=time_result.best_Ntbl;
  ntspd=time_result.best_Ntspd;

No_banks_il2_data = ndwl*ndbl;
No_banks_il2_tag = ntwl*ntbl;

  c = time_parameters.cache_size;
  b = time_parameters.block_size;
  a = time_parameters.associativity;

   No_Nor_il2_data=rowsb = c/(b*a*ndbl*nspd);
 No_3to8_il2_data = ceil((logtwo(rowsb))/3);
  colsb = 8*b*a*nspd/ndwl;

  tagsize = va_size - ((int)logtwo(cache_il2->nsets) + (int)logtwo(cache_il2->bsize));
 No_Nor_il2_tag=  trowsb = c/(b*a*ntbl*ntspd);
No_3to8_il2_tag = ceil((logtwo(trowsb))/3);
  tcolsb = a * (tagsize + 1 + 6) * ntspd/ntwl;


 
}

/* ************************************************************************ */

/* Calculation of the leakage of components like REG file , caches etc */

/* ************************************************************************ */




double calculate_leakage_il1cache(double Vdds, double Tkelvin , leakage_power_type *leakage_power)
{

/* ************************************************************************ */

  /* The leakage calculation for a Instruction Level One Cache */
  /* It consists of Data Array, Tag Array ,Array Decoders, Column Muxes, Sense Amps */
  /* Comparators, Mux drivers and Output Drivers */
  /* The Data array and Tag array part has been divided into two parts */
  /* First is the Leakage through the N-MOS Access Transistor called the */
  /* Bit-Line leakage. Second is the leakage thorugh the Cell.(N-Mos and P-MOS   */

/* ************************************************************************ */
  
/* Temporary Vars */ 
double Ileak;
double Ileak_1;
double Ileak_2;
double Ileak_3;
double Ileak_4;
double Ileak_5;
double Ileakn, Ileakp;
double Ileak_data,Ileak_tag;
int tagbits;
 double vth_nmos;
 double vth_pmos;



/* Leakage Calculation for the Bitline of one 6T RAM CELL */
leakage_power->il1_bitline_data_ileak = nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds, Vth0N_Access_L1_ICache,Tkelvin,Tox_User);  

/* Assumption il1_ports ports */
/* Assumption per port , one needs  bitlines */
leakage_power->il1_bitline_data_ileak *= il1_ports;



/* Leakage Calculation for  the Cell of one 6T RAM CELL */
leakage_power->il1_cell_data_ileak = pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User);


/* Leakage Calculation for  the Complete Data Array */
leakage_power->il1_data = (leakage_power->il1_cell_data_ileak + leakage_power->il1_bitline_data_ileak) * (NBITS_PER_LINE(cache_il1)) * cache_il1->assoc * cache_il1->nsets ; 


/* Size of the Tag Array  -- BUG This is the number of bits of tags of only one line */
/* tagbits = ADDRESS_BITS+2-(int)logtwo((double)(NBITS_PER_LINE(cache_il1) * cache_il1->assoc * cache_il1->nsets))+(int)logtwo((double)cache_il1->assoc); */

/* Size of the Complete Tag Array */
tagbits = (ADDRESS_BITS+2-(int)logtwo((double)(cache_il1->bsize * cache_il1->assoc * cache_il1->nsets))+(int)logtwo((double)cache_il1->assoc)) ;

tagbits =  cache_il1->assoc * cache_il1->nsets *tagbits ; 

/* Leakage Calculation for  the Complete Tag Array */
//leakage_power->il1_tag = (leakage_power->il1_cell_data_ileak + (leakage_power->il1_bitline_data_ileak *il1_ports)) * tagbits ;
leakage_power->il1_tag = (leakage_power->il1_cell_data_ileak + (leakage_power->il1_bitline_data_ileak)) * tagbits;  /* lym fix */
/*gate Vss*/

 leakage_power->il1_cell_gateVss_leakage =  (Vdds *nmos_ileakage(aspect_gate_vss,Vdds, Vth0_gate_vss,Tkelvin,Tox_User) * (NBITS_PER_LINE(cache_il1)) * cache_il1->assoc * cache_il1->nsets);


/* Leakage Calculation for  the Complete Tag Array */
leakage_power->il1_tag_gateVss_leakage =  (Vdds *nmos_ileakage(aspect_gate_vss,Vdds, Vth0_gate_vss,Tkelvin,Tox_User)* tagbits) ;

/*drowsy cache*/
 leakage_power->il1_cell_drowsy_leakage = (Vdd_low *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdd_low, Vth0P_L1_ICache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdd_low, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User)+nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdd_low,Vth0N_Access_L1_ICache,Tkelvin,Tox_User))*(NBITS_PER_LINE(cache_il1)) * cache_il1->assoc * cache_il1->nsets);

 leakage_power->il1_tag_drowsy_leakage= (Vdd_low *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdd_low, Vth0P_L1_ICache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdd_low, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User)+nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdd_low,Vth0N_Access_L1_ICache,Tkelvin,Tox_User))* tagbits);

 /*RBB*/
 vth_nmos=Vth0N_Cell_L1_ICache + k1_body_n * (sqrt(vfi+VSB_NMOS)-sqrt(vfi));
 vth_pmos=Vth0P_L1_ICache + k1_body_p * (sqrt(vfi+VSB_PMOS)-sqrt(vfi));

leakage_power->il1_cell_rbb_leakage =  (Vdds *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds,vth_pmos,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds,vth_nmos,Tkelvin,Tox_User) +nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds,Vth0N_Access_L1_ICache,Tkelvin,Tox_User))*(NBITS_PER_LINE(cache_il1)) * cache_il1->assoc * cache_il1->nsets);

 leakage_power->il1_tag_rbb_leakage= (Vdds *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds,vth_pmos,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds,vth_nmos,Tkelvin,Tox_User)+nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds,Vth0N_Access_L1_ICache,Tkelvin,Tox_User))*tagbits);


/* Leakage Calculation for the Data Array and Tag Array Decoders */
/* The Decoder Modelling is Done as in CACTI 1.0 TECH REPORT */
/* Three Stages are Modelled */

/* First Stage Generating 1-of-8 Codes using 8  3-input NAND gates */

/* Normalized leakage for One 3-input NAND gate */
/* It has 3 NMOS and 3 PMOS */
Ileakn = 3 * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User)* (Kndesign_3in_nand + in3_nandn_t_slope*(Tkelvin-300)+in3_nandn_vdd_slope * (Vdds - Volt0))  ;
Ileakp = 3 * pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User) * (Kpdesign_3in_nand + in3_nandp_t_slope*(Tkelvin-300)+in3_nandp_vdd_slope * (Vdds - Volt0)) ;

/* The Final Leakage current for one 3-input NAND gate using the Butts and Sohi Model */
 Ileak = (Ileakn + Ileakp);
 
 /* ****** DATA ******* */ 
 /* Leakage for the First Stage of Decoder Array */
 /* It has 8 NAND gates for each of the No_3to8_il1_data Blocks */
 leakage_power->il1_decoder_first_stage_data_ileak = Ileak * 8 * No_3to8_il1_data;

 /* ****** TAG ******* */ 
 /* Leakage for the First Stage of Decoder Array */
 /* It has 8 NAND gates for each of the No_3to8_il1_data Blocks */
 leakage_power->il1_decoder_first_stage_tag_ileak = Ileak * 8 * No_3to8_il1_tag;


/* Second Stage Combining 1-of-8 Codes using NOR gates */

/* Normalized leakage for One No_3to8_il1_data-input NOR gate */
/* It has No_3to8_il1_data NMOS and No_3to8_il1_data PMOS */

if (No_3to8_il1_data == 4)
   {
     Kndesign_nor_decoder=Kndesign_4in_nor_decoder;
     norn_decoder_t_slope=in4_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in4_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_4in_nor_decoder;
     norp_decoder_t_slope=in4_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in4_norp_decoder_vdd_slope;
   }
if (No_3to8_il1_data == 3)
   {
     Kndesign_nor_decoder=Kndesign_3in_nor_decoder;
     norn_decoder_t_slope=in3_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in3_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_3in_nor_decoder;
     norp_decoder_t_slope=in3_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in3_norp_decoder_vdd_slope;
   }

if (No_3to8_il1_data == 2)
   {
     Kndesign_nor_decoder=Kndesign_2in_nor_decoder;
     norn_decoder_t_slope=in2_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in2_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_2in_nor_decoder;
     norp_decoder_t_slope=in2_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in2_norp_decoder_vdd_slope;
   }

Ileakn = No_3to8_il1_data * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User)* (Kndesign_nor_decoder + norn_decoder_t_slope * (Tkelvin-300) + norn_decoder_vdd_slope * (Vdds - Volt0)) ;
Ileakp = No_3to8_il1_data *pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User) * (Kpdesign_nor_decoder + norp_decoder_t_slope * (Tkelvin-300) + norp_decoder_vdd_slope * (Vdds - Volt0));



/* *****DATA****** */
/* The Final Leakage current for one  No_3to8_il1_data-input NOR gate using the Butts and Sohi Model */
 Ileak_data = (Ileakn + Ileakp);



Ileakn = No_3to8_il1_data * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User)* (Kndesign_nor_decoder + norn_decoder_t_slope * (Tkelvin-300) + norn_decoder_vdd_slope * (Vdds - Volt0)) ;
Ileakp = No_3to8_il1_data *pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User) * (Kpdesign_nor_decoder + norp_decoder_t_slope * (Tkelvin-300) + norp_decoder_vdd_slope * (Vdds - Volt0));



/* *****TAG****** */
/* The Final Leakage current for one  No_3to8_il1_data-input NOR gate using the Butts and Sohi Model */
 Ileak_tag = (Ileakn + Ileakp);


 /* ******DATA**** */
/* Leakage for the Second Stage of  Decoder Array */
 /* It has No_3to8_il1_data-input NOR gates numbering in  No_Nor_il1_data  */
 leakage_power->il1_decoder_second_stage_data_ileak = Ileak_data * No_Nor_il1_data;


 /* ******TAG**** */
/* Leakage for the Second Stage of  Decoder Array */
 /* It has No_3to8_il1_data-input NOR gates numbering in  No_Nor_il1_data  */
 leakage_power->il1_decoder_second_stage_tag_ileak = Ileak_tag * No_Nor_il1_tag;


 /* The Third and final stage is an INVERTER */
Ileak =  nmos_ileakage(aspect_ratio_decoder_inverter_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_decoder_inverter_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak /=2;

/* *****DATA**** */
/* Leakage for the Third Stage of  Decoder Array */
 leakage_power->il1_decoder_third_stage_data_ileak = Ileak ;

/* *****TAG**** */
/* Leakage for the Third Stage of  Decoder Array */
 leakage_power->il1_decoder_third_stage_tag_ileak = Ileak ;

 /* ******DATA***** */
 /*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for one bank */
leakage_power->il1_decoder_complete_stage_data_ileak = leakage_power->il1_decoder_first_stage_data_ileak + leakage_power->il1_decoder_second_stage_data_ileak + leakage_power->il1_decoder_third_stage_data_ileak;

/* ******TAG***** */
 /* Leakage for the Complete TAG Array Decoder */
 /* NOTE This is for one bank */
leakage_power->il1_decoder_complete_stage_tag_ileak = leakage_power->il1_decoder_first_stage_tag_ileak + leakage_power->il1_decoder_second_stage_tag_ileak + leakage_power->il1_decoder_third_stage_tag_ileak;

/* ******DATA****** */
/*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for ALL the banks */
/* Assumption one array decoder per bank  per port*/
leakage_power->il1_decoder_data_ileak = leakage_power->il1_decoder_complete_stage_data_ileak * No_banks_il1_data * il1_ports;

/* ******TAG****** */
/*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for ALL the bank */
/* Assumption one array decoder per bank  per port */
leakage_power->il1_decoder_tag_ileak = leakage_power->il1_decoder_complete_stage_tag_ileak * No_banks_il1_tag * il1_ports;


/* Calculation of the  Leakage of Comparators */
/* There are A (associativity) Comparators */

/* First the Calculation of the Four Inverters */
/* First Comparator Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_comparator_inverter1_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter1_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Second Comparator Inverter */

Ileak_2 =  nmos_ileakage(aspect_ratio_comparator_inverter2_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter2_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_2 /=2;

/* Third Comparator Inverter */

Ileak_3 =  nmos_ileakage(aspect_ratio_comparator_inverter3_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter3_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_3 /=2;


/* Fourth Comparator Inverter */

Ileak_4 =  nmos_ileakage(aspect_ratio_comparator_inverter4_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter4_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_4 /=2;

/* Leakage for all the four inverters */
Ileak = Ileak_1 + Ileak_2 + Ileak_3 + Ileak_4 ;

/* Leakage for the 4 N and 1 P */
Ileak_5 = 4*nmos_ileakage(1.0 ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) * Kndesign_comparator + pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User) * Kpdesign_comparator;


/* Size of the Tag bits */
tagbits = ADDRESS_BITS+2-(int)logtwo((double)(cache_il1->bsize * cache_il1->assoc * cache_il1->nsets))+(int)logtwo((double)cache_il1->assoc);

/* Leakage after Multiplying by Kdesign and the Number of TAG BITS */

Ileak_5 =  Ileak_5 * tagbits;

/* Leakage for the complete Comparator */
leakage_power->il1_comparator_leak = (Ileak +Ileak_5) * cache_il1->assoc;

/* Leakage Calculation for the Mux Drivers */
/* Three stages as Described in the CACTI Tech report */

/* First Stage*/
/* Invert the matchb signal from the comparator */

/*  Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_muxdrv12_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_muxdrv12_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Second Stage */
/* Driving the 8B/b0 NOR gates */



Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User)* (Kndesign_2in_nor_mux_driver + in2_norn_mux_driver_t_slope * (Tkelvin-300) + in2_norn_mux_driver_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User)* (Kpdesign_2in_nor_mux_driver + in2_norp_mux_driver_t_slope * (Tkelvin-300) + in2_norp_mux_driver_vdd_slope * (Vdds - Volt0)) ; 

Ileak_2 = ((8 * cache_il1->bsize)/BITOUT) * ( 2 * Ileakn + 2 * Ileakp);





/* Third Stage */
/* Output of Each NOR is inverted to drive the select lines of bo multiplexors */

Ileak_3 =  nmos_ileakage(aspect_ratio_muxdrv3_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_muxdrv3_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_3 /=2;

/* There are inverters as many as NOR gates */
Ileak_3 *= ((8 * cache_il1->bsize)/BITOUT);


/* Leakage for the complete MUX DRIVERS */
leakage_power->il1_muxdrv_leak = (Ileak_1 + Ileak_2 + Ileak_3) * cache_il1->assoc;

/* Leakage for the Ouput Drivers */

/* First Stage*/
/*  Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_outdrvsel_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_outdrvsel_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Normalized leakage for One 2-input NAND gate */
/* It has 2 NMOS and 2 PMOS */



Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User)* (Kndesign_2in_nand_outdrv + in2_nandn_outdrv_t_slope * (Tkelvin-300) + in2_nandn_outdrv_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User)* (Kpdesign_2in_nand_outdrv + in2_nandp_outdrv_t_slope * (Tkelvin-300) + in2_nandp_outdrv_vdd_slope * (Vdds - Volt0)) ; 


Ileak_2 = 2 * Ileakn + 2 * Ileakp;



/* Normalized leakage for One 2-input NOR gate */
/* It has 2 NMOS and 2 PMOS */


Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User)* (Kndesign_2in_nor_outdrv + in2_norn_outdrv_t_slope * (Tkelvin-300) + in2_norn_outdrv_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User)* (Kpdesign_2in_nor_outdrv + in2_norp_outdrv_t_slope * (Tkelvin-300) + in2_norp_outdrv_vdd_slope * (Vdds - Volt0)) ; 


Ileak_3 = 2 * Ileakn + 2 * Ileakp; 



/* Final Stage*/
/*  Inverter */

Ileak_4 =  nmos_ileakage(aspect_ratio_outdriver_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_outdriver_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_4 /=2;

/* Leakage for the complete OUTPUT DRIVERS */
leakage_power->il1_outdrv_leak = (8*cache_il1->bsize*cache_il1->assoc) * (Ileak_1 + Ileak_2 + Ileak_3 + Ileak_4);

/* Leakage for the Sense Amps */
/* 9-NMOS and 6-PMOS */
/* DATA */
Ileak_1 = 9 * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + 6 * pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

//leakage_power->il1_senseamp_data_leak = Ileak_1 *Kndesign_sensamp *8 *cache_dl1->bsize * cache_il1->assoc;  /* lym fix */
leakage_power->il1_senseamp_data_leak = Ileak_1 *Kndesign_sensamp *8 *cache_il1->bsize * cache_il1->assoc;  
leakage_power->il1_senseamp_tag_leak = Ileak_1 *Kndesign_sensamp  * cache_il1->assoc* tagbits;

}


double calculate_leakage_dl1cache(double Vdds, double Tkelvin, leakage_power_type *leakage_power)
{




/* ************************************************************************ */

  /* The leakage calculation for a Data Level One Cache */
  /* It consists of Data Array, Tag Array ,Array Decoders, Column Muxes, Sense Amps */
  /* Comparators, Mux drivers and Output Drivers */
  /* The Data array and Tag array part has been divided into two parts */
  /* First is the Leakage through the N-MOS Access Transistor called the */
  /* Bit-Line leakage. Second is the leakage thorugh the Cell.(N-Mos and P-MOS   */

/* ************************************************************************ */

/* Temporary Vars */ 
double Ileak;
double Ileak_1;
double Ileak_2;
double Ileak_3;
double Ileak_4;
double Ileak_5;
double Ileak_data,Ileak_tag;
int tagbits;
double Ileakn, Ileakp;
double vth_nmos;
 double vth_pmos;
/* Leakage Calculation for the Bitline of one 6T RAM CELL */
leakage_power->dl1_bitline_data_ileak = nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds, Vth0N_Access_L1_DCache,Tkelvin,Tox_User);  

/* Assumption dl1_ports ports */
/* Assumption per port , one needs  bitlines */
leakage_power->dl1_bitline_data_ileak *= dl1_ports;

/* Leakage Calculation for  the Cell of one 6T RAM CELL */
leakage_power->dl1_cell_data_ileak = pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User);

/* Leakage Calculation for  the Complete Data Array */
leakage_power->dl1_data =  (leakage_power->dl1_cell_data_ileak + leakage_power->dl1_bitline_data_ileak) * (NBITS_PER_LINE(cache_dl1)) * cache_dl1->assoc * cache_dl1->nsets ; 


/* Size of the Complete Tag Array */
tagbits = (ADDRESS_BITS+2-(int)logtwo((double)(cache_dl1->bsize * cache_dl1->assoc * cache_dl1->nsets))+(int)logtwo((double)cache_dl1->assoc)) ;
tagbits =  cache_dl1->assoc * cache_dl1->nsets * tagbits ;
/* Leakage Calculation for  the Complete Tag Array */
//leakage_power->dl1_tag = (leakage_power->dl1_cell_data_ileak + (leakage_power->dl1_bitline_data_ileak*dl1_ports)) * tagbits ;
leakage_power->dl1_tag = (leakage_power->dl1_cell_data_ileak + (leakage_power->dl1_bitline_data_ileak)) * tagbits ; /* lym fix*/

/*gate Vss*/
 leakage_power->dl1_bitline_gateVss_leakage = 0;

 leakage_power->dl1_cell_gateVss_leakage =  (Vdds *nmos_ileakage(aspect_gate_vss,Vdds, Vth0_gate_vss,Tkelvin,Tox_User)* (NBITS_PER_LINE(cache_dl1)) * cache_dl1->assoc * cache_dl1->nsets);
 leakage_power->dl1_bitline_gateVss_leakage = leakage_power->dl1_bitline_data_ileak * (NBITS_PER_LINE(cache_dl1)) * cache_dl1->assoc * cache_dl1->nsets ; /* lym */


/* Leakage Calculation for  the Complete Tag Array */
leakage_power->dl1_tag_gateVss_leakage =  (Vdds *nmos_ileakage(aspect_gate_vss,Vdds, Vth0_gate_vss,Tkelvin,Tox_User)* tagbits) ;
 leakage_power->dl1_bitline_gateVss_leakage += leakage_power->dl1_bitline_data_ileak*tagbits; /* lym */

/*drowsy cache*/

 leakage_power->dl1_cell_drowsy_leakage = (Vdd_low*(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdd_low, Vth0P_L1_DCache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdd_low, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User)+nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdd_low,Vth0N_Access_L1_DCache,Tkelvin,Tox_User))*(NBITS_PER_LINE(cache_dl1)) * cache_dl1->assoc * cache_dl1->nsets);

 leakage_power->dl1_tag_drowsy_leakage=(Vdd_low*(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdd_low, Vth0P_L1_DCache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdd_low, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User)+nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdd_low,Vth0N_Access_L1_DCache,Tkelvin,Tox_User))*tagbits);


/*RBB*/
 vth_nmos=Vth0N_Cell_L1_DCache + k1_body_n * (sqrt(vfi+VSB_NMOS)-sqrt(vfi));
 vth_pmos=Vth0P_L1_DCache + k1_body_p * (sqrt(vfi+VSB_PMOS)-sqrt(vfi));

leakage_power->dl1_cell_rbb_leakage =  (Vdds *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds,vth_pmos,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds,vth_nmos,Tkelvin,Tox_User)+nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds,Vth0N_Access_L1_DCache,Tkelvin,Tox_User))*(NBITS_PER_LINE(cache_dl1)) * cache_dl1->assoc * cache_dl1->nsets);

 leakage_power->dl1_tag_rbb_leakage=  (Vdds *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds,vth_pmos,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds,vth_nmos,Tkelvin,Tox_User)+nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds,Vth0N_Access_L1_DCache,Tkelvin,Tox_User) )*tagbits);

 /*dual VT*/

 leakage_power->dl1_cell_dual_leakage=pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds,Vt_cell_pmos_high,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds,Vt_cell_nmos_high,Tkelvin,Tox_User);


leakage_power->dl1_bit_dual_leakage = nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds,Vt_bit_nmos_low,Tkelvin,Tox_User);  

leakage_power->dl1_bit_dual_leakage *= dl1_ports;



/* Leakage Calculation for the Data Array and Tag Array Decoders */
/* The Decoder Modelling is Done as in CACTI 1.0 TECH REPORT */
/* Three Stages are Modelled */

/* First Stage Generating 1-of-8 Codes using 8  3-input NAND gates */

/* Normalized leakage for One 3-input NAND gate */
/* It has 3 NMOS and 3 PMOS */


Ileakn = 3 * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User)* (Kndesign_3in_nand + in3_nandn_t_slope*(Tkelvin-300)+in3_nandn_vdd_slope * (Vdds - Volt0))  ;
Ileakp = 3 * pmos_ileakage(1.0,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User) * (Kpdesign_3in_nand + in3_nandp_t_slope*(Tkelvin-300)+in3_nandp_vdd_slope * (Vdds - Volt0)) ;


/* The Final Leakage current for one 3-input NAND gate using the Butts and Sohi Model */
 Ileak = (Ileakn + Ileakp);



 
 /* ****** DATA ******* */ 
 /* Leakage for the First Stage of Decoder Array */
 /* It has 8 NAND gates for each of the No_3to8_dl1_data Blocks */
 leakage_power->dl1_decoder_first_stage_data_ileak = Ileak * 8 * No_3to8_dl1_data;

/* ****** TAG ******* */ 
 /* Leakage for the First Stage of Decoder Array */
 /* It has 8 NAND gates for each of the No_3to8_dl1_data Blocks */
 leakage_power->dl1_decoder_first_stage_tag_ileak = Ileak * 8 * No_3to8_dl1_tag;


/* Second Stage Combining 1-of-8 Codes using NOR gates */

/* Normalized leakage for One No_3to8_dl1_data-input NOR gate */
/* It has No_3to8_dl1_data NMOS and No_3to8_dl1_data PMOS */

if (No_3to8_dl1_data == 4)
   {
     Kndesign_nor_decoder=Kndesign_4in_nor_decoder;
     norn_decoder_t_slope=in4_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in4_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_4in_nor_decoder;
     norp_decoder_t_slope=in4_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in4_norp_decoder_vdd_slope;
   }
if (No_3to8_dl1_data == 3)
   {
     Kndesign_nor_decoder=Kndesign_3in_nor_decoder;
     norn_decoder_t_slope=in3_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in3_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_3in_nor_decoder;
     norp_decoder_t_slope=in3_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in3_norp_decoder_vdd_slope;
   }

if (No_3to8_dl1_data == 2)
   {
     Kndesign_nor_decoder=Kndesign_2in_nor_decoder;
     norn_decoder_t_slope=in2_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in2_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_2in_nor_decoder;
     norp_decoder_t_slope=in2_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in2_norp_decoder_vdd_slope;
   }

Ileakn = No_3to8_dl1_data * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User)* (Kndesign_nor_decoder + norn_decoder_t_slope * (Tkelvin-300) + norn_decoder_vdd_slope * (Vdds - Volt0)) ;
Ileakp = No_3to8_dl1_data *pmos_ileakage(1.0,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User) * (Kpdesign_nor_decoder + norp_decoder_t_slope * (Tkelvin-300) + norp_decoder_vdd_slope * (Vdds - Volt0));


/* *****DATA****** */
/* The Final Leakage current for one  No_3to8_dl1_data-input NOR gate using the Butts and Sohi Model */
Ileak_data = (Ileakn + Ileakp);

/* *****TAG****** */
/* The Final Leakage current for one  No_3to8_dl1_data-input NOR gate using the Butts and Sohi Model */
 Ileak_tag =  (Ileakn + Ileakp);

 /* ******DATA**** */
/* Leakage for the Second Stage of  Decoder Array */
 /* It has No_3to8_dl1_data-input NOR gates numbering in  No_Nor_dl1_data  */
 leakage_power->dl1_decoder_second_stage_data_ileak = Ileak_data * No_Nor_dl1_data;


 /* ******TAG**** */
/* Leakage for the Second Stage of  Decoder Array */
 /* It has No_3to8_dl1_data-input NOR gates numbering in  No_Nor_dl1_data  */
 leakage_power->dl1_decoder_second_stage_tag_ileak = Ileak_tag * No_Nor_dl1_tag;


 /* The Third and final stage is an INVERTER */
Ileak =  nmos_ileakage(aspect_ratio_decoder_inverter_N /* FIXEME*/,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_decoder_inverter_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak /=2;

/* *****DATA**** */
/* Leakage for the Third Stage of  Decoder Array */
 leakage_power->dl1_decoder_third_stage_data_ileak = Ileak ;

/* *****TAG**** */
/* Leakage for the Third Stage of  Decoder Array */
 leakage_power->dl1_decoder_third_stage_tag_ileak = Ileak ;

 /* ******DATA***** */
 /*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for one bank */
leakage_power->dl1_decoder_complete_stage_data_ileak = leakage_power->dl1_decoder_first_stage_data_ileak + leakage_power->dl1_decoder_second_stage_data_ileak + leakage_power->dl1_decoder_third_stage_data_ileak;

/* ******TAG***** */
 /*Leakage for the Complete TAG Array Decoder */
 /* NOTE This is for one bank */
leakage_power->dl1_decoder_complete_stage_tag_ileak = leakage_power->dl1_decoder_first_stage_tag_ileak + leakage_power->dl1_decoder_second_stage_tag_ileak + leakage_power->dl1_decoder_third_stage_tag_ileak;

/* ******DATA****** */
/*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for ALL the banks */
/* Assumption one array decoder per bank */
leakage_power->dl1_decoder_data_ileak = leakage_power->dl1_decoder_complete_stage_data_ileak * No_banks_dl1_data * dl1_ports;

/* ******TAG****** */
/*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for ALL the banks */
/* Assumption one array decoder per bank */
leakage_power->dl1_decoder_tag_ileak = leakage_power->dl1_decoder_complete_stage_tag_ileak * No_banks_dl1_tag * dl1_ports;

/* Calculation of the  Leakage of Comparators */
/* There are A (Associativity) Comparators */

/* First the Calculation of the Four Inverters */
/* First Comparator Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_comparator_inverter1_N ,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter1_P,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Second Comparator Inverter */

Ileak_2 =  nmos_ileakage(aspect_ratio_comparator_inverter2_N ,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter2_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_2 /=2;

/* Third Comparator Inverter */

Ileak_3 =  nmos_ileakage(aspect_ratio_comparator_inverter3_N ,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter3_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_3 /=2;


/* Fourth Comparator Inverter */

Ileak_4 =  nmos_ileakage(aspect_ratio_comparator_inverter4_N ,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter4_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_4 /=2;

/* Leakage for all the four inverters */
Ileak = Ileak_1 + Ileak_2 + Ileak_3 + Ileak_4 ;

/* Leakage for the 4 N and 1 P */

Ileak_5 = 4*nmos_ileakage(1.0 ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) * Kndesign_comparator + pmos_ileakage(1.0,Vdds, Vth0P_L1_ICache,Tkelvin,Tox_User) * Kpdesign_comparator;

/* Size of the Tag  */
tagbits = ADDRESS_BITS+2-(int)logtwo((double)(cache_dl1->bsize * cache_dl1->assoc * cache_dl1->nsets))+(int)logtwo((double)cache_dl1->assoc);

/* Leakage after Multiplying by Kdesign and the Number of TAG BITS */

Ileak_5 =  Ileak_5 *  tagbits;

/* Leakage for the complete Comparator */
leakage_power->dl1_comparator_leak = (Ileak +Ileak_5) * cache_dl1->assoc;

/* Leakage Calculation for the Mux Drivers */
/* Three stages as Described in the CACTI Tech report */

/* First Stage*/
/* Invert the matchb signal from the comparator */

/*  Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_muxdrv12_N ,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_muxdrv12_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Second Stage */
/* Driving the 8B/b0 NOR gates */
 
Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User)* (Kndesign_2in_nor_mux_driver + in2_norn_mux_driver_t_slope * (Tkelvin-300) + in2_norn_mux_driver_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User)* (Kpdesign_2in_nor_mux_driver + in2_norp_mux_driver_t_slope * (Tkelvin-300) + in2_norp_mux_driver_vdd_slope * (Vdds - Volt0)) ; 

Ileak_2 = ((8 * cache_dl1->bsize)/BITOUT) * ( 2 * Ileakn + 2 * Ileakp);





/* Third Stage */
/* Ouput of Each NOR is inverted to drive the select lines of bo multiplexors */

Ileak_3 =  nmos_ileakage(aspect_ratio_muxdrv3_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_muxdrv3_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_3 /=2;

/* There are inverters as many as NOR gates */
Ileak_3 *= ((8 * cache_dl1->bsize)/BITOUT);


/* Leakage for the complete MUX DRIVERS */
leakage_power->dl1_muxdrv_leak = (Ileak_1 + Ileak_2 + Ileak_3) * cache_dl1->assoc ;



/* Leakage for the Ouput Drivers */

/* First Stage*/
/*  Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_outdrvsel_N ,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_outdrvsel_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Normalized leakage for One 2-input NAND gate */
/* It has 2 NMOS and 2 PMOS */


Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User)* (Kndesign_2in_nand_outdrv + in2_nandn_outdrv_t_slope * (Tkelvin-300) + in2_nandn_outdrv_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User)* (Kpdesign_2in_nand_outdrv + in2_nandp_outdrv_t_slope * (Tkelvin-300) + in2_nandp_outdrv_vdd_slope * (Vdds - Volt0)) ; 


Ileak_2 = 2 * Ileakn + 2 * Ileakp;



/* Normalized leakage for One 2-input NOR gate */
/* It has 2 NMOS and 2 PMOS */


Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User)* (Kndesign_2in_nor_outdrv + in2_norn_outdrv_t_slope * (Tkelvin-300) + in2_norn_outdrv_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User)* (Kpdesign_2in_nor_outdrv + in2_norp_outdrv_t_slope * (Tkelvin-300) + in2_norp_outdrv_vdd_slope * (Vdds - Volt0)) ; 


Ileak_3 = 2 * Ileakn + 2 * Ileakp; 


/* Final Stage*/
/*  Inverter */

Ileak_4 =  nmos_ileakage(aspect_ratio_outdriver_N ,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_outdriver_P,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_4 /=2;

/* Leakage for the complete OUTPUT DRIVERS */
leakage_power->dl1_outdrv_leak =  (8*cache_dl1->bsize*cache_dl1->assoc) * (Ileak_1 + Ileak_2 + Ileak_3 + Ileak_4);


/* Leakage for the Sense Amps */
/* 9-NMOS and 6-PMOS */
/* DATA */
Ileak_1 = 9 * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L1_DCache,Tkelvin,Tox_User) + 6 * pmos_ileakage(1.0,Vdds, Vth0P_L1_DCache,Tkelvin,Tox_User);

leakage_power->dl1_senseamp_data_leak = Ileak_1 *Kndesign_sensamp *8 *cache_dl1->bsize * cache_dl1->assoc; 
leakage_power->dl1_senseamp_tag_leak = Ileak_1 *Kndesign_sensamp  * cache_dl1->assoc* tagbits;

}

double calculate_leakage_dl2cache(double Vdds, double Tkelvin, leakage_power_type *leakage_power)

{



/* ************************************************************************ */

  /* The leakage calculation for a Data Level Two Cache */
  /* It consists of Data Array, Tag Array ,Array Decoders, Column Muxes, Sense Amps */
  /* Comparators, Mux drivers and Output Drivers */
  /* The Data array and Tag array part has been divided into two parts */
  /* First is the Leakage through the N-MOS Access Transistor called the */
  /* Bit-Line leakage. Second is the leakage thorugh the Cell.(N-Mos and P-MOS   */

/* ************************************************************************ */

/* Temporary Vars */ 
double Ileak;
double Ileak_1;
double Ileak_2;
double Ileak_3;
double Ileak_4;
double Ileak_5;
double Ileak_data,Ileak_tag;
int tagbits;
double Ileakn, Ileakp;
 double vth_nmos;
 double vth_pmos;
/* Leakage Calculation for the Bitline of one 6T RAM CELL */
leakage_power->dl2_bitline_data_ileak = nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds, Vth0N_Access_L2_DCache,Tkelvin,Tox_User);  

/* Assumption dl2_ports ports */
/* Assumption per port , one needs  bitlines */
leakage_power->dl2_bitline_data_ileak *= dl2_ports;

/* Leakage Calculation for  the Cell of one 6T RAM CELL */
leakage_power->dl2_cell_data_ileak = pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User);

/* Leakage Calculation for  the Complete Data Array */
leakage_power->dl2_data = (leakage_power->dl2_cell_data_ileak + leakage_power->dl2_bitline_data_ileak) * (NBITS_PER_LINE(cache_dl2)) * cache_dl2->assoc * cache_dl2->nsets ; 


/* Size of the Complete Tag Array */
tagbits = (ADDRESS_BITS+2-(int)logtwo((double)(cache_dl2->bsize * cache_dl2->assoc * cache_dl2->nsets))+(int)logtwo((double)cache_dl2->assoc)) ;
tagbits =  cache_dl2->assoc * cache_dl2->nsets * tagbits ;
/* Leakage Calculation for  the Complete Tag Array */
leakage_power->dl2_tag = (leakage_power->dl2_cell_data_ileak + (leakage_power->dl2_bitline_data_ileak * dl2_ports)) * tagbits ;

/*gate Vss*/


 leakage_power->dl2_cell_gateVss_leakage =  (Vdds *nmos_ileakage(aspect_gate_vss,Vdds, Vth0_gate_vss,Tkelvin,Tox_User)* (NBITS_PER_LINE(cache_dl2)) * cache_dl2->assoc * cache_dl2->nsets);


/* Leakage Calculation for  the Complete Tag Array */
leakage_power->dl2_tag_gateVss_leakage = (Vdds * nmos_ileakage(aspect_gate_vss,Vdds, Vth0_gate_vss,Tkelvin,Tox_User)* tagbits) ;

/*drowsy cache*/

 leakage_power->dl2_cell_drowsy_leakage =(Vdd_low * (pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdd_low, Vth0P_L2_DCache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdd_low, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User))*(NBITS_PER_LINE(cache_dl2)) * cache_dl2->assoc * cache_dl2->nsets);

 leakage_power->dl2_tag_drowsy_leakage=(Vdd_low *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdd_low, Vth0P_L2_DCache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdd_low, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User))*tagbits);

/*RBB*/

 vth_nmos=Vth0N_Cell_L2_DCache + k1_body_n * (sqrt(vfi+VSB_NMOS)-sqrt(vfi));
 vth_pmos=Vth0P_L2_DCache + k1_body_p * (sqrt(vfi+VSB_PMOS)-sqrt(vfi));

leakage_power->dl2_cell_rbb_leakage =  (Vdds *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds,vth_pmos,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds,vth_nmos,Tkelvin,Tox_User))*(NBITS_PER_LINE(cache_dl2)) * cache_dl2->assoc * cache_dl2->nsets);

 leakage_power->dl2_tag_rbb_leakage= (Vdds *(pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds,vth_pmos,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds,vth_nmos,Tkelvin,Tox_User))*tagbits);

/* Leakage Calculation for the Data Array and Tag Array Decoders */
/* The Decoder Modelling is Done as in CACTI 1.0 TECH REPORT */
/* Three Stages are Modelled */

/* First Stage Generating 1-of-8 Codes using 8  3-input NAND gates */

/* Normalized leakage for One 3-input NAND gate */
/* It has 3 NMOS and 3 PMOS */

Ileakn = 3 * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User)* (Kndesign_3in_nand + in3_nandn_t_slope*(Tkelvin-300)+in3_nandn_vdd_slope * (Vdds - Volt0))  ;
Ileakp = 3 * pmos_ileakage(1.0,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User) * (Kpdesign_3in_nand + in3_nandp_t_slope*(Tkelvin-300)+in3_nandp_vdd_slope * (Vdds - Volt0)) ;


/* The Final Leakage current for one 3-input NAND gate using the Butts and Sohi Model */
 Ileak = (Ileakn + Ileakp);


 
 /* ****** DATA ******* */ 
 /* Leakage for the First Stage of Decoder Array */
 /* It has 8 NAND gates for each of the No_3to8_dl2_data Blocks */
 leakage_power->dl2_decoder_first_stage_data_ileak = Ileak * 8 * No_3to8_dl2_data;

/* ****** TAG ******* */ 
 /* Leakage for the First Stage of Decoder Array */
 /* It has 8 NAND gates for each of the No_3to8_dl2_data Blocks */
 leakage_power->dl2_decoder_first_stage_tag_ileak = Ileak * 8 * No_3to8_dl2_tag;


/* Second Stage Combining 1-of-8 Codes using NOR gates */

/* Normalized leakage for One No_3to8_dl2_data-input NOR gate */
/* It has No_3to8_dl2_data NMOS and No_3to8_dl2_data PMOS */

if (No_3to8_dl2_data == 4)
   {
     Kndesign_nor_decoder=Kndesign_4in_nor_decoder;
     norn_decoder_t_slope=in4_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in4_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_4in_nor_decoder;
     norp_decoder_t_slope=in4_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in4_norp_decoder_vdd_slope;
   }
if (No_3to8_dl2_data == 3)
   {
     Kndesign_nor_decoder=Kndesign_3in_nor_decoder;
     norn_decoder_t_slope=in3_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in3_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_3in_nor_decoder;
     norp_decoder_t_slope=in3_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in3_norp_decoder_vdd_slope;
   }

if (No_3to8_dl2_data == 2)
   {
     Kndesign_nor_decoder=Kndesign_2in_nor_decoder;
     norn_decoder_t_slope=in2_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in2_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_2in_nor_decoder;
     norp_decoder_t_slope=in2_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in2_norp_decoder_vdd_slope;
   }

Ileakn = No_3to8_dl2_data * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User)* (Kndesign_nor_decoder + norn_decoder_t_slope * (Tkelvin-300) + norn_decoder_vdd_slope * (Vdds - Volt0)) ;
Ileakp = No_3to8_dl2_data *pmos_ileakage(1.0,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User) * (Kpdesign_nor_decoder + norp_decoder_t_slope * (Tkelvin-300) + norp_decoder_vdd_slope * (Vdds - Volt0));


/* *****DATA****** */
/* The Final Leakage current for one  No_3to8_dl2_data-input NOR gate using the Butts and Sohi Model */
 
Ileak_data = (Ileakn + Ileakp);
  
/* *****TAG****** */
/* The Final Leakage current for one  No_3to8_dl2_data-input NOR gate using the Butts and Sohi Model */

Ileak_tag =  (Ileakn + Ileakp);

 /* ******DATA**** */
/* Leakage for the Second Stage of  Decoder Array */
 /* It has No_3to8_dl2_data-input NOR gates numbering in  No_Nor_dl2_data  */
 leakage_power->dl2_decoder_second_stage_data_ileak = Ileak_data * No_Nor_dl2_data;


 /* ******TAG**** */
/* Leakage for the Second Stage of  Decoder Array */
 /* It has No_3to8_dl2_data-input NOR gates numbering in  No_Nor_dl2_data  */
 leakage_power->dl2_decoder_second_stage_tag_ileak = Ileak_tag * No_Nor_dl2_tag;


 /* The Third and final stage is an INVERTER */
Ileak =  nmos_ileakage(aspect_ratio_decoder_inverter_N /* FIXME*/,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_decoder_inverter_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak /=2;

/* *****DATA**** */
/* Leakage for the Third Stage of  Decoder Array */
 leakage_power->dl2_decoder_third_stage_data_ileak = Ileak ;

/* *****TAG**** */
/* Leakage for the Third Stage of  Decoder Array */
 leakage_power->dl2_decoder_third_stage_tag_ileak = Ileak ;

 /* ******DATA***** */
 /*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for one bank */
leakage_power->dl2_decoder_complete_stage_data_ileak = leakage_power->dl2_decoder_first_stage_data_ileak + leakage_power->dl2_decoder_second_stage_data_ileak + leakage_power->dl2_decoder_third_stage_data_ileak;

/* ******TAG***** */
 /*Leakage for the Complete TAG Array Decoder */
 /* NOTE This is for one bank */
leakage_power->dl2_decoder_complete_stage_tag_ileak = leakage_power->dl2_decoder_first_stage_tag_ileak + leakage_power->dl2_decoder_second_stage_tag_ileak + leakage_power->dl2_decoder_third_stage_tag_ileak;

/* ******DATA****** */
/*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for ALL the banks */
/* Assumption one array decoder per bank */
leakage_power->dl2_decoder_data_ileak = leakage_power->dl2_decoder_complete_stage_data_ileak * No_banks_dl2_data * dl2_ports;

/* ******TAG****** */
/*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for ALL the banks */
/* Assumption one array decoder per bank */
leakage_power->dl2_decoder_tag_ileak = leakage_power->dl2_decoder_complete_stage_tag_ileak * No_banks_dl2_tag * dl2_ports;



/* Calculation of the  Leakage of Comparators */
/* There are A (associativity) Comparators */

/* First the Calculation of the Four Inverters */
/* First Comparator Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_comparator_inverter1_N ,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter1_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Second Comparator Inverter */

Ileak_2 =  nmos_ileakage(aspect_ratio_comparator_inverter2_N ,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter2_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_2 /=2;

/* Third Comparator Inverter */

Ileak_3 =  nmos_ileakage(aspect_ratio_comparator_inverter3_N ,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter3_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_3 /=2;


/* Fourth Comparator Inverter */

Ileak_4 =  nmos_ileakage(aspect_ratio_comparator_inverter4_N ,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter4_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_4 /=2;

/* Leakage for all the four inverters */
Ileak = Ileak_1 + Ileak_2 + Ileak_3 + Ileak_4 ;

/* Leakage for the 4 N and 1 P */


Ileak_5 = 4*nmos_ileakage(1.0 ,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) * Kndesign_comparator + pmos_ileakage(1.0,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User) * Kpdesign_comparator;

/* Size of the Tag  */
tagbits = ADDRESS_BITS+2-(int)logtwo((double)(cache_dl2->bsize * cache_dl2->assoc * cache_dl2->nsets))+(int)logtwo((double)cache_dl2->assoc);

/* Leakage after Multiplying by Kdesign and the Number of TAG BITS */

Ileak_5 =  Ileak_5 *  tagbits;

/* Leakage for the complete Comparator */
leakage_power->dl2_comparator_leak = (Ileak +Ileak_5) * cache_dl2->assoc;



/* Leakage Calculation for the Mux Drivers */
/* Three stages as Described in the CACTI Tech report */

/* First Stage*/
/* Invert the matchb signal from the comparator */

/*  Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_muxdrv12_N ,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_muxdrv12_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Second Stage */
/* Driving the 8B/b0 NOR gates */

Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User)* (Kndesign_2in_nor_mux_driver + in2_norn_mux_driver_t_slope * (Tkelvin-300) + in2_norn_mux_driver_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User)* (Kpdesign_2in_nor_mux_driver + in2_norp_mux_driver_t_slope * (Tkelvin-300) + in2_norp_mux_driver_vdd_slope * (Vdds - Volt0)) ; 

Ileak_2 = ((8 * cache_dl2->bsize)/BITOUT) * ( 2 * Ileakn + 2 * Ileakp);



/* Third Stage */
/* Ouput of Each NOR is inverted to drive the select lines of bo multiplexors */

Ileak_3 =  nmos_ileakage(aspect_ratio_muxdrv3_N ,Vdds, Vth0N_Cell_L1_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_muxdrv3_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_3 /=2;

/* There are inverters as many as NOR gates */
Ileak_3 *= ((8 * cache_dl2->bsize)/BITOUT);


/* Leakage for the complete MUX DRIVERS */
leakage_power->dl2_muxdrv_leak = (Ileak_1 + Ileak_2 + Ileak_3) * cache_dl2->assoc;



/* Leakage for the Ouput Drivers */

/* First Stage*/
/*  Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_outdrvsel_N ,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_outdrvsel_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Normalized leakage for One 2-input NAND gate */
/* It has 2 NMOS and 2 PMOS */


Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User)* (Kndesign_2in_nand_outdrv + in2_nandn_outdrv_t_slope * (Tkelvin-300) + in2_nandn_outdrv_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User)* (Kpdesign_2in_nand_outdrv + in2_nandp_outdrv_t_slope * (Tkelvin-300) + in2_nandp_outdrv_vdd_slope * (Vdds - Volt0)) ; 

Ileak_2 = 2 * Ileakn + 2 * Ileakp;


/* Normalized leakage for One 2-input NOR gate */
/* It has 2 NMOS and 2 PMOS */
Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User)* (Kndesign_2in_nor_outdrv + in2_norn_outdrv_t_slope * (Tkelvin-300) + in2_norn_outdrv_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User)* (Kpdesign_2in_nor_outdrv + in2_norp_outdrv_t_slope * (Tkelvin-300) + in2_norp_outdrv_vdd_slope * (Vdds - Volt0)) ; 


Ileak_3 = 2 * Ileakn + 2 * Ileakp; 



/* Final Stage*/
/*  Inverter */

Ileak_4 =  nmos_ileakage(aspect_ratio_outdriver_N ,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_outdriver_P,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_4 /=2;

/* Leakage for the complete OUTPUT DRIVERS */
leakage_power->dl2_outdrv_leak =  (8*cache_dl2->bsize*cache_dl2->assoc) * (Ileak_1 + Ileak_2 + Ileak_3 + Ileak_4);


/* Leakage for the Sense Amps */
/* 9-NMOS and 6-PMOS */
/* DATA */
Ileak_1 = 9 * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_DCache,Tkelvin,Tox_User) + 6 * pmos_ileakage(1.0,Vdds, Vth0P_L2_DCache,Tkelvin,Tox_User);

leakage_power->dl2_senseamp_data_leak = Ileak_1 *Kndesign_sensamp *8 *cache_dl2->bsize * cache_dl2->assoc; 
leakage_power->dl2_senseamp_tag_leak = Ileak_1 *Kndesign_sensamp  * cache_dl2->assoc* tagbits;

}



double calculate_leakage_il2cache(double Vdds, double Tkelvin, leakage_power_type *leakage_power)
{

/* ************************************************************************ */

  /* The leakage calculation for a Instruction Level Two Cache */
  /* It consists of Data Array, Tag Array ,Array Decoders, Column Muxes, Sense Amps */
  /* Comparators, Mux drivers and Output Drivers */
  /* The Data array and Tag array part has been divided into two parts */
  /* First is the Leakage through the N-MOS Access Transistor called the */
  /* Bit-Line leakage. Second is the leakage thorugh the Cell.(N-Mos and P-MOS   */

/* ************************************************************************* */


/* Temporary Vars */ 
double Ileak;
double Ileak_1;
double Ileak_2;
double Ileak_3;
double Ileak_4;
double Ileak_5;
double Ileak_data,Ileak_tag;
int tagbits;
double Ileakn, Ileakp;


/* Leakage Calculation for the Bitline of one 6T RAM CELL */
leakage_power->il2_bitline_data_ileak = nmos_ileakage(aspect_ratio_access_ram_cell_N,Vdds, Vth0N_Access_L2_ICache,Tkelvin,Tox_User);  

/* Assumption il2_ports ports */
/* Assumption per port , one needs  bitlines */
leakage_power->il2_bitline_data_ileak *= il2_ports;

/* Leakage Calculation for  the Cell of one 6T RAM CELL */
leakage_power->il2_cell_data_ileak = pmos_ileakage(aspect_ratio_ram_cell_l3_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ram_cell_l2_N,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User);

/* Leakage Calculation for  the Complete Data Array */
leakage_power->il2_data = (leakage_power->il2_cell_data_ileak + leakage_power->il2_bitline_data_ileak) * (NBITS_PER_LINE(cache_il2)) * cache_il2->assoc * cache_il2->nsets ; 


/* Size of the Complete Tag Array */
tagbits = (ADDRESS_BITS+2-(int)logtwo((double)(cache_il2->bsize * cache_il2->assoc * cache_il2->nsets))+(int)logtwo((double)cache_il2->assoc)) ;
tagbits =  cache_il2->assoc * cache_il2->nsets * tagbits ;
/* Leakage Calculation for  the Complete Tag Array */
//leakage_power->il2_tag = (leakage_power->il2_cell_data_ileak + (leakage_power->il2_bitline_data_ileak * il2_ports)) * tagbits ;
leakage_power->il2_tag = (leakage_power->il2_cell_data_ileak + (leakage_power->il2_bitline_data_ileak)) * tagbits; /* lym fix */
/* Leakage Calculation for the Data Array and Tag Array Decoders */
/* The Decoder Modelling is Done as in CACTI 1.0 TECH REPORT */
/* Three Stages are Modelled */

/* First Stage Generating 1-of-8 Codes using 8  3-input NAND gates */

/* Normalized leakage for One 3-input NAND gate */
/* It has 3 NMOS and 3 PMOS */


Ileakn = 3 * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User)* (Kndesign_3in_nand + in3_nandn_t_slope*(Tkelvin-300)+in3_nandn_vdd_slope * (Vdds - Volt0))  ;
Ileakp = 3 * pmos_ileakage(1.0,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User) * (Kpdesign_3in_nand + in3_nandp_t_slope*(Tkelvin-300)+in3_nandp_vdd_slope * (Vdds - Volt0)) ;


/* The Final Leakage current for one 3-input NAND gate using the Butts and Sohi Model */
 Ileak = (Ileakn + Ileakp);

 /* ****** DATA ******* */ 
 /* Leakage for the First Stage of Decoder Array */
 /* It has 8 NAND gates for each of the No_3to8_il2_data Blocks */
 leakage_power->il2_decoder_first_stage_data_ileak = Ileak * 8 * No_3to8_il2_data;

/* ****** TAG ******* */ 
 /* Leakage for the First Stage of Decoder Array */
 /* It has 8 NAND gates for each of the No_3to8_il2_data Blocks */
 leakage_power->il2_decoder_first_stage_tag_ileak = Ileak * 8 * No_3to8_il2_tag;


/* Second Stage Combining 1-of-8 Codes using NOR gates */

/* Normalized leakage for One No_3to8_il2_data-input NOR gate */
/* It has No_3to8_il2_data NMOS and No_3to8_il2_data PMOS */

if (No_3to8_il2_data == 4)
   {
     Kndesign_nor_decoder=Kndesign_4in_nor_decoder;
     norn_decoder_t_slope=in4_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in4_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_4in_nor_decoder;
     norp_decoder_t_slope=in4_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in4_norp_decoder_vdd_slope;
   }
if (No_3to8_il2_data == 3)
   {
     Kndesign_nor_decoder=Kndesign_3in_nor_decoder;
     norn_decoder_t_slope=in3_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in3_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_3in_nor_decoder;
     norp_decoder_t_slope=in3_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in3_norp_decoder_vdd_slope;
   }

if (No_3to8_il2_data == 2)
   {
     Kndesign_nor_decoder=Kndesign_2in_nor_decoder;
     norn_decoder_t_slope=in2_norn_decoder_t_slope;
     norn_decoder_vdd_slope=in2_norn_decoder_vdd_slope;
     Kpdesign_nor_decoder=Kpdesign_2in_nor_decoder;
     norp_decoder_t_slope=in2_norp_decoder_t_slope;
     norp_decoder_vdd_slope=in2_norp_decoder_vdd_slope;
   }

Ileakn = No_3to8_il2_data * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User)* (Kndesign_nor_decoder + norn_decoder_t_slope * (Tkelvin-300) + norn_decoder_vdd_slope * (Vdds - Volt0)) ;
Ileakp = No_3to8_il2_data *pmos_ileakage(1.0,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User) * (Kpdesign_nor_decoder + norp_decoder_t_slope * (Tkelvin-300) + norp_decoder_vdd_slope * (Vdds - Volt0));



/* *****DATA****** */
/* The Final Leakage current for one  No_3to8_il2_data-input NOR gate using the Butts and Sohi Model */

  Ileak_data = (Ileakn + Ileakp);

/* *****TAG****** */
/* The Final Leakage current for one  No_3to8_il2_data-input NOR gate using the Butts and Sohi Model */
Ileak_tag =  (Ileakn + Ileakp);


 /* ******DATA**** */
/* Leakage for the Second Stage of  Decoder Array */
 /* It has No_3to8_il2_data-input NOR gates numbering in  No_Nor_il2_data  */
 leakage_power->il2_decoder_second_stage_data_ileak = Ileak_data * No_Nor_il2_data;


 /* ******TAG**** */
/* Leakage for the Second Stage of  Decoder Array */
 /* It has No_3to8_il2_data-input NOR gates numbering in  No_Nor_il2_data  */
 leakage_power->il2_decoder_second_stage_tag_ileak = Ileak_tag * No_Nor_il2_tag;


 /* The Third and final stage is an INVERTER */
Ileak =  nmos_ileakage(aspect_ratio_decoder_inverter_N /* FIXME*/,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_decoder_inverter_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak /=2;

/* *****DATA**** */
/* Leakage for the Third Stage of  Decoder Array */
 leakage_power->il2_decoder_third_stage_data_ileak = Ileak ;

/* *****TAG**** */
/* Leakage for the Third Stage of  Decoder Array */
 leakage_power->il2_decoder_third_stage_tag_ileak = Ileak ;

 /* ******DATA***** */
 /*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for one bank */
leakage_power->il2_decoder_complete_stage_data_ileak = leakage_power->il2_decoder_first_stage_data_ileak + leakage_power->il2_decoder_second_stage_data_ileak + leakage_power->il2_decoder_third_stage_data_ileak;

/* ******TAG***** */
 /*Leakage for the Complete TAG Array Decoder */
 /* NOTE This is for one bank */
leakage_power->il2_decoder_complete_stage_tag_ileak = leakage_power->il2_decoder_first_stage_tag_ileak + leakage_power->il2_decoder_second_stage_tag_ileak + leakage_power->il2_decoder_third_stage_tag_ileak;

/* ******DATA****** */
/*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for ALL the banks */
/* Assumption one array decoder per bank */
leakage_power->il2_decoder_data_ileak = leakage_power->il2_decoder_complete_stage_data_ileak * No_banks_il2_data * il2_ports;

/* ******TAG****** */
/*Leakage for the Complete Data Array Decoder */
 /* NOTE This is for ALL the banks */
/* Assumption one array decoder per bank */
leakage_power->il2_decoder_tag_ileak = leakage_power->il2_decoder_complete_stage_tag_ileak * No_banks_il2_tag * il2_ports ;

/* Calculation of the  Leakage of Comparators */
/* There are A (associativity) Comparators */

/* First the Calculation of the Four Inverters */
/* First Comparator Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_comparator_inverter1_N ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter1_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Second Comparator Inverter */

Ileak_2 =  nmos_ileakage(aspect_ratio_comparator_inverter2_N ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter2_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_2 /=2;

/* Third Comparator Inverter */

Ileak_3 =  nmos_ileakage(aspect_ratio_comparator_inverter3_N ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter3_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_3 /=2;


/* Fourth Comparator Inverter */

Ileak_4 =  nmos_ileakage(aspect_ratio_comparator_inverter4_N ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_comparator_inverter4_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_4 /=2;

/* Leakage for all the four inverters */
Ileak = Ileak_1 + Ileak_2 + Ileak_3 + Ileak_4 ;

/* Leakage for the 4 N and 1 P */

Ileak_5 = 4*nmos_ileakage(1.0 ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) * Kndesign_comparator + pmos_ileakage(1.0,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User) * Kpdesign_comparator;


/* Size of the Tag Array */
tagbits = ADDRESS_BITS+2-(int)logtwo((double)(cache_il2->bsize * cache_il2->assoc * cache_il2->nsets))+(int)logtwo((double)cache_il2->assoc);

/* Leakage after Multiplying by Kdesign and the Number of TAG BITS */

Ileak_5 =  Ileak_5 * tagbits;

/* Leakage for the complete Comparator */
leakage_power->il2_comparator_leak = (Ileak +Ileak_5) * cache_il2->assoc;


/* Leakage Calculation for the Mux Drivers */
/* Three stages as Described in the CACTI Tech report */

/* First Stage*/
/* Invert the matchb signal from the comparator */

/*  Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_muxdrv12_N ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_muxdrv12_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Second Stage */
/* Driving the 8B/b0 NOR gates */
Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User)* (Kndesign_2in_nor_mux_driver + in2_norn_mux_driver_t_slope * (Tkelvin-300) + in2_norn_mux_driver_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User)* (Kpdesign_2in_nor_mux_driver + in2_norp_mux_driver_t_slope * (Tkelvin-300) + in2_norp_mux_driver_vdd_slope * (Vdds - Volt0)) ; 

Ileak_2 = ((8 * cache_il2->bsize)/BITOUT) * ( 2 * Ileakn + 2 * Ileakp);


/* Third Stage */
/* Ouput of Each NOR is inverted to drive the select lines of bo multiplexors */

Ileak_3 =  nmos_ileakage(aspect_ratio_muxdrv3_N ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_muxdrv3_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_3 /=2;

/* There are inverters as many as NOR gates */
Ileak_3 *= ((8 * cache_il2->bsize)/BITOUT);


/* Leakage for the complete MUX DRIVERS */
leakage_power->il2_muxdrv_leak = (Ileak_1 + Ileak_2 + Ileak_3) *  cache_il2->assoc;



/* Leakage for the Ouput Drivers */

/* First Stage*/
/*  Inverter */

Ileak_1 =  nmos_ileakage(aspect_ratio_outdrvsel_N ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_outdrvsel_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_1 /=2;

/* Normalized leakage for One 2-input NAND gate */
/* It has 2 NMOS and 2 PMOS */

Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User)* (Kndesign_2in_nand_outdrv + in2_nandn_outdrv_t_slope * (Tkelvin-300) + in2_nandn_outdrv_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User)* (Kpdesign_2in_nand_outdrv + in2_nandp_outdrv_t_slope * (Tkelvin-300) + in2_nandp_outdrv_vdd_slope * (Vdds - Volt0)) ; 

Ileak_2 = 2 * Ileakn + 2 * Ileakp;


/* Normalized leakage for One 2-input NOR gate */
/* It has 2 NMOS and 2 PMOS */
Ileakn = nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User)* (Kndesign_2in_nor_outdrv + in2_norn_outdrv_t_slope * (Tkelvin-300) + in2_norn_outdrv_vdd_slope * (Vdds - Volt0)) ; 
Ileakp = pmos_ileakage(1.0,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User)* (Kpdesign_2in_nor_outdrv + in2_norp_outdrv_t_slope * (Tkelvin-300) + in2_norp_outdrv_vdd_slope * (Vdds - Volt0)) ; 


Ileak_3 = 2 * Ileakn + 2 * Ileakp; 


/* Final Stage*/
/*  Inverter */

Ileak_4 =  nmos_ileakage(aspect_ratio_outdriver_N ,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + pmos_ileakage(aspect_ratio_outdriver_P,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

/* Normalized leakage for an INVERTER */
Ileak_4 /=2;

/* Leakage for the complete OUTPUT DRIVERS */
leakage_power->il2_outdrv_leak = (8*cache_il2->bsize*cache_il2->assoc) * (Ileak_1 + Ileak_2 + Ileak_3 + Ileak_4);


/* Leakage for the Sense Amps */
/* 9-NMOS and 6-PMOS */
/* DATA */
Ileak_1 = 9 * nmos_ileakage(1.0,Vdds, Vth0N_Cell_L2_ICache,Tkelvin,Tox_User) + 6 * pmos_ileakage(1.0,Vdds, Vth0P_L2_ICache,Tkelvin,Tox_User);

leakage_power->il2_senseamp_data_leak = Ileak_1 *Kndesign_sensamp * 8 *cache_il2->bsize * cache_il2->assoc; 
leakage_power->il2_senseamp_tag_leak = Ileak_1 *Kndesign_sensamp  * cache_il2->assoc * tagbits;


}






/* Gate leakage calculation for 70nm only */

double nmos_gate_leak(double aspect_ratio,double Volt,double Tkelvin,double tox)
{
  double gate_leak;
  double param1,param2,param3;
  
  param1=exp(a_nmos_vdd*(Volt-Volt0));
  param2=b_nmos_t*(Tkelvin-300);
  param3=exp(c_nmos_tox*(1.6e-9-tox)); /* lym fix */ /* fixed by Yingmin, change Tox to 1.6e-9, Aug. 13 */
  gate_leak=(nmos_unit_leakage+param2)*aspect_ratio*param1*param3;
  return gate_leak;

}

double pmos_gate_leak(double aspect_ratio,double Volt,double Tkelvin,double tox)
{
  double gate_leak;
  double param1,param2,param3;
  
  param1=exp(a_pmos_vdd*(Volt-Volt0));
  param2=b_pmos_t*(Tkelvin-300);
  param3=exp(c_pmos_tox*(1.7e-9-tox));
  gate_leak=(pmos_unit_leakage+param2)*aspect_ratio*param1*param3;
  return gate_leak;

}


double cal_il1_cell_gate_leakage(double Vdds, double Tkelvin, leakage_power_type *leakage_power)
{
  double cell_leak;
  int tagbits;

cell_leak=nmos_gate_leak(aspect_ratio_ram_cell_l2_N,Vdds,Tkelvin,Tox_User)+pmos_gate_leak(aspect_ratio_ram_cell_l3_P,Vdds,Tkelvin,Tox_User);
leakage_power->il1_cell_gate_leakage= 1.5*cell_leak* (NBITS_PER_LINE(cache_il1)) * cache_il1->assoc * cache_il1->nsets ; 

tagbits = (ADDRESS_BITS+2-(int)logtwo((double)(cache_il1->bsize * cache_il1->assoc * cache_il1->nsets))+(int)logtwo((double)cache_il1->assoc)) ;
tagbits =  cache_il1->assoc * cache_il1->nsets * tagbits ;
leakage_power->il1_tag_gate_leakage = 1.5 * cell_leak * tagbits ;

}

double cal_dl1_cell_gate_leakage(double Vdds, double Tkelvin, leakage_power_type *leakage_power)
{
  double cell_leak;
    int tagbits;

 cell_leak=nmos_gate_leak(aspect_ratio_ram_cell_l2_N,Vdds,Tkelvin,Tox_User)+pmos_gate_leak(aspect_ratio_ram_cell_l3_P,Vdds,Tkelvin,Tox_User);

  

 leakage_power->dl1_cell_gate_leakage=1.5 * cell_leak* (NBITS_PER_LINE(cache_dl1)) * cache_dl1->assoc * cache_dl1->nsets ;


tagbits = (ADDRESS_BITS+2-(int)logtwo((double)(cache_dl1->bsize * cache_dl1->assoc * cache_dl1->nsets))+(int)logtwo((double)cache_dl1->assoc));
tagbits =  cache_dl1->assoc * cache_dl1->nsets * tagbits ; 
 leakage_power->dl1_tag_gate_leakage = 1.5*cell_leak * tagbits ;

 /*gatedVss*/
 leakage_power->dl1_cell_gatevss_gleak=0.5*nmos_gate_leak(aspect_gate_vss,Vdds,Tkelvin,Tox_User)*(NBITS_PER_LINE(cache_dl1)) * cache_dl1->assoc * cache_dl1->nsets;

 leakage_power->dl1_tag_gatevss_gleak=0.5*nmos_gate_leak(aspect_gate_vss,Vdds,Tkelvin,Tox_User)*tagbits;

 /*drowsy cache*/
cell_leak=nmos_gate_leak(aspect_ratio_ram_cell_l2_N,Vdd_low,Tkelvin,Tox_User)+pmos_gate_leak(aspect_ratio_ram_cell_l3_P,Vdd_low,Tkelvin,Tox_User);
leakage_power->dl1_cell_drowsy_gleak= cell_leak* (NBITS_PER_LINE(cache_dl1)) * cache_dl1->assoc * cache_dl1->nsets ;
leakage_power->dl1_tag_drowsy_gleak = cell_leak * tagbits ;

 /*RBB*/
 leakage_power->dl1_cell_rbb_gleak=leakage_power->dl1_cell_gate_leakage;
 leakage_power->dl1_tag_rbb_gleak=leakage_power->dl1_tag_gate_leakage;

}

double cal_dl2_cell_gate_leakage(double Vdds, double Tkelvin, leakage_power_type *leakage_power)
{
 double cell_leak;
  int tagbits;
 cell_leak=nmos_gate_leak(aspect_ratio_ram_cell_l2_N,Vdds,Tkelvin,Tox_User)+pmos_gate_leak(aspect_ratio_ram_cell_l3_P,Vdds,Tkelvin,Tox_User);
 leakage_power->dl2_cell_gate_leakage= cell_leak* (NBITS_PER_LINE(cache_dl2)) * cache_dl2->assoc * cache_dl2->nsets ;
tagbits = (ADDRESS_BITS+2-(int)logtwo((double)(cache_dl2->bsize * cache_dl2->assoc * cache_dl2->nsets))+(int)logtwo((double)cache_dl2->assoc)) ;
tagbits =  cache_dl2->assoc * cache_dl2->nsets * tagbits ;
 
tagbits = ADDRESS_BITS+2-(int)logtwo((double)(NBITS_PER_LINE(cache_dl2) * cache_dl2->assoc * cache_dl2->nsets))+(int)logtwo((double)cache_dl2->assoc);
 leakage_power->dl2_tag_gate_leakage = cell_leak * tagbits ;

 

} /* Tox ---> Tox_User */

/* lym */
double cache_active_subleakage (struct cache_t *cp)

{

  double active_leakage1 , active_leakage;

if(cp == cache_il1)
  {
  active_leakage=leakage_power.il1_tag + leakage_power.il1_data;
  return active_leakage * Vdd_L1_ICache;
  }
if(cp == cache_dl1)
  {
  active_leakage1=leakage_power.dl1_data + leakage_power.dl1_tag;
  return active_leakage1 * Vdd_L1_DCache;
  }

if(cp == cache_dl2)
  {
  active_leakage=leakage_power.dl2_data + leakage_power.dl2_tag;
  return active_leakage * Vdd_L2_DCache;
  }

}

/* lym */
double cache_active_gateleakage (struct cache_t *cp)

{

  double active_leakage1 , active_leakage;

if(cp == cache_il1)
  {
  return leakage_power.il1_cell_gate_leakage + leakage_power.il1_tag_gate_leakage;
/* lym */
  }
if(cp == cache_dl1)
  {
 return leakage_power.dl1_cell_gate_leakage + leakage_power.dl1_tag_gate_leakage;
/* lym */
  }

if(cp == cache_dl2)
  {
  return leakage_power.dl2_cell_gate_leakage + leakage_power.dl2_tag_gate_leakage;
/* lym */
  }

}

/* lym */
double cache_standby_subleakage (struct cache_t *cp,  enum leak_ctrl_type_t type)
{

 double standby_leakage;
 switch (type)
        {

           case GatedVss:


  /* gate Vss*/
if(cp == cache_il1)
  {
   standby_leakage= leakage_power.il1_cell_gateVss_leakage + leakage_power.il1_tag_gateVss_leakage;

  return standby_leakage;
  }

if(cp == cache_dl1)
  {
  standby_leakage= leakage_power.dl1_cell_gateVss_leakage + leakage_power.dl1_tag_gateVss_leakage;

  return standby_leakage;
  }

if(cp == cache_dl2)
  {
standby_leakage= leakage_power.dl2_cell_gateVss_leakage + leakage_power.dl2_tag_gateVss_leakage;

return standby_leakage;
  }

break;

 case Drowsy:

 /* drowsy cache */
if(cp == cache_il1)
  {
  standby_leakage= leakage_power.il1_cell_drowsy_leakage + leakage_power.il1_tag_drowsy_leakage;

 return standby_leakage;

  }

if(cp == cache_dl1)
  {

 standby_leakage= leakage_power.dl1_cell_drowsy_leakage + leakage_power.dl1_tag_drowsy_leakage;
 return standby_leakage;
  }
if(cp == cache_dl2)
  {

 standby_leakage= leakage_power.dl2_cell_drowsy_leakage + leakage_power.dl2_tag_drowsy_leakage;

 return standby_leakage;
  }
break;

/* RBB */
        case    RBB:
if(cp == cache_il1)
  {
  standby_leakage= leakage_power.il1_cell_rbb_leakage + leakage_power.il1_tag_rbb_leakage;
 return standby_leakage;
  }

if(cp == cache_dl1)
  {

 standby_leakage= leakage_power.dl1_cell_rbb_leakage + leakage_power.dl1_tag_rbb_leakage;
 return standby_leakage;
  }
if(cp == cache_dl2)
  {

 standby_leakage= leakage_power.dl2_cell_rbb_leakage + leakage_power.dl2_tag_rbb_leakage;
 return standby_leakage;
 }
break;

        case None:
         default:
		return 0; /* lym */
break;
        }


}

/* lym */
double cache_standby_gateleakage (struct cache_t *cp,  enum leak_ctrl_type_t type){
 double standby_leakage;
 switch (type)
        {
           case GatedVss:
		if (cp == cache_il1)
			return 0;
/* lym */
		if (cp == cache_dl1){
			standby_leakage = leakage_power.dl1_cell_gatevss_gleak + leakage_power.dl1_tag_gatevss_gleak;
			return standby_leakage;
		}
		if (cp == cache_dl2)
			return 0;
		break;
	   case Drowsy:
		if (cp == cache_il1)
			return 0;
		if (cp == cache_dl1){
                        standby_leakage = leakage_power.dl1_cell_drowsy_gleak + leakage_power.dl1_tag_drowsy_gleak;
                        return standby_leakage;
		}
		if (cp == cache_dl2)
			return 0;
		break;
	   case RBB:
		if (cp == cache_il1)
			return 0;
		if (cp == cache_dl1){
                        standby_leakage = leakage_power.dl1_cell_rbb_gleak + leakage_power.dl1_tag_rbb_gleak;
                        return standby_leakage;
		}
		if (cp == cache_dl2)
			return 0;
		break;
	   case None:
	   default:
			return 0;/* lym */
		break;
	}

}

/*leakage reduce techniques*/

double cache_active_leakage (struct cache_t *cp)
    
{

  double active_leakage1 , active_leakage;

if(cp == cache_il1)
  {
  active_leakage=leakage_power.il1_tag + leakage_power.il1_data;
//  return active_leakage * Vdd_L1_ICache; 
  return leakage_power.il1_cell_gate_leakage + leakage_power.il1_tag_gate_leakage + active_leakage * Vdd_L1_ICache;
/* lym */
  }
if(cp == cache_dl1)
  {
  active_leakage1=leakage_power.dl1_data + leakage_power.dl1_tag;
//  return active_leakage1 * Vdd_L1_DCache; 
 return leakage_power.dl1_cell_gate_leakage + leakage_power.dl1_tag_gate_leakage + active_leakage1 * Vdd_L1_DCache;
/* lym */
  }

if(cp == cache_dl2)
  {
  active_leakage=leakage_power.dl2_data + leakage_power.dl2_tag;
//  return active_leakage * Vdd_L2_DCache; 
  return leakage_power.dl2_cell_gate_leakage + leakage_power.dl2_tag_gate_leakage + active_leakage * Vdd_L2_DCache;
/* lym */
  }

}

/* lym */
double cache_bitline_leakage (struct cache_t *cp)
{

if (cp == cache_dl1)
  {
	return leakage_power.dl1_bitline_gateVss_leakage;
  } 

return 0;
}


double cache_standby_leakage (struct cache_t *cp,  enum leak_ctrl_type_t type)
{

 double standby_leakage;
switch (type)
	{

	   case GatedVss:
	  

  /* gate Vss*/
if(cp == cache_il1)
  {
   standby_leakage= leakage_power.il1_cell_gateVss_leakage + leakage_power.il1_tag_gateVss_leakage;

  return standby_leakage; 
  }        

if(cp == cache_dl1)
  {
  standby_leakage= leakage_power.dl1_cell_gateVss_leakage + leakage_power.dl1_tag_gateVss_leakage;
/* lym */
   standby_leakage += leakage_power.dl1_cell_gatevss_gleak + leakage_power.dl1_tag_gatevss_gleak;

  return standby_leakage; 
  }

if(cp == cache_dl2)
  {
standby_leakage= leakage_power.dl2_cell_gateVss_leakage + leakage_power.dl2_tag_gateVss_leakage;

return standby_leakage; 
  }

break;

 case Drowsy:

 /* drowsy cache */
if(cp == cache_il1)
  {
  standby_leakage= leakage_power.il1_cell_drowsy_leakage + leakage_power.il1_tag_drowsy_leakage;

 return standby_leakage; 
  }     

if(cp == cache_dl1)
  {

 standby_leakage= leakage_power.dl1_cell_drowsy_leakage + leakage_power.dl1_tag_drowsy_leakage;
/* lym */
   standby_leakage += leakage_power.dl1_cell_drowsy_gleak + leakage_power.dl1_tag_drowsy_gleak;

 return standby_leakage; 
  }
if(cp == cache_dl2)
  {

 standby_leakage= leakage_power.dl2_cell_drowsy_leakage + leakage_power.dl2_tag_drowsy_leakage;

 return standby_leakage;  
  }
break;

/* RBB */
	case    RBB:
if(cp == cache_il1)
  {
  standby_leakage= leakage_power.il1_cell_rbb_leakage + leakage_power.il1_tag_rbb_leakage;
 return standby_leakage; 
  }     

if(cp == cache_dl1)
  {

 standby_leakage= leakage_power.dl1_cell_rbb_leakage + leakage_power.dl1_tag_rbb_leakage;
/* lym */
   standby_leakage += leakage_power.dl1_cell_rbb_gleak + leakage_power.dl1_tag_rbb_gleak;

 return standby_leakage; 
  }
if(cp == cache_dl2)
  {

 standby_leakage= leakage_power.dl2_cell_rbb_leakage + leakage_power.dl2_tag_rbb_leakage;
 return standby_leakage;  
 } 
break; 
	case None:
	 default:
		return 0; /* lym */
break;
	}


}



double calculate_leakage_iregarch(double Vdds, double Tkelvin, leakage_power_type *leakage_power)

{
/* ************************************************************************ */

  /* The leakage calculation for an Integer Register File*/
  /* It consists of Data Array, Array Decoders, Column Muxes */
  
  /* FIXME FIXME FIXME */
  /* FIXME Right now the "edge logic" is not modeled*/
  /* FIXME FIXME FIXME */
  
  /* The Data array  part has been divided into two parts */
  /* First is the Leakage through the N-MOS Access Transistor called the */
  /* Bit-Line leakage (NOTE: This has been divided into two parts itself The write*/ 
  /* bit-line leakage and the read bitline leakage */
  /* Second is the leakage thorugh the Cell.(N-Mos and P-MOS   */

/* ************************************************************************ */
  
/* Temporary Vars */ 
double Ileak;
double Ileak_1;
double Ileak_2;
double Ileak_3;
double Ileak_4;
double Ileak_5;
double Ileak_data,Ileak_tag;
int tagbits;

/* Leakage Calculation for the write Bitline of one REG CELL */
leakage_power->ireg_write_bitline_data_ileak = nmos_ileakage(aspect_ratio_access_ireg_cell_N,Vdds, Vth0N_Access_I_Reg,Tkelvin,Tox_User);  

/* Assumption ireg_write_ports ports */
/* Assumption per port , one needs  bitlines */
leakage_power->ireg_write_bitline_data_ileak *= ireg_write_ports;

/* Leakage Calculation for the read Bitline of one REG CELL */
/* Two NMOS( From the structure given in LBB paper)*/
leakage_power->ireg_read_bitline_data_ileak = 2*nmos_ileakage(1.0,Vdds, Vth0N_Access_I_Reg,Tkelvin,Tox_User);  

leakage_power->ireg_read_bitline_data_ileak *= Kndesign_ireg_readbitline;

/* Assumption ireg_read_ports ports */
/* Assumption per port , one needs  bitlines */
leakage_power->ireg_read_bitline_data_ileak *= ireg_read_ports;


/* Leakage Calculation for  the Cell of one 6T RAM CELL */
leakage_power->ireg_cell_data_ileak = pmos_ileakage(aspect_ratio_ireg_cell_l3_P,Vdds, Vth0P_Cell_I_Reg,Tkelvin,Tox_User) +  nmos_ileakage(aspect_ratio_ireg_cell_l2_N,Vdds, Vth0N_Cell_I_Reg,Tkelvin,Tox_User);


/* Leakage Calculation for  the Complete Data Array */
leakage_power->i_reg = (leakage_power->ireg_cell_data_ileak + leakage_power->ireg_write_bitline_data_ileak + leakage_power->ireg_read_bitline_data_ileak) * MD_NUM_IREGS *data_width  ; 





/* Total Leakage for Ireg File */

leakage_power->ireg_leakage = leakage_power->i_reg;


/* Total Leakage for Instruction Level One Cache */

leakage_power->il1_leakage = (leakage_power->il1_tag + leakage_power->il1_data + leakage_power->il1_decoder_data_ileak + leakage_power->il1_decoder_tag_ileak + leakage_power->il1_comparator_leak + leakage_power->il1_muxdrv_leak +  leakage_power->il1_outdrv_leak + leakage_power->il1_senseamp_data_leak +  leakage_power->il1_senseamp_tag_leak);

/* Total Leakage for Data Level One Cache */
leakage_power->dl1_leakage = (leakage_power->dl1_data + leakage_power->dl1_tag + leakage_power->dl1_decoder_data_ileak + leakage_power->dl1_decoder_tag_ileak + leakage_power->dl1_comparator_leak + leakage_power->dl1_muxdrv_leak +  leakage_power->dl1_outdrv_leak + leakage_power->dl1_senseamp_data_leak +  leakage_power->dl1_senseamp_tag_leak);

/* Total Leakage for Data Level Two Cache */
leakage_power->dl2_leakage = (leakage_power->dl2_data + leakage_power->dl2_tag + leakage_power->dl2_decoder_data_ileak + leakage_power->dl2_decoder_tag_ileak + leakage_power->dl2_comparator_leak + leakage_power->dl2_muxdrv_leak +  leakage_power->dl2_outdrv_leak + leakage_power->dl2_senseamp_data_leak +  leakage_power->dl2_senseamp_tag_leak);




dump_leakage_stats(leakage_power);


}

void dump_leakage_stats(leakage_power_type *leakage_power)
{
  double total_power;
  double icache_power;
  double dcache_power;
  double dcache2_power;
  double icache_gate_leakage;
  double dcache_gate_leakage;
  double dcache2_gate_leakage;
  
 icache_power = leakage_power->il1_tag + leakage_power->il1_data + leakage_power->il1_decoder_data_ileak + leakage_power->il1_decoder_tag_ileak + leakage_power->il1_comparator_leak + leakage_power->il1_muxdrv_leak +  leakage_power->il1_outdrv_leak + leakage_power->il1_senseamp_data_leak +  leakage_power->il1_senseamp_tag_leak  ;

 dcache_power = leakage_power->dl1_data + leakage_power->dl1_tag + leakage_power->dl1_decoder_data_ileak + leakage_power->dl1_decoder_tag_ileak + leakage_power->dl1_comparator_leak + leakage_power->dl1_muxdrv_leak +  leakage_power->dl1_outdrv_leak + leakage_power->dl1_senseamp_data_leak +  leakage_power->dl1_senseamp_tag_leak;

  dcache2_power = leakage_power->dl2_data + leakage_power->dl2_tag + leakage_power->dl2_decoder_data_ileak + leakage_power->dl2_decoder_tag_ileak + leakage_power->dl2_comparator_leak + leakage_power->dl2_muxdrv_leak +  leakage_power->dl2_outdrv_leak + leakage_power->dl2_senseamp_data_leak +  leakage_power->dl2_senseamp_tag_leak;


    
   fprintf(stderr,"Ireg File Leakage Power\n");
  fprintf(stderr,"Ireg File  Leakage Power Consumption: %g \n",leakage_power->ireg_leakage);
  fprintf(stderr," datarray_power write Bitline (W): %g\n",leakage_power->ireg_write_bitline_data_ileak);
  fprintf(stderr," datarray_power read Bitline (W): %g\n",leakage_power->ireg_read_bitline_data_ileak);
  fprintf(stderr," datarray_power Cell (W): %g\n",leakage_power->ireg_cell_data_ileak);
  

   fprintf(stderr,"Instruction Cache Power Leakage Power Consumption: %g \n",leakage_power->il1_leakage);
   
  fprintf(stderr,"Instruction Cache Leakage Power\n");
  fprintf(stderr," decode_power_data (W): %g\n",leakage_power->il1_decoder_data_ileak);
  fprintf(stderr," decode_power_tag (W): %g\n",leakage_power->il1_decoder_tag_ileak);
 fprintf(stderr," senseamp_power_data (W): %g\n",leakage_power->il1_senseamp_data_leak);
 fprintf(stderr," senseamp_power_tag (W): %g\n",leakage_power->il1_senseamp_tag_leak);
 fprintf(stderr," comparator_power_leak (W): %g\n",leakage_power->il1_comparator_leak);
 fprintf(stderr," mux_driver_power_leak (W): %g\n",leakage_power->il1_muxdrv_leak);
 fprintf(stderr," output_driver_power_leak (W): %g\n",leakage_power->il1_outdrv_leak);
  fprintf(stderr," tagarray_power (W): %g\n",leakage_power->il1_tag);
  fprintf(stderr," datarray_power (W): %g\n",leakage_power->il1_data);
  fprintf(stderr," datarray_power Bitline (W): %g\n",leakage_power->il1_bitline_data_ileak);
 fprintf(stderr," datarray_power Cell (W): %g\n",leakage_power->il1_cell_data_ileak);


  fprintf(stderr,"Data Cache Power Consumption: %g  \n",leakage_power->dl1_leakage);
  fprintf(stderr,"Data Cache Leakage Power\n");
 fprintf(stderr," decode_power_data (W): %g\n",leakage_power->dl1_decoder_data_ileak);
  fprintf(stderr," decode_power_tag (W): %g\n",leakage_power->dl1_decoder_tag_ileak);
 fprintf(stderr," senseamp_power_data (W): %g\n",leakage_power->dl1_senseamp_data_leak);
 fprintf(stderr," senseamp_power_tag (W): %g\n",leakage_power->dl1_senseamp_tag_leak);
 fprintf(stderr," comparator_power_leak (W): %g\n",leakage_power->dl1_comparator_leak);
 fprintf(stderr," mux_driver_power_leak (W): %g\n",leakage_power->dl1_muxdrv_leak);
 fprintf(stderr," output_driver_power_leak (W): %g\n",leakage_power->dl1_outdrv_leak);
  fprintf(stderr," tagarray_power (W): %g\n",leakage_power->dl1_tag);
  fprintf(stderr," datarray_power (W): %g\n",leakage_power->dl1_data);


 fprintf(stderr,"Data Cache 2 Power Consumption: %g  \n",leakage_power->dl2_leakage);
 fprintf(stderr,"Data Cache Level 2 Leakage Power\n");
 fprintf(stderr," decode_power_data (W): %g\n",leakage_power->dl2_decoder_data_ileak);
 fprintf(stderr," senseamp_power_data (W): %g\n",leakage_power->dl2_senseamp_data_leak);
 fprintf(stderr," senseamp_power_tag (W): %g\n",leakage_power->dl2_senseamp_tag_leak);
  fprintf(stderr," decode_power_tag (W): %g\n",leakage_power->dl2_decoder_tag_ileak);
 fprintf(stderr," comparator_power_leak (W): %g\n",leakage_power->dl2_comparator_leak);
 fprintf(stderr," mux_driver_power_leak (W): %g\n",leakage_power->dl2_muxdrv_leak);
 fprintf(stderr," output_driver_power_leak (W): %g\n",leakage_power->dl2_outdrv_leak);
  fprintf(stderr," tagarray_power (W): %g\n",leakage_power->dl2_tag);
  fprintf(stderr," datarray_power (W): %g\n",leakage_power->dl2_data);

   #if defined(TECH_070)
  icache_gate_leakage=leakage_power->il1_cell_gate_leakage+leakage_power->il1_tag_gate_leakage;
 
  dcache_gate_leakage=leakage_power->dl1_cell_gate_leakage+leakage_power->dl1_tag_gate_leakage;
  dcache2_gate_leakage=leakage_power->dl2_cell_gate_leakage+leakage_power->dl2_tag_gate_leakage;
  fprintf(stderr," Gate leakage for I1 cache: %g\n",icache_gate_leakage);

  fprintf(stderr," cell leakage for D1 cache: %g\n", dcache_gate_leakage);

  fprintf(stderr," Gate leakage for D2 cache: %g\n",dcache2_gate_leakage);
 #endif 

  fprintf(stderr," icache cell gatevss leakage: %g\n",leakage_power->il1_cell_gateVss_leakage);
  fprintf(stderr," icache tag gatevss leakage: %g\n",leakage_power->il1_tag_gateVss_leakage);
    fprintf(stderr," dcache cell gatevss leakage: %g\n",leakage_power->dl1_cell_gateVss_leakage);
  fprintf(stderr," dcache tag gatevss leakage: %g\n",leakage_power->dl1_tag_gateVss_leakage);
  fprintf(stderr," dcache2 cell gatevss leakage: %g\n",leakage_power->dl2_cell_gateVss_leakage);
  fprintf(stderr," dcache2 tag gatevss leakage: %g\n",leakage_power->dl2_tag_gateVss_leakage);
  fprintf(stderr," icache cell drowsy leakage: %g\n",leakage_power->il1_cell_drowsy_leakage);
  fprintf(stderr," icache tag drowsy leakage: %g\n",leakage_power->il1_tag_drowsy_leakage);
  fprintf(stderr," dcache cell drowsy leakage: %g\n",leakage_power->dl1_cell_drowsy_leakage);
  fprintf(stderr," dcache tag drowsy leakage: %g\n",leakage_power->dl1_tag_drowsy_leakage);
  fprintf(stderr," dcache2 cell drowsy leakage: %g\n",leakage_power->dl2_cell_drowsy_leakage);
  fprintf(stderr," dcache2 tag drowsy leakage: %g\n",leakage_power->dl2_tag_drowsy_leakage);
 fprintf(stderr," icache cell rbb leakage: %g\n",leakage_power->il1_cell_rbb_leakage);
  fprintf(stderr," icache tag rbb leakage: %g\n",leakage_power->il1_tag_rbb_leakage);
  fprintf(stderr," dcache cell rbb leakage: %g\n",leakage_power->dl1_cell_rbb_leakage);
  fprintf(stderr," dcache tag rbb leakage: %g\n",leakage_power->dl1_tag_rbb_leakage);
  fprintf(stderr," dcache2 cell rbb leakage: %g\n",leakage_power->dl2_cell_rbb_leakage);
  fprintf(stderr," dcache2 tag rbb leakage: %g\n",leakage_power->dl2_tag_rbb_leakage);
 fprintf(stderr," dcache1 dualvt cell leakage: %g\n",leakage_power->dl1_cell_dual_leakage);
  fprintf(stderr," dcache1 dualvt bitline leakage: %g\n",leakage_power->dl1_bit_dual_leakage);
 fprintf(stderr," dcache gatedvss cell gate leakage: %g\n",leakage_power->dl1_cell_gatevss_gleak);
 fprintf(stderr," dcache gatedvss tag gate leakage: %g\n",leakage_power->dl1_tag_gatevss_gleak);
 fprintf(stderr," dcache drowsy cell gate leakage: %g\n",leakage_power->dl1_cell_drowsy_gleak);
 fprintf(stderr," dcache drowsy tag gate leakage: %g\n",leakage_power->dl1_tag_drowsy_gleak);
 fprintf(stderr," dcache rbb cell gate leakage: %g\n",leakage_power->dl1_cell_rbb_gleak);
 fprintf(stderr," dcache rbb tag gate leakage: %g\n",leakage_power->dl1_tag_rbb_gleak);


}


