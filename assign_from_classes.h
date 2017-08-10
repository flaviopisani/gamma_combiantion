#ifndef ASSIGN_FROM_CLASSES_H
#define ASSIGN_FROM_CLASSES_H

#include <measures_classes.h>
#include "TMatrixDSym.h"
#include "TVectorD.h"


extern double a_ADS_K_KPi;//       = -0.40267; // A_{ADS(K)}^{KPi}
extern double a_CP_DK_KK;//        = 0.08658; // A_CP^{DK,KPi}
extern double a_CP_DK_PiPi;//      = 0.12760; // A_CP^{DK,PiPi}
extern double a_fav_DK_KPi;//      = -0.01944; // A_{fav}^{DK,KPi}
extern double r_ADS_K_KPi;//       = 0.01876; // R_{ADS}^{KPi}
extern double r_CP_KK;//           = 0.96834; // R_{CP}^{KK}
extern double r_CP_PiPi;//         = 1.00220; // R_{CP}^{PiPi}

extern double a_ADS_K_KPi_stat_err;//   = 0.05620;
extern double a_CP_DK_KK_stat_err;//    = 0.02020;
extern double a_CP_DK_PiPi_stat_err;//  = 0.03690;
extern double a_fav_DK_KPi_stat_err;// = 0.00718;
extern double r_ADS_K_KPi_stat_err;//   = 0.00114;
extern double r_CP_KK_stat_err;//      = 0.02170;
extern double r_CP_PiPi_stat_err;//    = 0.04000;

extern double a_ADS_K_KPi_syst_err;//    = 0.01060;
extern double a_CP_DK_KK_syst_err;//     = 0.00810;
extern double a_CP_DK_PiPi_syst_err;//   = 0.01200;
extern double a_fav_DK_KPi_syst_err;//   = 0.00600;
extern double r_ADS_K_KPi_syst_err;//    = 0.00100;
extern double r_CP_KK_syst_err;//        = 0.02100;
extern double r_CP_PiPi_syst_err;//      = 0.02600;


extern TMatrixDSym corStatGAhh;
extern TMatrixDSym corSystGAhh;

// GGSZ

extern double x_minus;//          = 0.025;
extern  double y_minus;//          = 0.075;
extern  double x_plus;//           =-0.077;
extern  double y_plus;//           =-0.022;

extern double x_minus_stat_err;//      = 0.025;  
extern double x_minus_syst_err;//      = 0.01118;
extern double y_minus_stat_err;//      = 0.029;  
extern double y_minus_syst_err;//      = 0.01487;
extern double x_plus_stat_err;//       = 0.024;  
extern  double x_plus_syst_err;//       = 0.01077;
extern double y_plus_stat_err;//       = 0.025;  
extern double y_plus_syst_err;//       = 0.01077;

extern TMatrixDSym corrStatGGSZ;
extern TMatrixDSym corrSystGGSZ;




// GGSZ DKPi

extern double x_DKPi_minus   ;//       = -0.02;
extern double y_DKPi_minus     ;//     = -0.35;
extern double x_DKPi_plus      ;//     =  0.04;
extern double y_DKPi_plus      ;//     = -0.47;

extern double x_DKPi_minus_stat_err;//      = 0.13;  
extern double x_DKPi_minus_syst_err;//      = 0.14;
extern double y_DKPi_minus_stat_err   ;//   = 0.26;
extern double y_DKPi_minus_syst_err;//      = 0.41;
extern double x_DKPi_plus_stat_err    ;//   = 0.16;  
extern double x_DKPi_plus_syst_err;//       = 0.11;
extern double y_DKPi_plus_stat_err    ;//   = 0.28;  
extern double y_DKPi_plus_syst_err ;//      = 0.22;


extern TMatrixDSym corrStatGGSZDKPi;
extern TMatrixDSym corrSystGGSZDKPi;

// GGSZ DKstar0

extern double x_DKstar0_minus    ;//      = -0.15;
extern double y_DKstar0_minus       ;//   =  0.25;
extern double x_DKstar0_plus       ;//    =  0.05;
extern double y_DKstar0_plus        ;//   = -0.65;

extern double x_DKstar0_minus_stat_err ;//     = 0.14;  
extern double x_DKstar0_minus_syst_err;//      = 0.027;
extern double y_DKstar0_minus_stat_err   ;//   = 0.15;  
extern double y_DKstar0_minus_syst_err ;//     = 0.056;
extern double x_DKstar0_plus_stat_err  ;//     = 0.24;  
extern double x_DKstar0_plus_syst_err   ;//    = 0.040;
extern double y_DKstar0_plus_stat_err  ;//     = 0.24;  
extern double y_DKstar0_plus_syst_err  ;//     = 0.078;

extern TMatrixDSym corrStatGGSZDKstar0;
extern TMatrixDSym corrSystGGSZDKstar0;

// GAhhhh

extern double a_ADS_K_K3Pi;//  = -0.31291; // A_{ADS(K)}^{KPiPiPi}
extern double a_CP_DK_4Pi ;//  =  0.10035; // A_{CP}^{4Pi}
extern double a_fav_DK_K3Pi ;//= -0.00042; // A_{fav}^{DK,K3Pi}
extern double r_ADS_K_K3Pi  ;//=  0.01399; // R_{ADS(K)}^{KPiPiPi}
extern double r_CP_4Pi      ;//=  0.97540; // R_{CP}^{4Pi}

extern double a_ADS_K_K3Pi_stat_err;//      = 0.10200;
extern double a_CP_DK_4Pi_stat_err    ;//   = 0.03360;
extern double a_fav_DK_K3Pi_stat_err  ;//   = 0.01190;
extern double r_ADS_K_K3Pi_stat_err   ;//   = 0.00149;
extern double r_CP_4Pi_stat_err       ;//   = 0.03670;

//double a_ADS_K_K3Pi_syst_err      = 0.01500;
//double a_CP_DK_4Pi_syst_err       = 0.00790;
//double a_fav_DK_K3Pi_syst_err     = 0.00300;
//double r_ADS_K_K3Pi_syst_err      = 0.00041;
//double r_CP_4Pi_syst_err          = 0.01000;

extern double a_ADS_K_K3Pi_syst_err   ;//   = 0.038;
extern double a_CP_DK_4Pi_syst_err    ;//   = 0.018;
extern double a_fav_DK_K3Pi_syst_err  ;//   = 0.002;
extern double r_ADS_K_K3Pi_syst_err   ;//   = 0.0006;
extern double r_CP_4Pi_syst_err       ;//   = 0.019;

extern TMatrixDSym corStatGAhhhh;
extern TMatrixDSym corSystGAhhhh;



// ADhhpi0

extern double a_ADS_DK_KPiPi0 ;//  = -0.20000; // A_{ADS(K)}^{KPi}
extern double a_CP_DK_KKPi0 ;//   =  0.30000; // A_CP^{DK,KPi}
extern double a_CP_DK_PiPiPi0  ;//=  0.05400; // A_CP^{DK,PiPi}
extern double a_fav_DK_KPiPi0 ;// =  0.01000; // A_{fav}^{DK,KPi}
extern double r_ADS_DK_KPiPi0   ;//=  0.01400; // R_{ADS}^{KPi}
extern double r_CP_KKPi0       ;//=  0.95000; // R_{CP}^{KK}
extern double r_CP_PiPiPi0     ;//=  0.98000; // R_{CP}^{PiPi}

extern double a_ADS_DK_KPiPi0_stat_err ;//      = 0.27000;
extern double a_CP_DK_KKPi0_stat_err      ;//  = 0.20000;
extern double a_CP_DK_PiPiPi0_stat_err    ;//  = 0.09100;
extern double a_fav_DK_KPiPi0_stat_err    ;//  = 0.02600;
extern double r_ADS_DK_KPiPi0_stat_err    ;//   = 0.00470;
extern double r_CP_KKPi0_stat_err         ;//  = 0.22000;
extern double r_CP_PiPiPi0_stat_err       ;//  = 0.11000;

extern double a_ADS_DK_KPiPi0_syst_err    ;//   = 0.04000;
extern double a_CP_DK_KKPi0_syst_err      ;//  = 0.02000;
extern double a_CP_DK_PiPiPi0_syst_err    ;//  = 0.01100;
extern double a_fav_DK_KPiPi0_syst_err    ;//  = 0.00500;
extern double r_ADS_DK_KPiPi0_syst_err    ;//   = 0.00210;
extern double r_CP_KKPi0_syst_err         ;//  = 0.05000;
extern double r_CP_PiPiPi0_syst_err       ;//  = 0.05000;

extern TMatrixDSym corStatADhhpi0;
extern TMatrixDSym corSystADhhpi0;



// BsDsK

extern double C              ;//  =  0.526386;
extern double D_f             ;// = -0.369634;
extern double D_bar_f         ;// = -0.203693;
extern double S_f              ;//= -1.08902;
extern double S_bar_f         ;// =  0.356743;

extern double C_stat_err     ;//       = 0.24546;
extern double D_f_stat_err   ;//       = 0.42274;
extern double D_bar_f_stat_err;//      = 0.41397;
extern double S_f_stat_err       ;//   = 0.33309;
extern double S_bar_f_stat_err   ;//   = 0.33495;

extern double C_syst_err         ;//   = 0.04590;
extern double D_f_syst_err       ;//   = 0.19700;
extern double D_bar_f_syst_err   ;//   = 0.19457;
extern double S_f_syst_err       ;//   = 0.07794;
extern double S_bar_f_syst_err   ;//   = 0.07570;

extern TMatrixDSym corStatBsDsK;
extern TMatrixDSym corSystBsDsK;



// GBDstarKp

extern double a_fav_D_gamma;
extern double a_fav_D_Pi0;
extern double a_CP_D_gamma;
extern double a_CP_D_Pi0;
extern double r_CP_D_gamma;
extern double r_CP_D_Pi0;

extern double a_fav_D_gamma_stat;
extern double a_fav_D_Pi0_stat;
extern double a_CP_D_gamma_stat;
extern double a_CP_D_Pi0_stat;
extern double r_CP_D_gamma_stat;
extern double r_CP_D_Pi0_stat;

extern double a_fav_D_gamma_syst;
extern double a_fav_D_Pi0_syst;
extern double a_CP_D_gamma_syst;
extern double a_CP_D_Pi0_syst;
extern double r_CP_D_gamma_syst;
extern double r_CP_D_Pi0_syst;

extern TMatrixDSym corStatGBDstarKp; 
extern TMatrixDSym corSystGBDstarKp;



//GABDKstarp

extern double a_fav_DKstarp_KPi;
extern double a_CP_DKstarp_KK;
extern double a_CP_DKstarp_PiPi;
extern double r_CP_DKstarp_KK;
extern double r_CP_DKstarp_PiPi;
extern double r_plus_DKstarp_KPi;
extern double r_minus_DKstarp_KPi;

extern double a_fav_DKstarp_KPi_stat;
extern double a_CP_DKstarp_KK_stat;
extern double a_CP_DKstarp_PiPi_stat;
extern double r_CP_DKstarp_KK_stat;
extern double r_CP_DKstarp_PiPi_stat;
extern double r_plus_DKstarp_KPi_stat;
extern double r_minus_DKstarp_KPi_stat;

extern double a_fav_DKstarp_KPi_syst;
extern double a_CP_DKstarp_KK_syst;
extern double a_CP_DKstarp_PiPi_syst;
extern double r_CP_DKstarp_KK_syst;
extern double r_CP_DKstarp_PiPi_syst;
extern double r_plus_DKstarp_KPi_syst;
extern double r_minus_DKstarp_KPi_syst;



extern TMatrixDSym corStatGABDKstarp; 
extern TMatrixDSym corSystGABDKstarp;




// GAKPiPiDhh

extern double r_CP_DKPiPi      ;//=  1.040; // R_{CP}^{DKPiPi}
extern double a_fav_DKPiPi_KPi ;//=  0.013; // A_{fav}_{DKPiPi,KPi}
extern double a_CP_DKPiPi_KK   ;//= -0.045; // A_{CP}^{DKPiPi,KK}
extern double a_CP_DKPiPi_PiPi ;//= -0.054; // A_{CP}^{DKPiPi,PiPi}
extern double r_plus_DKPiPi_KPi;//=  0.0107; // R_{plus}^{DKPiPi,KPi}
extern double r_minus_DKPiPi_KPi;//= 0.0053; // R_{minus}^{DKPiPi,KPi}
//
extern double r_CP_DKPiPi_stat_err ;//         = 0.064;
extern double a_fav_DKPiPi_KPi_stat_err;//     = 0.019;
extern double a_CP_DKPiPi_KK_stat_err     ;//  = 0.064;
extern double a_CP_DKPiPi_PiPi_stat_err  ;//   = 0.101;
extern double r_plus_DKPiPi_KPi_stat_err  ;//  = 0.006;
extern double r_minus_DKPiPi_KPi_stat_err  ;// = 0.0045;


extern double r_CP_DKPiPi_syst_err         ;// = 0.00000;
extern double a_fav_DKPiPi_KPi_syst_err   ;//  = 0.013;
extern double a_CP_DKPiPi_KK_syst_err    ;//   = 0.011;
extern double a_CP_DKPiPi_PiPi_syst_err  ;//   = 0.011;
extern double r_plus_DKPiPi_KPi_syst_err  ;//  = 0.0011;
extern double r_minus_DKPiPi_KPi_syst_err  ;// = 0.0006;



// GSL

extern double r_DK_fos_Ks_KPi ;// = 3.855; // R_{DK,fav/sup}^{KsKPi}
extern double a_fav_DK_KsKPi  ;// = 0.026; // A_{DK,fav}^{KsKPi}
extern double a_sup_DK_KsKPi  ;// = 0.336; // A_{DK,sup}^{KsKPi}
//
extern double r_DK_fos_Ks_KPi_stat_err ;//     = 0.961;
extern double a_fav_DK_KsKPi_stat_err   ;//    = 0.109;
extern double a_sup_DK_KsKPi_stat_err   ;//    = 0.208;

extern double r_DK_fos_Ks_KPi_syst_err   ;//   = 0.060;
extern double a_fav_DK_KsKPi_syst_err    ;//   = 0.029;
extern double a_sup_DK_KsKPi_syst_err    ;//   = 0.026;









void assign_from_classes (char* );






#endif
