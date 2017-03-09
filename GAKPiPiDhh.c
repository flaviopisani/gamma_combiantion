/*
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
*/

//TVectorD GAKPiPiDhh_x_stat_err(6);
GAKPiPiDhh_x_stat_err(0)                = r_CP_DKPiPi_stat_err;
GAKPiPiDhh_x_stat_err(1)                = a_fav_DKPiPi_KPi_stat_err;
GAKPiPiDhh_x_stat_err(2)                = a_CP_DKPiPi_KK_stat_err;
GAKPiPiDhh_x_stat_err(3)                = a_CP_DKPiPi_PiPi_stat_err;
GAKPiPiDhh_x_stat_err(4)                = r_plus_DKPiPi_KPi_stat_err;
GAKPiPiDhh_x_stat_err(5)                = r_minus_DKPiPi_KPi_stat_err;

//TVectorD GAKPiPiDhh_x_syst_err(6);
GAKPiPiDhh_x_syst_err(0)                = r_CP_DKPiPi_syst_err;
GAKPiPiDhh_x_syst_err(1)                = a_fav_DKPiPi_KPi_syst_err;
GAKPiPiDhh_x_syst_err(2)                = a_CP_DKPiPi_KK_syst_err;
GAKPiPiDhh_x_syst_err(3)                = a_CP_DKPiPi_PiPi_syst_err;
GAKPiPiDhh_x_syst_err(4)                = r_plus_DKPiPi_KPi_syst_err;
GAKPiPiDhh_x_syst_err(5)                = r_minus_DKPiPi_KPi_syst_err;


//TVectorD GAKPiPiDhh_x_err(6);
GAKPiPiDhh_x_err(0)                = sqrt( GAKPiPiDhh_x_stat_err(0) * GAKPiPiDhh_x_stat_err(0) + GAKPiPiDhh_x_syst_err(0) * GAKPiPiDhh_x_syst_err(0) );
GAKPiPiDhh_x_err(1)                = sqrt( GAKPiPiDhh_x_stat_err(1) * GAKPiPiDhh_x_stat_err(1) + GAKPiPiDhh_x_syst_err(1) * GAKPiPiDhh_x_syst_err(1) );
GAKPiPiDhh_x_err(2)                = sqrt( GAKPiPiDhh_x_stat_err(2) * GAKPiPiDhh_x_stat_err(2) + GAKPiPiDhh_x_syst_err(2) * GAKPiPiDhh_x_syst_err(2) );
GAKPiPiDhh_x_err(3)                = sqrt( GAKPiPiDhh_x_stat_err(3) * GAKPiPiDhh_x_stat_err(3) + GAKPiPiDhh_x_syst_err(3) * GAKPiPiDhh_x_syst_err(3) );
GAKPiPiDhh_x_err(4)                = sqrt( GAKPiPiDhh_x_stat_err(4) * GAKPiPiDhh_x_stat_err(4) + GAKPiPiDhh_x_syst_err(4) * GAKPiPiDhh_x_syst_err(4) );
GAKPiPiDhh_x_err(5)                = sqrt( GAKPiPiDhh_x_stat_err(5) * GAKPiPiDhh_x_stat_err(5) + GAKPiPiDhh_x_syst_err(5) * GAKPiPiDhh_x_syst_err(5) );
