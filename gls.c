/*
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
*/


//TVectorD GLS_x_stat_err(3);
GLS_x_stat_err(0)        = r_DK_fos_Ks_KPi_stat_err;
GLS_x_stat_err(1)        = a_fav_DK_KsKPi_stat_err;
GLS_x_stat_err(2)        = a_sup_DK_KsKPi_stat_err;

//TVectorD GLS_x_syst_err(3);
GLS_x_syst_err(0)        = r_DK_fos_Ks_KPi_syst_err;
GLS_x_syst_err(1)        = a_fav_DK_KsKPi_syst_err;
GLS_x_syst_err(2)        = a_sup_DK_KsKPi_syst_err;


//TVectorD GLS_x_err(3);
GLS_x_err(0)                = sqrt( GLS_x_stat_err(0) * GLS_x_stat_err(0) + GLS_x_syst_err(0) * GLS_x_syst_err(0) );
GLS_x_err(1)                = sqrt( GLS_x_stat_err(1) * GLS_x_stat_err(1) + GLS_x_syst_err(1) * GLS_x_syst_err(1) );
GLS_x_err(2)                = sqrt( GLS_x_stat_err(2) * GLS_x_stat_err(2) + GLS_x_syst_err(2) * GLS_x_syst_err(2) );
