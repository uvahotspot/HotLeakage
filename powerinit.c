#include <math.h>
#include "leakage.h"
#include "power.h"
#include "options.h"
#include "misc.h"

/* Power.c */
/* Options */

 double Sense2Powerfactor;
 double LowSwingPowerfactor;

/* Technology Length */
 char *TECH_FACTOR;
 double  MSCALE;

double  GEN_POWER_FACTOR ;
double CSCALE;	/* wire capacitance scaling factor */
double RSCALE	;/* wire resistance scaling factor */
double LSCALE		;	/* length (feature) scaling factor */
double ASCALE  ;	/* area scaling factor */
double VSCALE		;	/* voltage scaling factor */
double VTSCALE	;		/* threshold voltage scaling factor */
double SSCALE	;	/* sense voltage scaling factor */
double TECH_LENGTH    ;         /* TECH LENGTH */
double Mhz  ;
double GEN_POWER_SCALE ;


/*
  * CMOS 0.8um model parameters
  *   - from Appendix II of Cacti tech report
  */


/* corresponds to 8um of m3 @ 225ff/um */
double Cwordmetal      ; 

/*double Corresponds to 16um of m2 @ 275ff/um */
double Cbitmetal    ; 

/* corresponds to 1um of m2 @ 275ff/um */
double Cmetal   ;

double CM3metal  ;
double CM2metal  ;

/*  Cmetal 1.222e-15 */

/* fF/um2 at 1.5V */
double Cndiffarea ;		/* FIXME: ??? */

/* fF/um2 at 1.5V */
double Cpdiffarea ;		/* FIXME: ??? */

/* fF/um at 1.5V */
double Cndiffside ;		/* in general this does not scale */

/* fF/um at 1.5V */
double Cpdiffside ;		/* in general this does not scale */

/* fF/um at 1.5V */
double Cndiffovlp   ;		/* FIXME: by depth??? */

/* fF/um at 1.5V */
double Cpdiffovlp   ;		/* FIXME: by depth??? */

/* fF/um assuming 25% Miller effect */
double Cnoxideovlp ;		/* FIXME: by depth??? */

/* fF/um assuming 25% Miller effect */
double Cpoxideovlp ;		/* FIXME: by depth??? */

/* um */
double Leff         ; 

/* fF/um2 */
double Cgate        ;		/* FIXME: ??? */

/* fF/um2 */
double Cgatepass    ;		/* FIXME: ??? */

/* note that the value ofdouble Cgatepass will be different depending on 
   whether or not the source and drain are at different potentials or
   the same potential.  The two values were averaged */

/* fF/um */
double Cpolywire	 ; 

/* ohms*um of channel width */
double Rnchannelstatic   ; 

/* ohms*um of channel width */
double Rpchannelstatic ; 

double Rnchannelon ; 

double Rpchannelon; 

/* corresponds to 16um of m2 @ 48mO/sq */
double Rbitmetal ; 

/* corresponds to  8um of m3 @ 24mO/sq */
double Rwordmetal; 

double Vdd   ; 

/* other stuff (from tech report, appendix 1) */


double Period   ; 

double krise ; 
double tsensedata	 ; 
double tsensetag  ; 
double tfalldata; 
double tfalltag; 
double Vbitpre  ; 
double Vt	 ; 
double Vbitsense  ; 

double Powerfactor ;

double SensePowerfactor3   ; 
double SensePowerfactor2  ; 
double SensePowerfactor ; 

double AF   ;
double POPCOUNT_AF ; 

/* Threshold voltages (as a proportion of Vdd)
   If you don't know them, set all values to 0.5 */

double VSINV          ;  
double VTHINV100x60  ;   /* inverter with p00,n0 */
double VTHNAND60x90   ;  /* nand with p=60 and three n=90 */
double VTHNOR12x4x1    ;  /* nor with p=12, n=4, 1 input */
double VTHNOR12x4x2    ; /* nor with p=12, n=4, 2 inputs */
double VTHNOR12x4x3    ; /* nor with p=12, n=4, 3 inputs */
double VTHNOR12x4x4    ; /* nor with p=12, n=4, 4 inputs */
double VTHOUTDRINV    ;
double VTHOUTDRNOR   ;
double VTHOUTDRNAND  ;
double VTHOUTDRIVE   ;
double VTHCOMPINV    ;
double VTHMUXDRV1    ;
double VTHMUXDRV2    ;
double VTHMUXDRV3    ;
double VTHEVALINV    ;
double VTHSENSEEXTDRV   ;

/* transistor widths in um (as described in tech report, appendix 1) */
double Wdecdrivep 	 ; 
double Wdecdriven 	 ; 
double Wdec3to8n 	 ; 
double Wdec3to8p 	 ; 
double WdecNORn 	 ; 
double WdecNORp 	 ; 
double Wdecinvn 	 ; 
double Wdecinvp	 ; 

double Wworddrivemax 	 ; 
double Wmemcella 	 ; 
double Wmemcellr 	 ; 
double Wmemcellw 	 ; 
double Wmemcellbscale 	;		/* means 2x bigger than Wmemcella */
double Wbitpreequ 	 ; 

double Wbitmuxn 	 ; 
double WsenseQ1to4 	 ; 
double Wcompinvp1  	 ; 
double Wcompinvn1  	 ; 
double Wcompinvp2  	 ; 
double Wcompinvn2  	 ; 
double Wcompinvp3  	 ; 
double Wcompinvn3  	 ; 
double Wevalinvp  	 ; 
double Wevalinvn  	 ; 

double Wcompn	  	 ; 
double Wcompp	  	 ; 
double Wcomppreequ    ; 
double Wmuxdrv12n  	 ; 
double Wmuxdrv12p  	 ; 
double WmuxdrvNANDn   ; 
double WmuxdrvNANDp   ; 
double WmuxdrvNORn  	 ; 
double WmuxdrvNORp 	 ; 
double Wmuxdrv3n    ; 
double Wmuxdrv3p    ; 
double Woutdrvseln    ; 
double Woutdrvselp    ; 
double Woutdrvnandn    ; 
double Woutdrvnandp    ; 
double Woutdrvnorn    ; 
double Woutdrvnorp    ; 
double Woutdrivern    ; 
double Woutdriverp     ; 

double Wcompcellpd2    ; 
double Wcompdrivern    ; 
double Wcompdriverp    ; 
double Wcomparen2      ; 
double Wcomparen1      ; 
double Wmatchpchg      ; 
double Wmatchinvn      ; 
double Wmatchinvp      ; 
double Wmatchnandn     ; 
double Wmatchnandp     ; 
double Wmatchnorn     ; 
double Wmatchnorp     ; 

double WSelORn         ; 
double WSelORprequ     ; 
double WSelPn          ; 
double WSelPp          ; 
double WSelEnn         ; 
double WSelEnp         ; 

double Wsenseextdrv1p    ; 
double Wsenseextdrv1n    ; 
double Wsenseextdrv2p    ; 
double Wsenseextdrv2n    ; 


/* bit width of RAM cell in um */
double BitWidth     ; 

/* bit height of RAM cell in um */
double BitHeight     ; 

double Cout	     ; 

/* Sizing of cells and spacings */
double RatCellHeight    ; 
double RatCellWidth     ; 
double RatShiftRegWidth  ; 
double RatNumShift      ;
double BitlineSpacing   ; 
double WordlineSpacing   ; 

double RegCellHeight    ; 
double RegCellWidth     ; 

double CamCellHeight    ; 
double CamCellWidth     ; 
double MatchlineSpacing  ; 
double TaglineSpacing   ; 

/*=================================================================*/

/* ALU POWER NUMBERS for .18um 733Mhz */
/* normalize to cap from W */
double NORMALIZE_SCALE    ; 
/* normalize .18um cap to other gen's cap, then xPowerfactor */
double  POWER_SCALE   ; 
double I_ADD         ; 
double I_ADD32      ; 
double I_MULT16      ; 
double I_SHIFT      ; 
double I_LOGIC     ; 
double F_ADD     ; 
double F_MULT    ; 

double I_ADD_CLOCK   ; 
double I_MULT_CLOCK   ; 
double I_SHIFT_CLOCK ; 
double I_LOGIC_CLOCK   ; 
double F_ADD_CLOCK    ; 
double F_MULT_CLOCK   ; 





/* Technology Length */
extern char *TECH_FACTOR;


/* initialize the Dynamic power module */
void power_init()
{
 
 /* TECH_POINT180nm */

 GEN_POWER_FACTOR =  1.31;
if (!mystricmp(TECH_FACTOR, "TECH_180"))
  {
 CSCALE =		19.7172;	/* wire capacitance scaling factor */
 RSCALE	=	20.0000	;/* wire resistance scaling factor */
 LSCALE	=	0.2250	;	/* length (feature) scaling factor */
 ASCALE	=	LSCALE*LSCALE;	/* area scaling factor */
 VSCALE	=	0.4	;	/* voltage scaling factor */
 VTSCALE	=	0.5046;		/* threshold voltage scaling factor */
 SSCALE	=	0.85	;	/* sense voltage scaling factor */
 TECH_LENGTH =    0.18   ;         /* TECH LENGTH */
 Mhz         =    1000e6;
 GEN_POWER_SCALE = 1;
  }
 /* TECH_POINT130nm */

else if (!mystricmp(TECH_FACTOR, "TECH_130"))
  {
 CSCALE	=	40.00;	/* wire capacitance scaling factor */
 RSCALE	=	40.0000;	/* wire resistance scaling factor */
 LSCALE	=	0.1440;		/* length (feature) scaling factor */
 ASCALE	=	LSCALE*LSCALE;	/* area scaling factor */
 VSCALE	=	0.3;		/* voltage scaling factor */
 VTSCALE	=	0.4980	;	/* threshold voltage scaling factor */
 SSCALE	=	0.825	;	/* sense voltage scaling factor */
 Mhz      =       1700e6;
 TECH_LENGTH =    0.13;           /* TECH LENGTH */
 GEN_POWER_SCALE= 1;

  }

/* TECH_POINT100nm */

     else if (!mystricmp(TECH_FACTOR, "TECH_100"))
       {
 CSCALE	=	84.2172;	/* wire capacitance scaling factor */
			/* linear: 51.7172, predicted: 84.2172 */
 RSCALE	=	80.0000;	/* wire resistance scaling factor */
 LSCALE	=	0.1250;		/* length (feature) scaling factor */
 ASCALE	=	LSCALE*LSCALE;	/* area scaling factor */
 VSCALE	=	0.24;		/* voltage scaling factor */
 VTSCALE	=	0.49	;	/* threshold voltage scaling factor */
 SSCALE	=	0.80;		/* sense voltage scaling factor */
 TECH_LENGTH    = 0.10 ;           /* TECH LENGTH */           
 Mhz            = 3000e6;
 GEN_POWER_SCALE = (1/GEN_POWER_FACTOR);
       }


else if (!mystricmp(TECH_FACTOR, "TECH_070"))
  {
 CSCALE	=	160.2172;	/* wire capacitance scaling factor */
			/* linear: 51.7172, predicted: 84.2172 */
 RSCALE	=	(160.0000);	/* wire resistance scaling factor */
 LSCALE	=	0.0800	;	/* length (feature) scaling factor */
 ASCALE	=	(LSCALE*LSCALE);	/* area scaling factor */
 VSCALE	=	0.20;		/* voltage scaling factor */
 VTSCALE	=	0.45;		/* threshold voltage scaling factor */
 SSCALE	=	0.775;		/* sense voltage scaling factor */
 TECH_LENGTH  =   0.07;            /* TECH LENGTH */           
 Mhz          =   5600e6;
 GEN_POWER_SCALE = (1/GEN_POWER_FACTOR);

  }









/*
 * CMOS 0.8um model parameters
 *   - from Appendix II of Cacti tech report
 */


/* corresponds to 8um of m3 @ 225ff/um */
 Cwordmetal  = (1.8e-15 * (CSCALE * ASCALE)) ; 

/* corresponds to 16um of m2 @ 275ff/um */
 Cbitmetal   = (4.4e-15 * (CSCALE * ASCALE)) ; 

/* corresponds to 1um of m2 @ 275ff/um */
 Cmetal  =      Cbitmetal/16 ;

 CM3metal  =      Cbitmetal/16 ;
 CM2metal   =     Cbitmetal/16 ;

/*  Cmetal 1.222e-15 */

/* fF/um2 at 1.5V */
 Cndiffarea  =  0.137e-15;		/* FIXME: ??? */

/* fF/um2 at 1.5V */
 Cpdiffarea  =  0.343e-15;		/* FIXME: ??? */

/* fF/um at 1.5V */
 Cndiffside   = 0.275e-15;		/* in general this does not scale */

/* fF/um at 1.5V */
 Cpdiffside   = 0.275e-15;		/* in general this does not scale */

/* fF/um at 1.5V */
 Cndiffovlp  =  0.138e-15;		/* FIXME: by depth??? */

/* fF/um at 1.5V */
 Cpdiffovlp   = 0.138e-15;		/* FIXME: by depth??? */

/* fF/um assuming 25% Miller effect */
 Cnoxideovlp =  0.263e-15;		/* FIXME: by depth??? */

/* fF/um assuming 25% Miller effect */
 Cpoxideovlp =  0.338e-15;		/* FIXME: by depth??? */

/* um */
 Leff        = (0.8 * LSCALE) ; 

/* fF/um2 */
 Cgate     =    1.95e-15;		/* FIXME: ??? */

/* fF/um2 */
 Cgatepass    = 1.45e-15;		/* FIXME: ??? */

/* note that the value of Cgatepass will be different depending on 
   whether or not the source and drain are at different potentials or
   the same potential.  The two values were averaged */

/* fF/um */
 Cpolywire	= (0.25e-15 * CSCALE * LSCALE) ; 

/* ohms*um of channel width */
 Rnchannelstatic	= (25800 * LSCALE) ; 

/* ohms*um of channel width */
 Rpchannelstatic =	(61200 * LSCALE) ; 

 Rnchannelon =	(9723 * LSCALE) ; 

 Rpchannelon =	(22400 * LSCALE) ; 

/* corresponds to 16um of m2 @ 48mO/sq */
 Rbitmetal =	(0.320 * (RSCALE * ASCALE)) ; 

/* corresponds to  8um of m3 @ 24mO/sq */
 Rwordmetal =	(0.080 * (RSCALE * ASCALE)) ; 

 Vdd	=	(5 * VSCALE) ; 

/* other stuff (from tech report, appendix 1) */


 Period        = (1/Mhz) ; 

 krise	=	(0.4e-9 * LSCALE) ; 
 tsensedata	= (5.8e-10 * LSCALE) ; 
 tsensetag =	(2.6e-10 * LSCALE) ; 
 tfalldata =	(7e-10 * LSCALE) ; 
 tfalltag =	(7e-10 * LSCALE) ; 
 Vbitpre  =		(3.3 * SSCALE) ; 
 Vt	 =	(1.09 * VTSCALE) ; 
 Vbitsense =	(0.10 * SSCALE) ; 

 Sense2Powerfactor= (Mhz)*(2*.3+.1*Vdd);
 LowSwingPowerfactor= (Mhz)*.2*.2;

 MSCALE= (LSCALE * .624 / .2250);

 Powerfactor =  (Mhz)*Vdd*Vdd;

 SensePowerfactor3 =  (Mhz)*(Vbitsense)*(Vbitsense) ; 
 SensePowerfactor2 = (Mhz)*(Vbitpre-Vbitsense)*(Vbitpre-Vbitsense) ; 
 SensePowerfactor =  (Mhz)*(Vdd/2)*(Vdd/2) ; 

 AF   =   0.5;
 POPCOUNT_AF =  (23.9/64.0) ; 

/* Threshold voltages (as a proportion of Vdd)
   If you don't know them, set all values to 0.5 */

 VSINV        =  0.456 ;  
 VTHINV100x60  =  0.438;   /* inverter with p=100,n=60 */
 VTHNAND60x90 =  0.561 ;  /* nand with p=60 and three n=90 */
 VTHNOR12x4x1  =  0.503 ;  /* nor with p=12, n=4, 1 input */
 VTHNOR12x4x2 =  0.452  ; /* nor with p=12, n=4, 2 inputs */
 VTHNOR12x4x3 =  0.417  ; /* nor with p=12, n=4, 3 inputs */
 VTHNOR12x4x4 =  0.390  ; /* nor with p=12, n=4, 4 inputs */
 VTHOUTDRINV  =   0.437;
 VTHOUTDRNOR  =  0.431;
 VTHOUTDRNAND =  0.441;
 VTHOUTDRIVE  =  0.425;
 VTHCOMPINV   =  0.437;
 VTHMUXDRV1  =   0.437;
 VTHMUXDRV2   =  0.486;
 VTHMUXDRV3  =   0.437;
 VTHEVALINV   =  0.267;
 VTHSENSEEXTDRV =   0.437;

/* transistor widths in um (as described in tech report, appendix 1) */
 Wdecdrivep =	(57.0 * LSCALE) ; 
 Wdecdriven =	(40.0 * LSCALE) ; 
 Wdec3to8n = 	(14.4 * LSCALE) ; 
 Wdec3to8p =	(14.4 * LSCALE) ; 
 WdecNORn = 	(5.4 * LSCALE) ; 
 WdecNORp =	(30.5 * LSCALE) ; 
 Wdecinvn =	(5.0 * LSCALE) ; 
 Wdecinvp	= (10.0  * LSCALE) ; 

 Wworddrivemax =	(100.0 * LSCALE) ; 
 Wmemcella =	(2.4 * LSCALE) ; 
 Wmemcellr =	(4.0 * LSCALE) ; 
 Wmemcellw =	(2.1 * LSCALE) ; 
 Wmemcellbscale =	2;		/* means 2x bigger than Wmemcella */
 Wbitpreequ =	(10.0 * LSCALE) ; 

 Wbitmuxn =	(10.0 * LSCALE) ; 
 WsenseQ1to4 = 	(4.0 * LSCALE) ; 
 Wcompinvp1  =	(10.0 * LSCALE) ; 
 Wcompinvn1  =	(6.0 * LSCALE) ; 
 Wcompinvp2  =	(20.0 * LSCALE) ; 
 Wcompinvn2  =	(12.0 * LSCALE) ; 
 Wcompinvp3  =	(40.0 * LSCALE) ; 
 Wcompinvn3  =	(24.0 * LSCALE) ; 
 Wevalinvp  =	(20.0 * LSCALE) ; 
 Wevalinvn  =	(80.0 * LSCALE) ; 

 Wcompn	  =	(20.0 * LSCALE) ; 
 Wcompp	  =	(30.0 * LSCALE) ; 
 Wcomppreequ   = (40.0 * LSCALE) ; 
 Wmuxdrv12n  =	(30.0 * LSCALE) ; 
 Wmuxdrv12p  =	(50.0 * LSCALE) ; 
 WmuxdrvNANDn  = (20.0 * LSCALE) ; 
 WmuxdrvNANDp  = (80.0 * LSCALE) ; 
 WmuxdrvNORn  =	(60.0 * LSCALE) ; 
 WmuxdrvNORp =	(80.0 * LSCALE) ; 
 Wmuxdrv3n   = (200.0 * LSCALE) ; 
 Wmuxdrv3p   = (480.0 * LSCALE) ; 
 Woutdrvseln   = (12.0 * LSCALE) ; 
 Woutdrvselp   = (20.0 * LSCALE) ; 
 Woutdrvnandn   = (24.0 * LSCALE) ; 
 Woutdrvnandp   = (10.0 * LSCALE) ; 
 Woutdrvnorn   = (6.0 * LSCALE) ; 
 Woutdrvnorp   = (40.0 * LSCALE) ; 
 Woutdrivern   = (48.0 * LSCALE) ; 
 Woutdriverp   = (80.0 * LSCALE) ; 

 Wcompcellpd2  = (2.4 * LSCALE) ; 
 Wcompdrivern  = (400.0 * LSCALE) ; 
 Wcompdriverp  = (800.0 * LSCALE) ; 
 Wcomparen2    = (40.0 * LSCALE) ; 
 Wcomparen1    = (20.0 * LSCALE) ; 
 Wmatchpchg    = (10.0 * LSCALE) ; 
 Wmatchinvn    = (10.0 * LSCALE) ; 
 Wmatchinvp    = (20.0 * LSCALE) ; 
 Wmatchnandn   = (20.0 * LSCALE) ; 
 Wmatchnandp   = (10.0 * LSCALE) ; 
 Wmatchnorn   = (20.0 * LSCALE) ; 
 Wmatchnorp   = (10.0 * LSCALE) ; 

 WSelORn       = (10.0 * LSCALE) ; 
 WSelORprequ   = (40.0 * LSCALE) ; 
 WSelPn        = (10.0 * LSCALE) ; 
 WSelPp        = (15.0 * LSCALE) ; 
 WSelEnn       = (5.0 * LSCALE) ; 
 WSelEnp       = (10.0 * LSCALE) ; 

 Wsenseextdrv1p =  (40.0*LSCALE) ; 
 Wsenseextdrv1n  = (24.0*LSCALE) ; 
 Wsenseextdrv2p  = (200.0*LSCALE) ; 
 Wsenseextdrv2n  = (120.0*LSCALE) ; 


/* bit width of RAM cell in um */
 BitWidth   = (16.0 * LSCALE) ; 

/* bit height of RAM cell in um */
 BitHeight   = (16.0 * LSCALE) ; 

 Cout	   = (0.5e-12 * LSCALE) ; 

/* Sizing of cells and spacings */
 RatCellHeight  = (40.0 * LSCALE) ; 
 RatCellWidth   = (70.0 * LSCALE) ; 
 RatShiftRegWidth = (120.0 * LSCALE) ; 
 RatNumShift    =  4;
 BitlineSpacing = (6.0 * LSCALE) ; 
 WordlineSpacing = (6.0 * LSCALE) ; 

 RegCellHeight  = (16.0 * LSCALE) ; 
 RegCellWidth   = (8.0  * LSCALE) ; 

 CamCellHeight  = (40.0 * LSCALE) ; 
 CamCellWidth   = (25.0 * LSCALE) ; 
 MatchlineSpacing =  (6.0 * LSCALE) ; 
 TaglineSpacing = (6.0 * LSCALE) ; 

/*===================================================================*/

/* ALU POWER NUMBERS for .18um 733Mhz */
/* normalize to cap from W */
 NORMALIZE_SCALE  = (1.0/(733.0e6*1.45*1.45)) ; 
/* normalize .18um cap to other gen's cap, then xPowerfactor */
 POWER_SCALE  = (GEN_POWER_SCALE * NORMALIZE_SCALE * Powerfactor) ; 
 I_ADD        = ((.37 - .091) * POWER_SCALE) ; 
 I_ADD32      = (((.37 - .091)/2)  *POWER_SCALE) ; 
 I_MULT16     = ((.31-.095)*POWER_SCALE) ; 
 I_SHIFT      = ((.21-.089)*POWER_SCALE) ; 
 I_LOGIC      = ((.04-.015)*POWER_SCALE) ; 
 F_ADD        = ((1.307-.452)*POWER_SCALE) ; 
 F_MULT       = ((1.307-.452)*POWER_SCALE) ; 

 I_ADD_CLOCK  = (.091*POWER_SCALE) ; 
 I_MULT_CLOCK = (.095*POWER_SCALE) ; 
 I_SHIFT_CLOCK = (.089*POWER_SCALE) ; 
 I_LOGIC_CLOCK = (.015*POWER_SCALE) ; 
 F_ADD_CLOCK  = (.452*POWER_SCALE) ; 
 F_MULT_CLOCK = (.452*POWER_SCALE) ; 
}


void  power_reg_options(struct opt_odb_t *odb)
{
/* HotLeakage */    
/* HotLeakage  options */
 opt_reg_string(odb, "-technology",
		 "technology length i.e., {TECH_180, TECH_130, ,TECH_070, |none}",
		 &TECH_FACTOR, "TECH_070",
		 /* print */TRUE, NULL);
}







