TString mode_to_str[NMODE];
TString var_to_str[N1DPLOT];
double x_min[N1DPLOT], x_max[N1DPLOT];



double gamma_range[2]             = {x_min[13]   ,x_max[13]};   //13 gamma
double delta_B_DK_range[2]        = {x_min[9]    ,x_max[9]};     //9 delta_B_DK
double r_B_DsK_range[2]           = {x_min[19]   ,x_max[19]};    //19 r_B_DsK
double delta_Bs_DsK_range[2]      = {x_min[12]   ,x_max[12]};    //12 delta_Bs_DsK
double r_B_DK_range[2]            = {x_min[25]   ,x_max[25]};    //25 r_B_DK
double r_B_DKPiPi_range[2]        = {x_min[26]   ,x_max[26]};    //26 r_B_DKPiPi
double delta_B_DKPiPi_range[2]    = {x_min[10]   ,x_max[10]};    //10 delta_B_DKPiPi
double r_B_DKstar0_range[2]       = {x_min[18]   ,x_max[18]};    //18 k_B_DKstar0
double delta_B_DKstar0_range[2]   = {x_min[11]   ,x_max[11]};   //11 delta_B_DKstar0
double k_B_DKPiPi_range[2]        = {x_min[17]   ,x_max[17]};   //17 k_B_DKPiPi


// HFAG
TVectorD HFAG_x_obs(6);
TVectorD HFAG_x_err(6);
TMatrixDSym HFAG_x_cor(6);
TMatrixDSym HFAG_x_covI(6);
// CLEO 6D 
TVectorD CLEO_x_obs(6);
TVectorD CLEO_x_err(6);
TMatrixDSym CLEO_x_cor(6);
TMatrixDSym CLEO_x_covI(6);
// GAhh

double a_ADS_K_KPi;//       = -0.40267; // A_{ADS(K)}^{KPi}
double a_CP_DK_KK;//        = 0.08658; // A_CP^{DK,KPi}
double a_CP_DK_PiPi;//      = 0.12760; // A_CP^{DK,PiPi}
double a_fav_DK_KPi;//      = -0.01944; // A_{fav}^{DK,KPi}
double r_ADS_K_KPi;//       = 0.01876; // R_{ADS}^{KPi}
double r_CP_KK;//           = 0.96834; // R_{CP}^{KK}
double r_CP_PiPi;//         = 1.00220; // R_{CP}^{PiPi}

double a_ADS_K_KPi_stat_err;//   = 0.05620;
double a_CP_DK_KK_stat_err;//    = 0.02020;
double a_CP_DK_PiPi_stat_err;//  = 0.03690;
double a_fav_DK_KPi_stat_err;// = 0.00718;
double r_ADS_K_KPi_stat_err;//   = 0.00114;
double r_CP_KK_stat_err;//      = 0.02170;
double r_CP_PiPi_stat_err;//    = 0.04000;

double a_ADS_K_KPi_syst_err;//    = 0.01060;
double a_CP_DK_KK_syst_err;//     = 0.00810;
double a_CP_DK_PiPi_syst_err;//   = 0.01200;
double a_fav_DK_KPi_syst_err;//   = 0.00600;
double r_ADS_K_KPi_syst_err;//    = 0.00100;
double r_CP_KK_syst_err;//        = 0.02100;
double r_CP_PiPi_syst_err;//      = 0.02600;

TVectorD GAhh_x_stat_err(7), GAhh_x_syst_err(7), GAhh_x_err(7);
TMatrixDSym corStatGAhh(7), corSystGAhh(7), covStatGAhh(7),covSystGAhh(7),covGAhh(7),corGAhh(7);

// GGSZ

 double x_minus;//          = 0.025;
 double y_minus;//          = 0.075;
 double x_plus;//           =-0.077;
 double y_plus;//           =-0.022;

 double x_minus_stat_err;//      = 0.025;  
 double x_minus_syst_err;//      = 0.01118;
 double y_minus_stat_err;//      = 0.029;  
 double y_minus_syst_err;//      = 0.01487;
 double x_plus_stat_err;//       = 0.024;  
 double x_plus_syst_err;//       = 0.01077;
 double y_plus_stat_err;//       = 0.025;  
 double y_plus_syst_err;//       = 0.01077;

TMatrixDSym corrStatGGSZ(4), corrSystGGSZ(4);



TVectorD ggsz_x_stat_err(4), ggsz_x_syst_err(4), ggsz_x_err(4);
TMatrixDSym covStatGGSZ(4),covSystGGSZ(4),covGGSZ(4),corGGSZ(4);


// GGSZ DKPi

double x_DKPi_minus          = -0.02;
double y_DKPi_minus          = -0.35;
double x_DKPi_plus           =  0.04;
double y_DKPi_plus           = -0.47;

double x_DKPi_minus_stat_err      = 0.13;  double x_DKPi_minus_syst_err      = 0.14;
double y_DKPi_minus_stat_err      = 0.26;  double y_DKPi_minus_syst_err      = 0.41;
double x_DKPi_plus_stat_err       = 0.16;  double x_DKPi_plus_syst_err       = 0.11;
double y_DKPi_plus_stat_err       = 0.28;  double y_DKPi_plus_syst_err       = 0.22;

TVectorD ggsz_DKPi_x_stat_err(4), ggsz_DKPi_x_syst_err(4), ggsz_DKPi_x_err(4);
TMatrixDSym corrStatGGSZDKPi(4), corrSystGGSZDKPi(4), covStatGGSZDKPi(4),covSystGGSZDKPi(4),covGGSZDKPi(4),corGGSZDKPi(4);

// GGSZ DKstar0

double x_DKstar0_minus          = -0.15;
double y_DKstar0_minus          =  0.25;
double x_DKstar0_plus           =  0.05;
double y_DKstar0_plus           = -0.65;

double x_DKstar0_minus_stat_err      = 0.14;  double x_DKstar0_minus_syst_err      = 0.027;
double y_DKstar0_minus_stat_err      = 0.15;  double y_DKstar0_minus_syst_err      = 0.056;
double x_DKstar0_plus_stat_err       = 0.24;  double x_DKstar0_plus_syst_err       = 0.040;
double y_DKstar0_plus_stat_err       = 0.24;  double y_DKstar0_plus_syst_err       = 0.078;

TVectorD ggsz_DKstar0_x_stat_err(4), ggsz_DKstar0_x_syst_err(4), ggsz_DKstar0_x_err(4);
TMatrixDSym corrStatGGSZDKstar0(4), corrSystGGSZDKstar0(4), covStatGGSZDKstar0(4),covSystGGSZDKstar0(4),covGGSZDKstar0(4),corGGSZDKstar0(4);

// GAhhhh

double a_ADS_K_K3Pi;//  = -0.31291; // A_{ADS(K)}^{KPiPiPi}
double a_CP_DK_4Pi ;//  =  0.10035; // A_{CP}^{4Pi}
double a_fav_DK_K3Pi ;//= -0.00042; // A_{fav}^{DK,K3Pi}
double r_ADS_K_K3Pi  ;//=  0.01399; // R_{ADS(K)}^{KPiPiPi}
double r_CP_4Pi      ;//=  0.97540; // R_{CP}^{4Pi}

double a_ADS_K_K3Pi_stat_err;//      = 0.10200;
double a_CP_DK_4Pi_stat_err    ;//   = 0.03360;
double a_fav_DK_K3Pi_stat_err  ;//   = 0.01190;
double r_ADS_K_K3Pi_stat_err   ;//   = 0.00149;
double r_CP_4Pi_stat_err       ;//   = 0.03670;

//double a_ADS_K_K3Pi_syst_err      = 0.01500;
//double a_CP_DK_4Pi_syst_err       = 0.00790;
//double a_fav_DK_K3Pi_syst_err     = 0.00300;
//double r_ADS_K_K3Pi_syst_err      = 0.00041;
//double r_CP_4Pi_syst_err          = 0.01000;

double a_ADS_K_K3Pi_syst_err   ;//   = 0.038;
double a_CP_DK_4Pi_syst_err    ;//   = 0.018;
double a_fav_DK_K3Pi_syst_err  ;//   = 0.002;
double r_ADS_K_K3Pi_syst_err   ;//   = 0.0006;
double r_CP_4Pi_syst_err       ;//   = 0.019;

TVectorD GAhhhh_x_stat_err(5),GAhhhh_x_syst_err(5),GAhhhh_x_err(5);
TMatrixDSym corStatGAhhhh(5),corSystGAhhhh(5),covStatGAhhhh(5),covSystGAhhhh(5),covGAhhhh(5),corGAhhhh(5);



// ADhhpi0

double a_ADS_DK_KPiPi0 ;//  = -0.20000; // A_{ADS(K)}^{KPi}
double a_CP_DK_KKPi0 ;//   =  0.30000; // A_CP^{DK,KPi}
double a_CP_DK_PiPiPi0  ;//=  0.05400; // A_CP^{DK,PiPi}
double a_fav_DK_KPiPi0 ;// =  0.01000; // A_{fav}^{DK,KPi}
double r_ADS_DK_KPiPi0   ;//=  0.01400; // R_{ADS}^{KPi}
double r_CP_KKPi0       ;//=  0.95000; // R_{CP}^{KK}
double r_CP_PiPiPi0     ;//=  0.98000; // R_{CP}^{PiPi}

double a_ADS_DK_KPiPi0_stat_err ;//      = 0.27000;
double a_CP_DK_KKPi0_stat_err      ;//  = 0.20000;
double a_CP_DK_PiPiPi0_stat_err    ;//  = 0.09100;
double a_fav_DK_KPiPi0_stat_err    ;//  = 0.02600;
double r_ADS_DK_KPiPi0_stat_err    ;//   = 0.00470;
double r_CP_KKPi0_stat_err         ;//  = 0.22000;
double r_CP_PiPiPi0_stat_err       ;//  = 0.11000;

double a_ADS_DK_KPiPi0_syst_err    ;//   = 0.04000;
double a_CP_DK_KKPi0_syst_err      ;//  = 0.02000;
double a_CP_DK_PiPiPi0_syst_err    ;//  = 0.01100;
double a_fav_DK_KPiPi0_syst_err    ;//  = 0.00500;
double r_ADS_DK_KPiPi0_syst_err    ;//   = 0.00210;
double r_CP_KKPi0_syst_err         ;//  = 0.05000;
double r_CP_PiPiPi0_syst_err       ;//  = 0.05000;

TVectorD ADhhpi0_x_stat_err(7),ADhhpi0_x_syst_err(7),ADhhpi0_x_err(7);
TMatrixDSym corStatADhhpi0(7),corSystADhhpi0(7),covStatADhhpi0(7),covSystADhhpi0(7),covADhhpi0(7),corADhhpi0(7);

// GSL

double r_DK_fos_Ks_KPi  = 3.85500; // R_{DK,fav/sup}^{KsKPi}
double a_fav_DK_KsKPi   = 0.02600; // A_{DK,fav}^{KsKPi}
double a_sup_DK_KsKPi   = 0.33600; // A_{DK,sup}^{KsKPi}
//
double r_DK_fos_Ks_KPi_stat_err      = 0.96100;
double a_fav_DK_KsKPi_stat_err       = 0.10900;
double a_sup_DK_KsKPi_stat_err       = 0.20800;

double r_DK_fos_Ks_KPi_syst_err      = 0.06000;
double a_fav_DK_KsKPi_syst_err       = 0.02900;
double a_sup_DK_KsKPi_syst_err       = 0.02600;

TVectorD GLS_x_stat_err(3),GLS_x_syst_err(3),GLS_x_err(3);

double r_CP_DKPiPi      =  1.04000; // R_{CP}^{DKPiPi}
double a_fav_DKPiPi_KPi =  0.01300; // A_{fav}_{DKPiPi,KPi}
double a_CP_DKPiPi_KK   = -0.04500; // A_{CP}^{DKPiPi,KK}
double a_CP_DKPiPi_PiPi = -0.05400; // A_{CP}^{DKPiPi,PiPi}
double r_plus_DKPiPi_KPi=  0.01070; // R_{plus}^{DKPiPi,KPi}
double r_minus_DKPiPi_KPi= 0.00530; // R_{minus}^{DKPiPi,KPi}
//
double r_CP_DKPiPi_stat_err          = 0.06400;
double a_fav_DKPiPi_KPi_stat_err     = 0.01900;
double a_CP_DKPiPi_KK_stat_err       = 0.06400;
double a_CP_DKPiPi_PiPi_stat_err     = 0.10100;
double r_plus_DKPiPi_KPi_stat_err    = 0.00600;
double r_minus_DKPiPi_KPi_stat_err   = 0.00450;


double r_CP_DKPiPi_syst_err          = 0.00000;
double a_fav_DKPiPi_KPi_syst_err     = 0.01300;
double a_CP_DKPiPi_KK_syst_err       = 0.01100;
double a_CP_DKPiPi_PiPi_syst_err     = 0.01100;
double r_plus_DKPiPi_KPi_syst_err    = 0.00110;
double r_minus_DKPiPi_KPi_syst_err   = 0.00060;


TVectorD GAKPiPiDhh_x_stat_err(6), GAKPiPiDhh_x_syst_err(6), GAKPiPiDhh_x_err(6);

// BsDsK

double C                =  0.526386;
double D_f              = -0.369634;
double D_bar_f          = -0.203693;
double S_f              = -1.08902;
double S_bar_f          =  0.356743;

double C_stat_err            = 0.24546;
double D_f_stat_err          = 0.42274;
double D_bar_f_stat_err      = 0.41397;
double S_f_stat_err          = 0.33309;
double S_bar_f_stat_err      = 0.33495;

double C_syst_err            = 0.04590;
double D_f_syst_err          = 0.19700;
double D_bar_f_syst_err      = 0.19457;
double S_f_syst_err          = 0.07794;
double S_bar_f_syst_err      = 0.07570;

TVectorD BsDsK_x_stat_err(5), BsDsK_x_syst_err(5),BsDsK_x_err(5);
TMatrixDSym corStatBsDsK(5),corSystBsDsK(5),covStatBsDsK(5),covSystBsDsK(5),covBsDsK(5),corBsDsK(5);

// GABKStar 

double fk_B_DKstar0     = 0.958;
double fk_B_DKstar0_err = sqrt(0.0075*0.0075 + 0.024*0.024);

double fR_B_DKstar0     = 1.02;
double fR_B_DKstar0_err = sqrt(0.02*0.02 + 0.06*0.06);

double fDelta_B_DKstar0     = 0.02/M_PI*180;
double fDelta_B_DKstar0_err = sqrt(0.025*0.025 + 0.11*0.11)/M_PI*180;



double a_fav_DKstar0_KPi        = -0.03200; // A_fav^{DKstar0,KPi}
double r_plus_DKstar0_KPi       =  0.05700; // R_{plus}^{DK*0,KPi}
double r_minus_DKstar0_KPi      =  0.05600; // R_{minus}^{DK*0,KPi}

double a_fav_DKstar0_KPi_stat_err    = 0.041;
double r_plus_DKstar0_KPi_stat_err   = 0.029;
double r_minus_DKstar0_KPi_stat_err  = 0.032;

double a_fav_DKstar0_KPi_syst_err    = 0.020;
double r_plus_DKstar0_KPi_syst_err   = 0.012;
double r_minus_DKstar0_KPi_syst_err  = 0.012;

TVectorD GABDKstar_x_stat_err(3),GABDKstar_x_syst_err(3),GABDKstar_x_err(3);
TMatrixDSym corStatGABDKstar(3),corSystGABDKstar(3),covStatGABDKstar(3),covSystGABDKstar(3),covGABDKstar(3),corGABDKstar(3);

double fR_WS_D_K3Pi      = 0.00324;
double fR_WS_D_K3Pi_err  = sqrt(0.00008 * 0.00008 + 0.00007 *0.00007);

double fR_D_KsKPi      = 0.356;
double fR_D_KsKPi_err  = sqrt(0.034 * 0.034 + 0.007 * 0.007);

double fR_D_KsKPi_lhcb      = 0.370;
double fR_D_KsKPi_lhcb_err  = sqrt(0.003 * 0.003 + 0.012 * 0.012);

double fR_WS_D_KPiPi0      = 0.00220;
double fR_WS_D_KPiPi0_err  = 0.00010;

double fF_plus_KKPi0     = 0.732;
double fF_plus_KKPi0_err = 0.055;

double fF_plus_PiPiPi0     = 0.973;
double fF_plus_PiPiPi0_err = 0.017;

double fF_PiPiPiPi         = 0.737;
double fF_PiPiPiPi_err     = 0.034;

double fphi_s     = -0.010 * 180./M_PI; // grad
double fphi_s_err = 0.039 * 180./M_PI;  // grad


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// LHCb Charm     ///////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double charmLHCb_K3pi_a    = 0.0573;
double charmLHCb_K3pi_b    = 0.0002;
double charmLHCb_K3pi_c    = 0.000048;

double charmLHCb_K3pi_a_err    = 0.0012;
double charmLHCb_K3pi_b_err    = 0.0019;
double charmLHCb_K3pi_c_err    = 0.000018;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// CLEO KsKPi /////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double fdelta_D_KsKPi     = 26.5;
double fdelta_D_KsKPi_err = 15.8;

double fk_D_KsKPi     = 1.0;
double fk_D_KsKPi_err = 0.16;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Dmix variables     ///////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


double r_B_h           ;
double r_f             ;
double delta_B_h       ;
double delta_f         ;
double k_B_h           ;
double k_f             ;
double g               ;
double Mxy             ;


