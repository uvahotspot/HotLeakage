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
*************************************************************** */

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
#include "power.h"
#include "options.h"
#include "misc.h"



extern double  GEN_POWER_FACTOR ;
extern double CSCALE;	/* wire capacitance scaling factor */
extern double RSCALE	;/* wire resistance scaling factor */
extern double LSCALE		;	/* length (feature) scaling factor */
extern double ASCALE  ;	/* area scaling factor */
extern double VSCALE		;	/* voltage scaling factor */
extern double VTSCALE	;		/* threshold voltage scaling factor */
extern double SSCALE	;	/* sense voltage scaling factor */
extern double TECH_LENGTH    ;         /* TECH LENGTH */
extern double Mhz  ;
extern double GEN_POWER_SCALE ;


/*
  * CMOS 0.8um model parameters
  *   - from Appendix II of Cacti tech report
  */


/* corresponds to 8um of m3 @ 225ff/um */
extern double Cwordmetal                                 ; 

/*extern double Corresponds to 16um of m2 @ 275ff/um */
extern double Cbitmetal    ; 

/* corresponds to 1um of m2 @ 275ff/um */
extern double Cmetal   ;

extern double CM3metal  ;
extern double CM2metal  ;

/*  Cmetal 1.222e-15 */

/* fF/um2 at 1.5V */
extern double Cndiffarea ;		/* FIXME: ??? */

/* fF/um2 at 1.5V */
extern double Cpdiffarea ;		/* FIXME: ??? */

/* fF/um at 1.5V */
extern double Cndiffside ;		/* in general this does not scale */

/* fF/um at 1.5V */
extern double Cpdiffside ;		/* in general this does not scale */

/* fF/um at 1.5V */
extern double Cndiffovlp   ;		/* FIXME: by depth??? */

/* fF/um at 1.5V */
extern double Cpdiffovlp   ;		/* FIXME: by depth??? */

/* fF/um assuming 25% Miller effect */
extern double Cnoxideovlp ;		/* FIXME: by depth??? */

/* fF/um assuming 25% Miller effect */
extern double Cpoxideovlp ;		/* FIXME: by depth??? */

/* um */
extern double Leff         ; 

/* fF/um2 */
extern double Cgate        ;		/* FIXME: ??? */

/* fF/um2 */
extern double Cgatepass    ;		/* FIXME: ??? */

/* note that the value ofextern double Cgatepass will be different depending on 
   whether or not the source and drain are at different potentials or
   the same potential.  The two values were averaged */

/* fF/um */
extern double Cpolywire	 ; 

/* ohms*um of channel width */
extern double Rnchannelstatic   ; 

/* ohms*um of channel width */
extern double Rpchannelstatic ; 

extern double Rnchannelon ; 

extern double Rpchannelon; 

/* corresponds to 16um of m2 @ 48mO/sq */
extern double Rbitmetal ; 

/* corresponds to  8um of m3 @ 24mO/sq */
extern double Rwordmetal; 

extern double Vdd   ; 

/* other stuff (from tech report, appendix 1) */


extern double Period   ; 

extern double krise ; 
extern double tsensedata	 ; 
extern double tsensetag  ; 
extern double tfalldata; 
extern double tfalltag; 
extern double Vbitpre  ; 
extern double Vt	 ; 
extern double Vbitsense  ; 

extern double AF   ;
extern double POPCOUNT_AF ; 

/* Threshold voltages (as a proportion of Vdd)
   If you don't know them, set all values to 0.5 */

extern double VSINV          ;  
extern double VTHINV100x60  ;   /* inverter with p00,n0 */
extern double VTHNAND60x90   ;  /* nand with p=60 and three n=90 */
extern double VTHNOR12x4x1    ;  /* nor with p=12, n=4, 1 input */
extern double VTHNOR12x4x2    ; /* nor with p=12, n=4, 2 inputs */
extern double VTHNOR12x4x3    ; /* nor with p=12, n=4, 3 inputs */
extern double VTHNOR12x4x4    ; /* nor with p=12, n=4, 4 inputs */
extern double VTHOUTDRINV    ;
extern double VTHOUTDRNOR   ;
extern double VTHOUTDRNAND  ;
extern double VTHOUTDRIVE   ;
extern double VTHCOMPINV    ;
extern double VTHMUXDRV1    ;
extern double VTHMUXDRV2    ;
extern double VTHMUXDRV3    ;
extern double VTHEVALINV    ;
extern double VTHSENSEEXTDRV   ;

/* transistor widths in um (as described in tech report, appendix 1) */
extern double Wdecdrivep 	 ; 
extern double Wdecdriven 	 ; 
extern double Wdec3to8n 	 ; 
extern double Wdec3to8p 	 ; 
extern double WdecNORn 	 ; 
extern double WdecNORp 	 ; 
extern double Wdecinvn 	 ; 
extern double Wdecinvp	 ; 

extern double Wworddrivemax 	 ; 
extern double Wmemcella 	 ; 
extern double Wmemcellr 	 ; 
extern double Wmemcellw 	 ; 
extern double Wmemcellbscale 	;		/* means 2x bigger than Wmemcella */
extern double Wbitpreequ 	 ; 

extern double Wbitmuxn 	 ; 
extern double WsenseQ1to4 	 ; 
extern double Wcompinvp1  	 ; 
extern double Wcompinvn1  	 ; 
extern double Wcompinvp2  	 ; 
extern double Wcompinvn2  	 ; 
extern double Wcompinvp3  	 ; 
extern double Wcompinvn3  	 ; 
extern double Wevalinvp  	 ; 
extern double Wevalinvn  	 ; 

extern double Wcompn	  	 ; 
extern double Wcompp	  	 ; 
extern double Wcomppreequ    ; 
extern double Wmuxdrv12n  	 ; 
extern double Wmuxdrv12p  	 ; 
extern double WmuxdrvNANDn   ; 
extern double WmuxdrvNANDp   ; 
extern double WmuxdrvNORn  	 ; 
extern double WmuxdrvNORp 	 ; 
extern double Wmuxdrv3n    ; 
extern double Wmuxdrv3p    ; 
extern double Woutdrvseln    ; 
extern double Woutdrvselp    ; 
extern double Woutdrvnandn    ; 
extern double Woutdrvnandp    ; 
extern double Woutdrvnorn    ; 
extern double Woutdrvnorp    ; 
extern double Woutdrivern    ; 
extern double Woutdriverp     ; 

extern double Wcompcellpd2    ; 
extern double Wcompdrivern    ; 
extern double Wcompdriverp    ; 
extern double Wcomparen2      ; 
extern double Wcomparen1      ; 
extern double Wmatchpchg      ; 
extern double Wmatchinvn      ; 
extern double Wmatchinvp      ; 
extern double Wmatchnandn     ; 
extern double Wmatchnandp     ; 
extern double Wmatchnorn     ; 
extern double Wmatchnorp     ; 

extern double WSelORn         ; 
extern double WSelORprequ     ; 
extern double WSelPn          ; 
extern double WSelPp          ; 
extern double WSelEnn         ; 
extern double WSelEnp         ; 

extern double Wsenseextdrv1p    ; 
extern double Wsenseextdrv1n    ; 
extern double Wsenseextdrv2p    ; 
extern double Wsenseextdrv2n    ; 


/* bit width of RAM cell in um */
extern double BitWidth     ; 

/* bit height of RAM cell in um */
extern double BitHeight     ; 

extern double Cout	     ; 

/* Sizing of cells and spacings */
extern double RatCellHeight    ; 
extern double RatCellWidth     ; 
extern double RatShiftRegWidth  ; 
extern double RatNumShift      ;
extern double BitlineSpacing   ; 
extern double WordlineSpacing   ; 

extern double RegCellHeight    ; 
extern double RegCellWidth     ; 

extern double CamCellHeight    ; 
extern double CamCellWidth     ; 
extern double MatchlineSpacing  ; 
extern double TaglineSpacing   ; 

/* ALU POWER NUMBERS for .18um 733Mhz */
/* normalize to cap from W */
extern double  NORMALIZE_SCALE    ; 
/* normalize .18um cap to other gen's cap, then xPowerfactor */
extern double   POWER_SCALE   ; 
extern double  I_ADD         ; 
extern double  I_ADD32      ; 
extern double  I_MULT16      ; 
extern double  I_SHIFT      ; 
extern double  I_LOGIC     ; 
extern double  F_ADD     ; 
extern double  F_MULT    ; 

extern double  I_ADD_CLOCK   ; 
extern double  I_MULT_CLOCK   ; 
extern double  I_SHIFT_CLOCK ; 
extern double  I_LOGIC_CLOCK   ; 
extern double  F_ADD_CLOCK    ; 
extern double  F_MULT_CLOCK   ; 



/* HotLeakage */    
/*
 *  options for Leakage
 */

double tech_length0;
double M0n ;       /* Zero Bias Mobility for N-Type */
double  M0p  ;      /* Zero Bias Mobility for P-Type */
double  Tox ;
double  Cox ;       /* Gate Oxide Capacitance per unit area */
double  Vnoff0  ;      /* Empirically Determined Model Parameter for N-Type */
                          /* FIX ME */
double  Vpoff0  ;    /* Empirically Determined Model Parameter for P-Type */
double  Nfix ;     /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
double  Pfix ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
double  Vthn  ;     /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
double  Vthp  ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
double  Vnthx  ;   /* In the Equation Vth = Vth0 +Vnthx*(T-300) */ 
double  Vpthx ;  /* In the Equation Vth = Vth0 +Vpthx*(T-300) */ 
double  Vdd_init ;    /* Default Vdd. Can be Changed in leakage.c */ 
double  Volt0  ;
double  Na  ;    /* Empirical param for the Vdd fit */
double  Nb ;    /* Empirical param for the Vdd fit */
double  Pa  ;    /* Empirical param for the Vdd fit */
double  Pb  ;   /* Empirical param for the Vdd fit */
double  NEta  ;           /* Sub-threshold Swing Co-efficient N-Type */
double  PEta   ;          /* Sub-threshold Swing Co-efficient P-Type */ 

double Kdesign_3in_nand ;

double  Kdesign_2in_nand_outdrv ;

double  Kdesign_2in_nor_outdrv ;
double  Kdesign_2in_nor_mux_driver ;

double  Kdesign_comparator ;

double  Kdesign_sensamp ;

double  Kdesign_ireg_readbitline  ;


double  Kdesigp_ireg_readbitline  ;


double Kndesign_3in_nand  ;
double in3_nandn_t_slope  ;
double in3_nandn_vdd_slope  ;

double Kpdesign_3in_nand ;
double in3_nandp_t_slope ;
double in3_nandp_vdd_slope ;

double Kndesign_2in_nand_outdrv ;
double in2_nandn_outdrv_t_slope ;
double in2_nandn_outdrv_vdd_slope ;

double Kpdesign_2in_nand_outdrv  ;
double in2_nandp_outdrv_t_slope ;
double in2_nandp_outdrv_vdd_slope ;

/* NOR gate of decoder*/

double Kndesign_4in_nor_decoder ;
double in4_norn_decoder_t_slope ;
double in4_norn_decoder_vdd_slope;

double Kpdesign_4in_nor_decoder ;
double in4_norp_decoder_t_slope;
double in4_norp_decoder_vdd_slope ;

double Kndesign_3in_nor_decoder ;
double in3_norn_decoder_t_slope ;
double in3_norn_decoder_vdd_slope ;

double Kpdesign_3in_nor_decoder ;
double in3_norp_decoder_t_slope ;
double in3_norp_decoder_vdd_slope ;

double Kndesign_2in_nor_decoder ;
double in2_norn_decoder_t_slope;
double in2_norn_decoder_vdd_slope ;

double Kpdesign_2in_nor_decoder ;
double in2_norp_decoder_t_slope ;
double in2_norp_decoder_vdd_slope ;



double Kndesign_2in_nor_mux_driver ;
double in2_norn_mux_driver_t_slope ;
double in2_norn_mux_driver_vdd_slope ;


double Kpdesign_2in_nor_mux_driver ;
double in2_norp_mux_driver_t_slope ;
double in2_norp_mux_driver_vdd_slope ;


double Kndesign_2in_nor_outdrv  ;
double in2_norn_outdrv_t_slope ;
double in2_norn_outdrv_vdd_slope;

double Kpdesign_2in_nor_outdrv  ;
double in2_norp_outdrv_t_slope ;
double in2_norp_outdrv_vdd_slope ;


double Kndesign_comparator          ;
double Kpdesign_comparator          ;

double Kndesign_sensamp            ;
double Kpdesign_sensamp            ;

double Kndesign_ireg_readbitline   ;
double Kpdesigp_ireg_readbitline   ;

/* gate Vss */
double Vth0_gate_vss ;
double aspect_gate_vss;
/*drowsy cache*/
double Vdd_low ;

/*RBB*/
double k1_body_n ;
double k1_body_p ;
double vfi ;

double VSB_NMOS ;
double VSB_PMOS ;
/* dual VT*/
double Vt_cell_nmos_high ;
double Vt_cell_pmos_high ;
double Vt_bit_nmos_low ;
double Vt_bit_pmos_low ;

/* Gate lekage for 70nm */
double  nmos_unit_leakage ;
double a_nmos_vdd ;
double b_nmos_t;
double c_nmos_tox;

double pmos_unit_leakage;
double a_pmos_vdd ;
double b_pmos_t ;
double c_pmos_tox ;

double L_nmos_d  ;     /* Adjusting Factor for Length */
double Tox_nmos_e  ;   /* Adjusting Factor for Tox */
double L_pmos_d ;    /* Adjusting Factor for Length */
double Tox_pmos_e ;  /* Adjusting Factor for Tox */



/* level 1 instruction cache, entry level instruction cache */
extern struct cache_t *cache_il1;

/* level 2 instruction cache */
extern struct cache_t *cache_il2;

/* level 1 data cache, entry level data cache */
extern struct cache_t *cache_dl1;

/* level 2 data cache */
extern struct cache_t *cache_dl2;

extern leakage_power_type leakage_power;

/* instruction issue B/W (insts/cycle) */
extern int ruu_issue_width;

/* Technology Length */
extern char *TECH_FACTOR;

/* Tox Given */
double Tox_User;

/* Tox variation */
double Tox_Std;

/* Vdd Variation */
double Vdd_Std;

/* Tech Length Variation */
double Tech_Std;

/* Threshold Voltage Nmos  Variation */
double Vthn_Std;

/* Threshold Voltage Pmos  Variation */
double Vthp_Std;

/* Number of Samples to be Generated for the Box-Mueller Method */

int No_of_Samples;


/* Aspect Ratio Ireg Access Cell N */
 double aspect_ratio_access_ireg_cell_N;

/* Aspect Ratio Ireg Cell N */
double aspect_ratio_ireg_cell_l2_N;

/* Aspect Ratio Ireg Cell P */
 double aspect_ratio_ireg_cell_l3_P;

/* Aspect Ratio Ram Access Cell N */
 double aspect_ratio_access_ram_cell_N;

/* Aspect Ratio Ram Cell N */
double aspect_ratio_ram_cell_l2_N;

/* Aspect Ratio Ram Cell P */
 double aspect_ratio_ram_cell_l3_P;

/* Aspect Ratio Decoder Inverter P */
double aspect_ratio_decoder_inverter_P;

/* Aspect Ratio Decoder Inverter N */
double aspect_ratio_decoder_inverter_N;

/* Aspect Ratio of Comparator Inverter4 N */
double aspect_ratio_comparator_inverter4_N;

/* Aspect Ratio of Comparator Inverter4 P */
double aspect_ratio_comparator_inverter4_P;

/* Aspect Ratio of Comparator Inverter3 N */
double aspect_ratio_comparator_inverter3_N;

/* Aspect Ratio of Comparator Inverter3 P */
double aspect_ratio_comparator_inverter3_P;

/* Aspect Ratio of Comparator Inverter2 N */
double aspect_ratio_comparator_inverter2_N;

/* Aspect Ratio of Comparator Inverter2 P */
double aspect_ratio_comparator_inverter2_P;

/* Aspect Ratio of Comparator Inverter1 N */
double aspect_ratio_comparator_inverter1_N;

/* Aspect Ratio of Comparator Inverter4 P */
double aspect_ratio_comparator_inverter1_P;

/* Aspect Ratio of Comparator Inverter P */
double aspect_ratio_comparator_P;

/* Aspect Ratio of Comparator Inverter N */
double aspect_ratio_comparator_N;

/* Aspect Ratio of MUX DRIVER STAGE 1 N */
double aspect_ratio_muxdrv12_N;

/* Aspect Ratio of MUX DRIVER STAGE 1 P */
double aspect_ratio_muxdrv12_P;

/* Aspect Ratio of MUX DRIVER STAGE 2 N */
double aspect_ratio_muxdrvNOR_N;

/* Aspect Ratio of MUX DRIVER STAGE 1 P */
double aspect_ratio_muxdrvNOR_P;

/* Aspect Ratio of MUX DRIVER STAGE 3 N */
double aspect_ratio_muxdrv3_N;

/* Aspect Ratio of MUX DRIVER STAGE 3 P */
double aspect_ratio_muxdrv3_P;

/* Aspect Ratio of OUTPUT DRIVER STAGE 1 N */
double aspect_ratio_outdrvsel_N;

/* Aspect Ratio of OUTPUT DRIVER STAGE 1 P */
double aspect_ratio_outdrvsel_P;

/* Aspect Ratio of OUTPUT DRIVER NOR N */
double aspect_ratio_outdrvnor_N;

/* Aspect Ratio of OUTPUT DRIVER NOR P */
double aspect_ratio_outdrvnor_P;

/* Aspect Ratio of OUTPUT DRIVER NAND N */
double aspect_ratio_outdrvnand_N;

/* Aspect Ratio of OUTPUT DRIVER NAND P */
double aspect_ratio_outdrvnand_P;

/* Aspect Ratio of OUTPUT DRIVER FINAL STAGE N */
double aspect_ratio_outdriver_N;

/* Aspect Ratio of OUTPUT DRIVER FINAL STAGE P */
double aspect_ratio_outdriver_P;


/* Ports for L1-ICache (both read and write) */
double il1_ports;

/* Ports for L2-ICache (both read and write) */
double il2_ports;

/* Ports for L1-DCache (both read and write) */
double dl1_ports;

/* Ports for L2-DCache (both read and write) */
double dl2_ports;

/* Ports for read Ireg */
double ireg_read_ports;

/* Ports for write Ireg */
double ireg_write_ports;

/* Supply Voltage for L1-ICaches */
double Vdd_I_Reg;

/* Zero Bias Threshold Voltage for Ireg Cell  N-Mos */
double Vth0N_Cell_I_Reg;

/* Zero Bias Threshold Voltage for Ireg Cell  P-Mos */
double Vth0P_Cell_I_Reg;

/* Zero Bias Threshold Voltage for Ireg Access N-Mos */
double Vth0N_Access_I_Reg;

/* Temperature in Absolute Kelvin for Ireg */
double Tkelvin_I_Reg;


/* Supply Voltage for L1-ICaches */
double Vdd_L1_ICache;

/* Supply Voltage for L1-DCaches */
double Vdd_L1_DCache;

/* Zero Bias Threshold Voltage for L1-ICaches Cell  N-Mos */
double Vth0N_Cell_L1_ICache;

/* Zero Bias Threshold Voltage for L1-ICaches Cell  P-Mos */
double Vth0P_Cell_L1_ICache;

/* Zero Bias Threshold Voltage for L1-ICaches Access N-Mos */
double Vth0N_Access_L1_ICache;

/* Zero Bias Threshold Voltage for L1-DCaches P-Mos */
double Vth0P_L1_DCache;

/* Zero Bias Threshold Voltage for L1-ICaches P-Mos */
double Vth0P_L1_ICache;

/* Zero Bias Threshold Voltage for L1-DCaches Cell N-Mos */
double Vth0N_Cell_L1_DCache;

/* Zero Bias Threshold Voltage for L1-DCaches Cell P-Mos */
double Vth0P_Cell_L1_DCache;

/* Zero Bias Threshold Voltage for L1-DCaches Access N-Mos */
double Vth0N_Access_L1_DCache;

/* Supply Voltage for L2-ICaches */
double Vdd_L2_ICache;

/* Supply Voltage for L2-DCaches */
double Vdd_L2_DCache;

/* Zero Bias Threshold Voltage for L2-ICaches Access N-Mos */
double Vth0N_Access_L2_ICache;

/* Zero Bias Threshold Voltage for L2-ICaches Cell  N-Mos */
double Vth0N_Cell_L2_ICache;

/* Zero Bias Threshold Voltage for L2-ICaches Cell  P-Mos */
double Vth0P_Cell_L2_ICache;

/* Zero Bias Threshold Voltage for L2-DCaches P-Mos */
double Vth0P_L2_DCache;

/* Zero Bias Threshold Voltage for L2-ICaches P-Mos */
double Vth0P_L2_ICache;

/* Zero Bias Threshold Voltage for L2-DCaches Cell N-Mos */
double Vth0N_Cell_L2_DCache;

/* Zero Bias Threshold Voltage for L2-DCaches Cell P-Mos */
double Vth0P_Cell_L2_DCache;

/* Zero Bias Threshold Voltage for L2-DCaches Access N-Mos */
double Vth0N_Access_L2_DCache;

/* Temperature in Absolute Kelvin for L1-ICaches */
double Tkelvin_L1_ICache;

/* Temperature in Absolute Kelvin for L1-DCaches */
double Tkelvin_L1_DCache;

/* Temperature in Absolute Kelvin for L2-ICaches */
double Tkelvin_L2_ICache;

/* Temperature in Absolute Kelvin for L2-DCaches */
double Tkelvin_L2_DCache;

void  sim_reg_leak_options(struct opt_odb_t *odb)
{
/* HotLeakage */    
/* HotLeakage  options */

 opt_reg_double(odb, "-ireg:read_ports",
	      "ireg file read  ports",
	      &ireg_read_ports, /* default */(2*ruu_issue_width),
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-ireg:write_ports",
	      "ireg file write  ports",
	      &ireg_write_ports, /* default */(ruu_issue_width),
	      /* print */TRUE, /* format */NULL);


 opt_reg_double(odb, "-ireg:temp",
	      "ireg file temperature in Kelvin ",
	      &Tkelvin_I_Reg, /* default */300.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:ports",
	      "l1 instruction cache  ports",
	      &il1_ports, /* default */2.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:ports",
	      "l2 instruction cache  ports",
	      &il2_ports, /* default */2.0,
	      /* print */TRUE, /* format */NULL);
 
 opt_reg_double(odb, "-dl1:ports",
	      "l1 data cache  ports",
	      &dl1_ports, /* default */2.0,
	      /* print */TRUE, /* format */NULL);
 
 opt_reg_double(odb, "-dl2:ports",
	      "l2 data cache  ports",
	      &dl2_ports, /* default */2.0,
	      /* print */TRUE, /* format */NULL);

   opt_reg_double(odb, "-il1:temp",
	      "l1 instruction cache temperature in Kelvin ",
	      &Tkelvin_L1_ICache, /* default */300.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:temp",
	      "l2 instruction cache temperature in Kelvin ",
	      &Tkelvin_L2_ICache, /* default */300.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:temp",
	      "l1 data cache temperature in Kelvin ",
	      &Tkelvin_L1_DCache, /* default */300.0,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-dl2:temp",
	      "l2 data cache temperature in Kelvin ",
	      &Tkelvin_L2_DCache, /* default */300.0,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-tox:var",
	      "Tox Std Variation",
	      &Tox_Std , /* default */0.00  ,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-vdd:var",
	      "Vdd Std Variation",
	      &Vdd_Std , /* default */0.00  ,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-length:var",
	      "Tech Length Std Variation",
	      &Tech_Std , /* default */0.00  ,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-threshold_n:var",
	      "Threshold Nmos Variation",
	      &Vthn_Std , /* default */0.00  ,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-threshold_p:var",
	      "Threshold Pmos Variation",
	      &Vthp_Std , /* default */0.00  ,
	      /* print */TRUE, /* format */NULL);
 opt_reg_int(odb, "-samples:boxm",
	      "samples for box-mueller method",
	      &No_of_Samples, /* default */10000,
	      /* print */TRUE, /* format */NULL);


 if (!mystricmp(TECH_FACTOR, "TECH_180"))
   {
 opt_reg_double(odb, "-tox",
	      "Tox",
	      &Tox_User, /* default */3.5E-9,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:voltage",
	      "ireg file supply voltage ",
	      &Vdd_I_Reg, /* default */2.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Cell_N",
	      "ireg file threshold voltage N-Type Cell ",
	      &Vth0N_Cell_I_Reg, /* default */0.3979,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Cell_P",
	      "ireg file threshold voltage P-Type Cell ",
	      &Vth0P_Cell_I_Reg, /* default */0.4659,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Access_N",
	      "ireg file threshold voltage N-Type Bitline ",
	      &Vth0N_Access_I_Reg, /* default */0.3979,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:voltage",
	      "l1 instruction cache supply voltage ",
	      &Vdd_L1_ICache, /* default */2.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:voltage",
	      "l2 instruction cache supply voltage ",
	      &Vdd_L2_ICache, /* default */2.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:voltage",
	      "l1 data cache supply voltage ",
	      &Vdd_L1_DCache, /* default */2.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:voltage",
	      "l2 data cache supply voltage ",
	      &Vdd_L2_DCache, /* default */2.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Cell_N",
	      "l1 instruction cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L1_ICache, /* default */0.3979,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Cell_P",
	      "l1 instruction cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L1_ICache, /* default */0.4659,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Access_N",
	      "l1 instruction cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L1_ICache, /* default */0.3979,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Cell_N",
	      "l2 instruction cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L2_ICache, /* default */0.3979,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Cell_P",
	      "l2 instruction cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L2_ICache, /* default */0.4659,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Access_N",
	      "l2 instruction cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L2_ICache, /* default */0.3979,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_P",
	      "l1 instruction cache threshold voltage P-Type ",
	      &Vth0P_L1_ICache, /* default */0.4659,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_P",
	      "l2 instruction cache threshold voltage P-Type ",
	      &Vth0P_L2_ICache, /* default */0.4659,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Cell_N",
	      "l1 data cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L1_DCache, /* default */0.3979,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Cell_P",
	      "l1 data cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L1_DCache, /* default */0.4659,
		/* print */TRUE, /* format */NULL);


 opt_reg_double(odb, "-dl1:threshold_Access_N",
	      "l1 data cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L1_DCache, /* default */0.3979,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_P",
	      "l2 data cache threshold voltage p-Type ",
	      &Vth0P_L2_DCache, /* default */0.4659,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_P",
	      "l1 data cache threshold voltage P-Type ",
	      &Vth0P_L1_DCache, /* default */0.4659,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Cell_N",
	      "l2 data cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L2_DCache, /* default */0.3979,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Cell_P",
	      "l2 data cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L2_DCache, /* default */0.4659,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Access_N",
	      "l2 data cache threshold voltage N-Type Bitline",
	      &Vth0N_Access_L2_DCache, /* default */0.3979,
	      /* print */TRUE, /* format */NULL);


     }


else if (!mystricmp(TECH_FACTOR, "TECH_130"))
   {
 opt_reg_double(odb, "-tox",
	      "Tox",
	      &Tox_User, /* default */3.3E-9,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-ireg:voltage",
	      "ireg file supply voltage ",
	      &Vdd_I_Reg, /* default */1.5,
	      /* print */TRUE, /* format */NULL);
 
 opt_reg_double(odb, "-ireg:threshold_Cell_N",
	      "ireg file threshold voltage N-Type Cell ",
	      &Vth0N_Cell_I_Reg, /* default */0.3353,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Cell_P",
	      "ireg file threshold voltage P-Type Cell ",
	      &Vth0P_Cell_I_Reg, /* default */0.3499,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Access_N",
	      "ireg file threshold voltage N-Type Bitline ",
	      &Vth0N_Access_I_Reg, /* default */0.3353,
	      /* print */TRUE, /* format */NULL);


 opt_reg_double(odb, "-il1:voltage",
	      "l1 instruction cache supply voltage ",
	      &Vdd_L1_ICache, /* default */1.5,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:voltage",
	      "l2 instruction cache supply voltage ",
	      &Vdd_L2_ICache, /* default */1.5,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:voltage",
	      "l1 data cache supply voltage ",
	      &Vdd_L1_DCache, /* default */1.5,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:voltage",
	      "l2 data cache supply voltage ",
	      &Vdd_L2_DCache, /* default */1.5,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Cell_N",
	      "l1 instruction cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L1_ICache, /* default */0.3353,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Cell_P",
	      "l1 instruction cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L1_ICache, /* default */0.3499,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Access_N",
	      "l1 instruction cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L1_ICache, /* default */0.3353,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Cell_N",
	      "l2 instruction cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L2_ICache, /* default */0.3353,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Cell_P",
	      "l2 instruction cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L2_ICache, /* default */0.3499,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Access_N",
	      "l2 instruction cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L2_ICache, /* default */0.3353,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_P",
	      "l1 instruction cache threshold voltage P-Type ",
	      &Vth0P_L1_ICache, /* default */0.3499,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_P",
	      "l2 instruction cache threshold voltage P-Type ",
	      &Vth0P_L2_ICache, /* default */0.3499,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Cell_N",
	      "l1 data cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L1_DCache, /* default */0.3353,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Cell_P",
	      "l1 data cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L1_DCache, /* default */0.3499,
		/* print */TRUE, /* format */NULL);


 opt_reg_double(odb, "-dl1:threshold_Access_N",
	      "l1 data cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L1_DCache, /* default */0.3353,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_P",
	      "l2 data cache threshold voltage p-Type ",
	      &Vth0P_L2_DCache, /* default */0.3499,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_P",
	      "l1 data cache threshold voltage P-Type ",
	      &Vth0P_L1_DCache, /* default */0.3499,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Cell_N",
	      "l2 data cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L2_DCache, /* default */0.3353,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Cell_P",
	      "l2 data cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L2_DCache, /* default */0.3499,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Access_N",
	      "l2 data cache threshold voltage N-Type Bitline",
	      &Vth0N_Access_L2_DCache, /* default */0.3353,
	      /* print */TRUE, /* format */NULL);
   }


else if (!mystricmp(TECH_FACTOR, "TECH_100"))
   {
 opt_reg_double(odb, "-tox",
	      "Tox",
		&Tox_User, /* default */2.5E-9,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-ireg:voltage",
	      "ireg file supply voltage ",
	      &Vdd_I_Reg, /* default */1.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Cell_N",
	      "ireg file threshold voltage N-Type Cell ",
	      &Vth0N_Cell_I_Reg, /* default */0.2607,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Cell_P",
	      "ireg file threshold voltage P-Type Cell ",
	      &Vth0P_Cell_I_Reg, /* default */0.3030,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Access_N",
	      "ireg file threshold voltage N-Type Bitline ",
	      &Vth0N_Access_I_Reg, /* default */0.2607,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:voltage",
	      "l1 instruction cache supply voltage ",
	      &Vdd_L1_ICache, /* default */1.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:voltage",
	      "l2 instruction cache supply voltage ",
	      &Vdd_L2_ICache, /* default */1.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:voltage",
	      "l1 data cache supply voltage ",
	      &Vdd_L1_DCache, /* default */1.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:voltage",
	      "l2 data cache supply voltage ",
	      &Vdd_L2_DCache, /* default */1.0,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Cell_N",
	      "l1 instruction cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L1_ICache, /* default */0.2607,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Cell_P",
	      "l1 instruction cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L1_ICache, /* default */0.3030,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Access_N",
	      "l1 instruction cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L1_ICache, /* default */0.2607,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Cell_N",
	      "l2 instruction cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L2_ICache, /* default */0.2607,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Cell_P",
	      "l2 instruction cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L2_ICache, /* default */0.3030,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Access_N",
	      "l2 instruction cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L2_ICache, /* default */0.2607,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_P",
	      "l1 instruction cache threshold voltage P-Type ",
	      &Vth0P_L1_ICache, /* default */0.3030,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_P",
	      "l2 instruction cache threshold voltage P-Type ",
	      &Vth0P_L2_ICache, /* default */0.3030,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Cell_N",
	      "l1 data cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L1_DCache, /* default */0.2607,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Cell_P",
	      "l1 data cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L1_DCache, /* default */0.3030,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Access_N",
	      "l1 data cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L1_DCache, /* default */0.2607,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_P",
	      "l2 data cache threshold voltage p-Type ",
	      &Vth0P_L2_DCache, /* default */0.3030,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_P",
	      "l1 data cache threshold voltage P-Type ",
	      &Vth0P_L1_DCache, /* default */0.3030,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Cell_N",
	      "l2 data cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L2_DCache, /* default */0.2607,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Cell_P",
	      "l2 data cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L2_DCache, /* default */0.3030,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Access_N",
	      "l2 data cache threshold voltage N-Type Bitline",
	      &Vth0N_Access_L2_DCache, /* default */0.2607,
	      /* print */TRUE, /* format */NULL);
   }


else if (!mystricmp(TECH_FACTOR, "TECH_070"))
   {
 opt_reg_double(odb, "-tox",
	      "Tox",
	      &Tox_User, /* default */1.0E-9,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-ireg:voltage",
	      "ireg file supply voltage ",
	      &Vdd_I_Reg, /* default */0.9,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Cell_N",
	      "ireg file threshold voltage N-Type Cell ",
	      &Vth0N_Cell_I_Reg, /* default */0.1902,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Cell_P",
	      "ireg file threshold voltage P-Type Cell ",
	      &Vth0P_Cell_I_Reg, /* default */0.2130,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-ireg:threshold_Access_N",
	      "ireg file threshold voltage N-Type Bitline ",
	      &Vth0N_Access_I_Reg, /* default */0.1902,
	      /* print */TRUE, /* format */NULL);


 opt_reg_double(odb, "-il1:voltage",
	      "l1 instruction cache supply voltage ",
	      &Vdd_L1_ICache, /* default */0.9,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:voltage",
	      "l2 instruction cache supply voltage ",
	      &Vdd_L2_ICache, /* default */0.9,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:voltage",
	      "l1 data cache supply voltage ",
	      &Vdd_L1_DCache, /* default */0.9,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:voltage",
	      "l2 data cache supply voltage ",
	      &Vdd_L2_DCache, /* default */0.9,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Cell_N",
	      "l1 instruction cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L1_ICache, /* default */0.1902,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Cell_P",
	      "l1 instruction cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L1_ICache, /* default */0.2130,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_Access_N",
	      "l1 instruction cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L1_ICache, /* default */0.1902,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Cell_N",
	      "l2 instruction cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L2_ICache, /* default */0.1902,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Cell_P",
	      "l2 instruction cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L2_ICache, /* default */0.2130,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_Access_N",
	      "l2 instruction cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L2_ICache, /* default */0.1902,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il1:threshold_P",
	      "l1 instruction cache threshold voltage P-Type ",
	      &Vth0P_L1_ICache, /* default */0.2130,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-il2:threshold_P",
	      "l2 instruction cache threshold voltage P-Type ",
	      &Vth0P_L2_ICache, /* default */0.2130,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Cell_N",
	      "l1 data cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L1_DCache, /* default */0.1902,
		/* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_Cell_P",
	      "l1 data cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L1_DCache, /* default */0.2130,
		/* print */TRUE, /* format */NULL);


 opt_reg_double(odb, "-dl1:threshold_Access_N",
	      "l1 data cache threshold voltage N-Type Bitline ",
	      &Vth0N_Access_L1_DCache, /* default */0.1902,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_P",
	      "l2 data cache threshold voltage p-Type ",
	      &Vth0P_L2_DCache, /* default */0.2130,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl1:threshold_P",
	      "l1 data cache threshold voltage P-Type ",
	      &Vth0P_L1_DCache, /* default */0.2130,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Cell_N",
	      "l2 data cache threshold voltage N-Type Cell ",
	      &Vth0N_Cell_L2_DCache, /* default */0.1902,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Cell_P",
	      "l2 data cache threshold voltage P-Type Cell ",
	      &Vth0P_Cell_L2_DCache, /* default */0.2130,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-dl2:threshold_Access_N",
	      "l2 data cache threshold voltage N-Type Bitline",
	      &Vth0N_Access_L2_DCache, /* default */0.1902,
	      /* print */TRUE, /* format */NULL);
   }


else
    fatal("cannot parse TECH_FACTOR `%s'", TECH_FACTOR);



 /* *** FIXME **** */
 opt_reg_double(odb, "-RAM:aspect_ratio_access_ram_cell_N",
	      "aspect ratio of  RAM access cell N-Type ",
	      &aspect_ratio_access_ram_cell_N, /* default */(Wmemcella/TECH_LENGTH),
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-RAM:aspect_ratio_ram_cell_l2_N",
	      "aspect ratio of  RAM cell N-Type ",
	      &aspect_ratio_ram_cell_l2_N, /* default */(Wmemcellr/TECH_LENGTH),
	      /* print */TRUE, /* format */NULL);


 opt_reg_double(odb, "-RAM:aspect_ratio_ram_cell_l3_P",
	      "aspect ratio of  RAM cell P-Type ",
	      &aspect_ratio_ram_cell_l3_P, /* default */(Wmemcellw/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-IREG:aspect_ratio_access_ireg_cell_N",
	      "aspect ratio of  ireg access cell N-Type ",
	      &aspect_ratio_access_ireg_cell_N, /* default */(Wmemcella/TECH_LENGTH),
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-RAM:aspect_ratio_ireg_cell_l2_N",
	      "aspect ratio of  ireg cell N-Type ",
	      &aspect_ratio_ireg_cell_l2_N, /* default */(Wmemcellr/TECH_LENGTH),
	      /* print */TRUE, /* format */NULL);


 opt_reg_double(odb, "-RAM:aspect_ratio_ireg_cell_l3_P",
	      "aspect ratio of  ireg cell P-Type ",
	      &aspect_ratio_ireg_cell_l3_P, /* default */(Wmemcellw/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);




 opt_reg_double(odb, "-INVERTER:aspect_ratio_decoder_inverter_P",
	      "aspect ratio of decoder inverter cell P-Type ",
	      &aspect_ratio_decoder_inverter_P, /* default */(Wdecinvp/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_decoder_inverter_N",
	      "aspect ratio of decoder inverter cell N-Type ",
	      &aspect_ratio_decoder_inverter_N, /* default */(Wdecinvn/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_inverter1_N",
	      "aspect ratio of comparator inverter1 cell N-Type ",
	      &aspect_ratio_comparator_inverter1_N, /* default */(Wcompinvn1/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_inverter1_P",
	      "aspect ratio of comparator inverter1 cell P-Type ",
	      &aspect_ratio_comparator_inverter1_P, /* default */(Wcompinvp1/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_inverter2_N",
	      "aspect ratio of comparator inverter2 cell N-Type ",
	      &aspect_ratio_comparator_inverter2_N, /* default */(Wcompinvn2/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_inverter2_P",
	      "aspect ratio of comparator inverter2 cell P-Type ",
	      &aspect_ratio_comparator_inverter2_P, /* default */(Wcompinvp2/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_inverter3_N",
	      "aspect ratio of comparator inverter3 cell N-Type ",
	      &aspect_ratio_comparator_inverter3_N, /* default */(Wcompinvn3/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_inverter3_P",
	      "aspect ratio of comparator inverter3 cell P-Type ",
	      &aspect_ratio_comparator_inverter3_P, /* default */(Wcompinvp3/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);
 
 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_inverter4_N",
	      "aspect ratio of comparator inverter4 cell N-Type ",
	      &aspect_ratio_comparator_inverter4_N, /* default */(Wevalinvn/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_inverter4_P",
	      "aspect ratio of comparator inverter4 cell P-Type ",
	      &aspect_ratio_comparator_inverter4_P, /* default */(Wevalinvp/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-INVERTER:aspect_ratio_comparator_P",
	      "aspect ratio of comparator  cell P-Type ",
	      &aspect_ratio_comparator_P, /* default */(Wcompp/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);
 
 opt_reg_double(odb, "-COMPARATOR:aspect_ratio_comparator_N",
	      "aspect ratio of comparator  cell N-Type ",
	      &aspect_ratio_comparator_N, /* default */(Wcompn/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-MUXDRV:aspect_ratio_muxdrv12_N",
	      "aspect ratio of mux driver stage 1  cell N-Type ",
	      &aspect_ratio_muxdrv12_N, /* default */(Wmuxdrv12n/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);
 opt_reg_double(odb, "-MUXDRV:aspect_ratio_muxdrv12_P",
	      "aspect ratio of mux driver stage 1  cell P-Type ",
	      &aspect_ratio_muxdrv12_P, /* default */(Wmuxdrv12p/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-MUXDRV:aspect_ratio_muxdrvNOR_N",
	      "aspect ratio of mux driver stage 2  cell N-Type ",
	      &aspect_ratio_muxdrvNOR_N, /* default */(WmuxdrvNORn/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-MUXDRV:aspect_ratio_muxdrvNOR_P",
	      "aspect ratio of mux driver stage 2  cell P-Type ",
	      &aspect_ratio_muxdrvNOR_P, /* default */(WmuxdrvNORp/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-MUXDRV:aspect_ratio_muxdrvsel_N",
	      "aspect ratio of mux driver stage 3  cell N-Type ",
	      &aspect_ratio_muxdrv3_N, /* default */(Wmuxdrv3n/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-MUXDRV:aspect_ratio_muxdrvsel_P",
	      "aspect ratio of mux driver stage 3  cell P-Type ",
	      &aspect_ratio_muxdrv3_P, /* default */(Wmuxdrv3p/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-OUTDRV:aspect_ratio_outdrvsel_N",
	      "aspect ratio of output driver select   cell N-Type ",
	      &aspect_ratio_outdrvsel_N, /* default */(Woutdrvseln/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-OUTDRV:aspect_ratio_outdrvsel_P",
	      "aspect ratio of output driver select   cell P-Type ",
	      &aspect_ratio_outdrvsel_P, /* default */(Woutdrvselp/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-OUTDRV:aspect_ratio_outdrvnand_N",
	      "aspect ratio of output driver nand   cell N-Type ",
	      &aspect_ratio_outdrvnand_N, /* default */(Woutdrvnandn/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-OUTDRV:aspect_ratio_outdrvnand_P",
	      "aspect ratio of output driver nand   cell P-Type ",
	      &aspect_ratio_outdrvnand_P, /* default */(Woutdrvnandp/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-OUTDRV:aspect_ratio_outdrvnor_N",
	      "aspect ratio of output driver nor   cell N-Type ",
	      &aspect_ratio_outdrvnor_N, /* default */(Woutdrvnorn/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-OUTDRV:aspect_ratio_outdrvnor_P",
	      "aspect ratio of output driver nor   cell P-Type ",
	      &aspect_ratio_outdrvnor_P, /* default */(Woutdrvnorp/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-OUTDRV:aspect_ratio_outdriver_N",
	      "aspect ratio of output driver  cell N-Type ",
	      &aspect_ratio_outdriver_N, /* default */(Woutdrivern/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);

 opt_reg_double(odb, "-OUTDRV:aspect_ratio_outdriver_P",
	      "aspect ratio of output driver  cell P-Type ",
	      &aspect_ratio_outdriver_P, /* default */(Woutdriverp/TECH_LENGTH)
,
	      /* print */TRUE, /* format */NULL);




}

/* initialize the HotLeakage module */
void leakage_init()
{


 
 /* TECH_POINT180nm */


if (!mystricmp(TECH_FACTOR, "TECH_180"))
  {
  tech_length0 = 180E-9;
  M0n =   3.5E-2;       /* Zero Bias Mobility for N-Type */
  M0p =  8.0E-3 ;      /* Zero Bias Mobility for P-Type */
  Tox = 3.5E-9;
  Cox = (Eox/Tox);       /* Gate Oxide Capacitance per unit area */
  Vnoff0 = 7.5E-2 ;      /* Empirically Determined Model Parameter for N-Type */
                          /* FIX ME */
  Vpoff0 = -2.8e-2 ;    /* Empirically Determined Model Parameter for P-Type */
  Nfix =  0.22;     /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
  Pfix =  0.17 ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
  Vthn =  0.3979 ;     /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
  Vthp =  0.4659 ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
  Vnthx = -1.0E-3 ;   /* In the Equation Vth = Vth0 +Vnthx*(T-300) */ 
  Vpthx =  -1.0E-3 ;  /* In the Equation Vth = Vth0 +Vpthx*(T-300) */ 
  Vdd_init=  2.0 ;    /* Default Vdd. Can be Changed in leakage.c */ 
  Volt0 =  2.0 ;
  Na    =  -1.5 ;    /* Empirical param for the Vdd fit */
  Nb    =   1.2 ;    /* Empirical param for the Vdd fit */
  Pa    =   5.0 ;    /* Empirical param for the Vdd fit */
  Pb    =   0.75 ;   /* Empirical param for the Vdd fit */
  NEta =  1.5 ;           /* Sub-threshold Swing Co-efficient N-Type */
  PEta =  1.6  ;          /* Sub-threshold Swing Co-efficient P-Type */ 



 Kndesign_3in_nand = 1.905;
 in3_nandn_t_slope = 0;
 in3_nandn_vdd_slope =  0;

 Kpdesign_3in_nand = 2.059;
 in3_nandp_t_slope = 0;
 in3_nandp_vdd_slope = 0;

 Kndesign_2in_nand_outdrv = 5.72;
 in2_nandn_outdrv_t_slope = 0;
 in2_nandn_outdrv_vdd_slope = 0;

 Kpdesign_2in_nand_outdrv = 2.87;
 in2_nandp_outdrv_t_slope = 0;
 in2_nandp_outdrv_vdd_slope =  0;

/* NOR gate of decoder*/

 Kndesign_4in_nor_decoder =  0.956;
 in4_norn_decoder_t_slope = 0;
 in4_norn_decoder_vdd_slope =  0;

 Kpdesign_4in_nor_decoder =  4.886;
 in4_norp_decoder_t_slope = 0;
 in4_norp_decoder_vdd_slope = 0;

 Kndesign_3in_nor_decoder =  0.956;
 in3_norn_decoder_t_slope =  0;
 in3_norn_decoder_vdd_slope = 0;

 Kpdesign_3in_nor_decoder =  4.886;
 in3_norp_decoder_t_slope = 0;
 in3_norp_decoder_vdd_slope = 0;

 Kndesign_2in_nor_decoder =  1.19;
 in2_norn_decoder_t_slope =  0;
 in2_norn_decoder_vdd_slope =  0;

 Kpdesign_2in_nor_decoder =  8.65;
 in2_norp_decoder_t_slope =  0;
 in2_norp_decoder_vdd_slope = 0;



 Kndesign_2in_nor_mux_driver  = 15.34;
 in2_norn_mux_driver_t_slope = 0;
 in2_norn_mux_driver_vdd_slope = 0;


 Kpdesign_2in_nor_mux_driver =  21.71;
 in2_norp_mux_driver_t_slope = 0;
 in2_norp_mux_driver_vdd_slope = 0;


 Kndesign_2in_nor_outdrv =  1.91;
 in2_norn_outdrv_t_slope = 0;
 in2_norn_outdrv_vdd_slope = 0;

 Kpdesign_2in_nor_outdrv =  11.04;
 in2_norp_outdrv_t_slope = 0;
 in2_norp_outdrv_vdd_slope = 0;


 Kndesign_comparator       =   1.52;
 Kpdesign_comparator        =  1.52;

 Kndesign_sensamp          =  1.61;
 Kpdesign_sensamp          =  1.61;

 Kndesign_ireg_readbitline  = 1.46;
 Kpdesigp_ireg_readbitline  = 0;

/* gate Vss */
 Vth0_gate_vss= 0.65;
 aspect_gate_vss= 5;
/*drowsy cache*/
 Vdd_low= 0.6;

/*RBB*/
 k1_body_n= 0.5613;
 k1_body_p= 0.5560;
 vfi = 0.6;

 VSB_NMOS= 0.5;
 VSB_PMOS= 0.5;
/* dual VT*/
 Vt_cell_nmos_high= 0.45  ;
 Vt_cell_pmos_high= 0.5;
 Vt_bit_nmos_low = 0.35;
 Vt_bit_pmos_low = 0.4;


L_nmos_d  = 0.1E+9;     /* Adjusting Factor for Length */
Tox_nmos_e  = 2.6E+9;   /* Adjusting Factor for Tox */
L_pmos_d  = 0.1E+9;    /* Adjusting Factor for Length */
Tox_pmos_e  = 2.6E+9;  /* Adjusting Factor for Tox */








}


 /* TECH_POINT130nm */

else if (!mystricmp(TECH_FACTOR, "TECH_130"))
  {

  tech_length0 = 130E-9;
  M0n =  1.34E-2;       /* Zero Bias Mobility for N-Type */
  M0p =  5.2E-3 ;      /* Zero Bias Mobility for P-Type */
  Tox =  3.3E-9;
  Cox =  (Eox/Tox);       /* Gate Oxide Capacitance per unit area */
  Vnoff0 = -6.2E-2 ;     /* Empirically Determined Model Parameter for N-Type */
  Vpoff0 = -0.1;     /* Empirically Determined Model Parameter for P-Type */
  Nfix =   0.16 ;    /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
  Pfix =  0.13 ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
  Vthn =  0.3353;     /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
  Vthp =  0.3499 ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
  Vnthx = -0.85E-3;   /* In the Equation Vth = Vth0 +Vnthx*(T-300) */ 
  Vpthx = -0.1E-3;   /* In the Equation Vth = Vth0 +Vpthx*(T-300) */
  Vdd_init =  1.5 ;    /* Default Vdd. Can be Changed in leakage.c */  
  Volt0 =  1.5;
  Na  =    3.275 ;    /* Empirical param for the Vdd fit */
  Nb  =     1.1 ;    /* Empirical param for the Vdd fit */
  Pa  =     4.65 ;    /* Empirical param for the Vdd fit */
  Pb  =     2.2 ;   /* Empirical param for the Vdd fit */
  NEta =  1.6 ;           /* Sub-threshold Swing Co-efficient N-Type */
  PEta = 1.8   ;         /* Sub-threshold Swing Co-efficient P-Type */ 

 Kndesign_3in_nand = 2.096;
 in3_nandn_t_slope = 2.2e-3;
 in3_nandn_vdd_slope = -0.308;

 Kpdesign_3in_nand =  1.875;
 in3_nandp_t_slope =  0;
 in3_nandp_vdd_slope = 0;

 Kndesign_2in_nand_outdrv = 6.16;
 in2_nandn_outdrv_t_slope = 3.2e-3;
 in2_nandn_outdrv_vdd_slope = -0.74;

 Kpdesign_2in_nand_outdrv =  2.5;
 in2_nandp_outdrv_t_slope = 0;
 in2_nandp_outdrv_vdd_slope = 0;

/* NOR gate of decoder*/

 Kndesign_4in_nor_decoder = 0.75;
 in4_norn_decoder_t_slope = 0;
 in4_norn_decoder_vdd_slope = 0;

 Kpdesign_4in_nor_decoder = 2.92;
 in4_norp_decoder_t_slope = 4e-3;
 in4_norp_decoder_vdd_slope = -0.92;

 Kndesign_3in_nor_decoder = 0.75;
 in3_norn_decoder_t_slope = 0;
 in3_norn_decoder_vdd_slope = 0;

 Kpdesign_3in_nor_decoder = 2.92;
 in3_norp_decoder_t_slope = 4e-3;
 in3_norp_decoder_vdd_slope  = -0.92;

 Kndesign_2in_nor_decoder = 1.5;
 in2_norn_decoder_t_slope = 0;
 in2_norn_decoder_vdd_slope = 0;

 Kpdesign_2in_nor_decoder = 6.3;
 in2_norp_decoder_t_slope = 4.7e-3;
 in2_norp_decoder_vdd_slope = -1.04;



 Kndesign_2in_nor_mux_driver = 15;
 in2_norn_mux_driver_t_slope = 0;
 in2_norn_mux_driver_vdd_slope = 0;


 Kpdesign_2in_nor_mux_driver =  16.26;
 in2_norp_mux_driver_t_slope = 12e-3;
 in2_norp_mux_driver_vdd_slope = -2.68;


 Kndesign_2in_nor_outdrv =  1.5;
 in2_norn_outdrv_t_slope =   0;
 in2_norn_outdrv_vdd_slope  =0;

 Kpdesign_2in_nor_outdrv = 8.13;
 in2_norp_outdrv_t_slope = 6e-3;
 in2_norp_outdrv_vdd_slope = -1.34;


 Kndesign_comparator      =    1.52;
 Kpdesign_comparator       =   1.52;

 Kndesign_sensamp          =  1.58;
 Kpdesign_sensamp         =   1.58;

 Kndesign_ireg_readbitline =  0.88;
 Kpdesigp_ireg_readbitline  = 0;

/* gate Vss */
 Vth0_gate_vss = 0.55;
 aspect_gate_vss = 5;
/*drowsy cache*/
 Vdd_low =  0.45;

/*RBB*/
 k1_body_n = 0.3662;
 k1_body_p = 0.4087;
 vfi =  0.55;
 VSB_NMOS = 0.45;
 VSB_PMOS = 0.45;

/* dual VT*/
 Vt_cell_nmos_high = 0.38  ;
 Vt_cell_pmos_high=  0.4;
 Vt_bit_nmos_low = 0.28;
 Vt_bit_pmos_low = 0.29;



L_nmos_d  = 0.285E+9;     /* Adjusting Factor for Length */
Tox_nmos_e  = 4.3E+9;   /* Adjusting Factor for Tox */
L_pmos_d  = 0.44E+9;    /* Adjusting Factor for Length */
Tox_pmos_e  = 5.0E+9;  /* Adjusting Factor for Tox */


}


 /* TECH_POINT100nm */

     else if (!mystricmp(TECH_FACTOR, "TECH_100"))
       {
  tech_length0 = 100E-9;
  M0n = 1.8E-2 ;      /* Zero Bias Mobility for N-Type */
  M0p = 5.5E-3  ;     /* Zero Bias Mobility for P-Type */
  Tox = 2.5E-9 ;
  Cox = (Eox/Tox);       /* Gate Oxide Capacitance per unit area */
  Vnoff0 = -2.7E-2;     /* Empirically Determined Model Parameter for N-Type */
                          /* FIX ME */
  Vpoff0 = -1.04E-1;     /* Empirically Determined Model Parameter for P-Type */
  Nfix  = 0.18  ;   /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
  Pfix =  0.14   ;  /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
  Vthn =  0.2607  ;   /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
  Vthp =  0.3030 ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
  Vnthx = -0.77E-3 ; /* In the Equation Vth = Vth0 +Vnthx*(T-300) */ 
  Vpthx =  -0.72E-3;  /* In the Equation Vth = Vth0 +Vpthx*(T-300) */ 
  Vdd_init = 1.2 ;    /* Default Vdd. Can be Changed for different parts in leakage.c */ 
  Volt0 =  1.2;
  Na   =   3.6 ;    /* Empirical param for the Vdd fit */
  Nb   =   2.5  ;   /* Empirical param for the Vdd fit */
  Pa   =    4.49 ;    /* Empirical param for the Vdd fit */
  Pb   =    2.4 ;  /* Empirical param for the Vdd fit */

  NEta =  1.7 ;           /* Sub-threshold Swing Co-efficient N-Type */
  PEta =  1.7  ;          /* Sub-threshold Swing Co-efficient P-Type */ 




 Kndesign_3in_nand =  1.39;
 in3_nandn_t_slope =  2.6e-3;
 in3_nandn_vdd_slope =  -0.358;

 Kpdesign_3in_nand =  1.875;
 in3_nandp_t_slope =  0;
 in3_nandp_vdd_slope =  0;

 Kndesign_2in_nand_outdrv =  4.77;
 in2_nandn_outdrv_t_slope = 4.9e-3;
 in2_nandn_outdrv_vdd_slope = -0.75;

 Kpdesign_2in_nand_outdrv =  2.5;
 in2_nandp_outdrv_t_slope = 0;
 in2_nandp_outdrv_vdd_slope = 0;

/* NOR gate of decoder*/

 Kndesign_4in_nor_decoder = 0.75;
 in4_norn_decoder_t_slope = 0;
 in4_norn_decoder_vdd_slope = 0;

 Kpdesign_4in_nor_decoder = 3.02;
 in4_norp_decoder_t_slope = 5.4e-3;
 in4_norp_decoder_vdd_slope = -0.73;

 Kndesign_3in_nor_decoder = 0.75;
 in3_norn_decoder_t_slope = 0;
 in3_norn_decoder_vdd_slope = 0;

 Kpdesign_3in_nor_decoder = 3.02;
 in3_norp_decoder_t_slope = 5.4e-3;
 in3_norp_decoder_vdd_slope = -0.73;

 Kndesign_2in_nor_decoder = 1.5;
 in2_norn_decoder_t_slope = 0;
 in2_norn_decoder_vdd_slope = 0;

 Kpdesign_2in_nor_decoder = 6.37;
 in2_norp_decoder_t_slope = 6e-3;
 in2_norp_decoder_vdd_slope = -0.93;



 Kndesign_2in_nor_mux_driver =  15;
 in2_norn_mux_driver_t_slope = 0;
 in2_norn_mux_driver_vdd_slope = 0;


 Kpdesign_2in_nor_mux_driver =  16.44;
 in2_norp_mux_driver_t_slope = 15.4e-3;
 in2_norp_mux_driver_vdd_slope = -2.4;


 Kndesign_2in_nor_outdrv = 1.5;
 in2_norn_outdrv_t_slope = 0;
 in2_norn_outdrv_vdd_slope = 0;

 Kpdesign_2in_nor_outdrv = 8.22;
 in2_norp_outdrv_t_slope = 7.7e-3;
 in2_norp_outdrv_vdd_slope = -1.2;


 Kndesign_comparator =          0.95;
 Kpdesign_comparator =          0.95;

 Kndesign_sensamp         =   1.22;
 Kpdesign_sensamp          =  1.22;

 Kndesign_ireg_readbitline =   0.79;
 Kpdesigp_ireg_readbitline =   0;

/* gate Vss */
 Vth0_gate_vss = 0.50;
 aspect_gate_vss = 5;
/*drowsy cache*/
 Vdd_low =  0.36;

/*RBB*/
 k1_body_n =  0.395;
 k1_body_p =  0.391;
 vfi = 0.5;
 VSB_NMOS =  0.4;
 VSB_PMOS =  0.4 ;
/* dual VT*/
 Vt_cell_nmos_high =  0.31  ;
 Vt_cell_pmos_high =  0.35;
 Vt_bit_nmos_low  = 0.21;
 Vt_bit_pmos_low = 0.25;


L_nmos_d  = 0.102E+9;     /* Adjusting Factor for Length */
Tox_nmos_e  = 2.5E+9;   /* Adjusting Factor for Tox */
L_pmos_d  = 0.21E+9;    /* Adjusting Factor for Length */
Tox_pmos_e  = 3.1E+9;  /* Adjusting Factor for Tox */

}



else if (!mystricmp(TECH_FACTOR, "TECH_070"))
  {
tech_length0 = 70E-9;
  M0n =  3.5E-2 ;      /* Zero Bias Mobility for N-Type */
  M0p = 8.0E-3 ;      /* Zero Bias Mobility for P-Type */
  Tox = 1.0E-9;
  Cox = (Eox/Tox) ;      /* Gate Oxide Capacitance per unit area */
  Vnoff0 = -3.9E-2 ;    /* Empirically Determined Model Parameter for N-Type */
                          /* FIX ME */
  Vpoff0 = -4.35E-2;     /* Empirically Determined Model Parameter for P-Type */
  Nfix =  -0.05 ;    /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
  Pfix =  0.07 ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
  Vthn =  0.1902  ;   /* In the equation Voff = Vnoff0 +Nfix*(Vth0-Vthn) */
  Vthp =  0.2130 ;    /* In the equation Voff = Vpoff0 +Pfix*(Vth0-Vthp) */
  Vnthx = -0.49E-3 ; /* In the Equation Vth = Vth0 +Vnthx*(T-300) */ 
  Vpthx =  -0.54E-3;  /* In the Equation Vth = Vth0 +Vpthx*(T-300) */ 
  Vdd_init =  1.0;     /* Default Vdd. Can be Changed in leakage.c */ 
  Volt0 =  1.0;
  Na   =   -2.94 ;    /* Empirical param for the Vdd fit */
  Nb   =    2.0  ;   /* Empirical param for the Vdd fit */
  Pa   =    -2.245;     /* Empirical param for the Vdd fit */
  Pb   =    2.89; /* Empirical param for the Vdd fit */

  NEta =  1.3;            /* Sub-threshold Swing Co-efficient N-Type */
  PEta  = 1.4 ;           /* Sub-threshold Swing Co-efficient P-Type */ 


 Kndesign_3in_nand =  1.71;
 in3_nandn_t_slope =  2.6e-3;
 in3_nandn_vdd_slope =  -0.42;

 Kpdesign_3in_nand =   1.874;
 in3_nandp_t_slope =  0;
 in3_nandp_vdd_slope =  0;

 Kndesign_2in_nand_outdrv =  5.4;
 in2_nandn_outdrv_t_slope = 4.3e-3;
 in2_nandn_outdrv_vdd_slope = -0.8;

 Kpdesign_2in_nand_outdrv =  2.5;
 in2_nandp_outdrv_t_slope = 0;
 in2_nandp_outdrv_vdd_slope = 0;

/* NOR gate of decoder*/

 Kndesign_4in_nor_decoder = 0.75;
 in4_norn_decoder_t_slope = 0;
 in4_norn_decoder_vdd_slope = 0;

 Kpdesign_4in_nor_decoder = 2.84;
 in4_norp_decoder_t_slope = 4e-3;
 in4_norp_decoder_vdd_slope = -0.7;

 Kndesign_3in_nor_decoder = 0.75;
 in3_norn_decoder_t_slope = 0;
 in3_norn_decoder_vdd_slope = 0;

 Kpdesign_3in_nor_decoder = 2.84;
 in3_norp_decoder_t_slope = 4e-3;
 in3_norp_decoder_vdd_slope = -0.7;

 Kndesign_2in_nor_decoder = 1.5;
 in2_norn_decoder_t_slope = 0;
 in2_norn_decoder_vdd_slope = 0;

 Kpdesign_2in_nor_decoder = 6.15;
 in2_norp_decoder_t_slope = 4.7e-3;
 in2_norp_decoder_vdd_slope = -0.95;



 Kndesign_2in_nor_mux_driver =  15;
 in2_norn_mux_driver_t_slope = 0;
 in2_norn_mux_driver_vdd_slope = 0;


 Kpdesign_2in_nor_mux_driver =  15.88;
 in2_norp_mux_driver_t_slope = 12e-3;
 in2_norp_mux_driver_vdd_slope = -2.4;


 Kndesign_2in_nor_outdrv =  1.5;
 in2_norn_outdrv_t_slope = 0;
 in2_norn_outdrv_vdd_slope = 0;

 Kpdesign_2in_nor_outdrv =  7.94;
 in2_norp_outdrv_t_slope = 6e-3;
 in2_norp_outdrv_vdd_slope = -1.2;


 Kndesign_comparator =          1.07;
 Kpdesign_comparator =          1.07;

 Kndesign_sensamp          =  1.72;
 Kpdesign_sensamp           = 1.72;

 Kndesign_ireg_readbitline =   0.84;
 Kpdesigp_ireg_readbitline =   0;

/*gate leakage factor for 70nm*/
 nmos_unit_leakage = 53e-12;
 a_nmos_vdd = 7.75;
 b_nmos_t =  0.15e-12;
 c_nmos_tox =  11.75e9;

 pmos_unit_leakage = 22.9e-12;
 a_pmos_vdd = 12;
 b_pmos_t =  0.086e-12;
 c_pmos_tox = 11.25e9;

/* gate Vss */
 Vth0_gate_vss =  0.45;
 aspect_gate_vss =  5;
/*drowsy cache*/
 Vdd_low =  0.3;

/*RBB*/
 k1_body_n = 0.37;
 k1_body_p = 0.38;
 vfi = 0.45;
 VSB_NMOS = 0.35 ;
 VSB_PMOS = 0.35;

/* dual VT*/
 Vt_cell_nmos_high =  0.29 ;  
 Vt_cell_pmos_high =  0.31;
 Vt_bit_nmos_low = 0.19;
 Vt_bit_pmos_low = 0.21;


L_nmos_d  = 0.1E+9;     /* Adjusting Factor for Length */
Tox_nmos_e  = 3.0E+9;   /* Adjusting Factor for Tox */
L_pmos_d  = 0.225E+9;    /* Adjusting Factor for Length */
Tox_pmos_e  = 4.0E+9;  /* Adjusting Factor for Tox */


       }






/* Initialize the CACTI parameters for easy calculations of leakage energy */
  init_cacti_model( cache_il1, cache_il2, cache_dl1, cache_dl2);
srand48((long)time(NULL));
  /* Initialize the Params like Vdd etc */
  init_leakage_param();

/* compute initial default  leakage power estimates */
 calculate_leakage_il1cache(Vdd_L1_ICache, Tkelvin_L1_ICache, &leakage_power);
 calculate_leakage_dl1cache(Vdd_L1_DCache, Tkelvin_L1_DCache,&leakage_power);
 calculate_leakage_dl2cache(Vdd_L2_DCache, Tkelvin_L2_DCache,&leakage_power);
 calculate_leakage_il2cache(Vdd_L2_ICache, Tkelvin_L2_ICache,&leakage_power);
 calculate_leakage_iregarch(Vdd_I_Reg,Tkelvin_I_Reg, &leakage_power);
 if (!mystricmp(TECH_FACTOR, "TECH_070"))
  {
 cal_il1_cell_gate_leakage(Vdd_L1_ICache, Tkelvin_L1_ICache, &leakage_power);
 cal_dl1_cell_gate_leakage(Vdd_L1_DCache, Tkelvin_L1_DCache,&leakage_power);
 cal_dl2_cell_gate_leakage(Vdd_L2_DCache, Tkelvin_L2_DCache,&leakage_power);

  }

}
