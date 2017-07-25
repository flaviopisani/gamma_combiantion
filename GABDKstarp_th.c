/*
var_to_str[34] = "delta_B_DKstar";
var_to_str[35] = "r_B_DKstar";
var_to_str[36] = "k_B_DKstar";

double a_fav_KPi;
double a_CP_KK;
double a_CP_PiPi;
double r_CP_KK;
double r_CP_PiPi;
double r_plus_KPi;
double r_minus_KPi;
*/



double a_fav_DKstarp_KPi_th   = (2. * k_B_DKstar * r_B_DKstar * r_D_KPi * sin((delta_B_DKstar - delta_D_KPi)/180.*M_PI)*sin(gamma/180.*M_PI))/
  (1 + r_B_DKstar * r_B_DKstar * r_D_KPi * r_D_KPi + 2.* k_B_DKstar * r_B_DKstar * r_D_KPi * cos((delta_B_DKstar - delta_D_KPi)/180.*M_PI)*cos(gamma/180.*M_PI));


double a_CP_DKstarp_KK_th    = (2. * k_B_DKstar * r_B_DKstar * sin(delta_B_DKstar/180.*M_PI) * sin(gamma/180.*M_PI))/
  (1. + r_B_DKstar * r_B_DKstar  + 2. * k_B_DKstar * r_B_DKstar * cos(delta_B_DKstar/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_KK;


double a_CP_DKstarp_PiPi_th    = (2. * k_B_DKstar * r_B_DKstar * sin(delta_B_DKstar/180.*M_PI) * sin(gamma/180.*M_PI))/
  (1. + r_B_DKstar * r_B_DKstar  + 2. * k_B_DKstar * r_B_DKstar * cos(delta_B_DKstar/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_PiPi;


double r_CP_DKstarp_KK_th = 1. + r_B_DKstar * r_B_DKstar - 2.* k_B_DKstar * r_B_DKstar * cos(delta_B_DKstar/180.*M_PI) * cos(gamma/180.*M_PI);


double r_CP_DKstarp_PiPi_th = 1. + r_B_DKstar * r_B_DKstar - 2.* k_B_DKstar * r_B_DKstar * cos(delta_B_DKstar/180.*M_PI) * cos(gamma/180.*M_PI);


double r_plus_DKstarp_KPi_th    = (r_B_DKstar * r_B_DKstar + r_D_KPi * r_D_KPi + 2. * k_B_DKstar * r_B_DKstar *  r_D_KPi * cos((delta_B_DKstar + delta_D_KPi + gamma)/180.*M_PI))/
  (1. + r_B_DKstar * r_B_DKstar * r_D_KPi * r_D_KPi + 2. * k_B_DKstar * r_B_DKstar * r_D_KPi * cos((delta_B_DKstar - delta_D_KPi + gamma)/180.*M_PI));


double r_minus_DKstarp_KPi_th   = (r_B_DKstar * r_B_DKstar + r_D_KPi * r_D_KPi + 2. * k_B_DKstar * r_B_DKstar * r_D_KPi * cos((delta_B_DKstar + delta_D_KPi - gamma)/180.*M_PI)) /
  (1. + r_B_DKstar * r_B_DKstar * r_D_KPi * r_D_KPi + 2. * k_B_DKstar * r_B_DKstar * r_D_KPi * cos((delta_B_DKstar - delta_D_KPi - gamma)/180.*M_PI));






///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD GABDKstarp_x_obs_min_x_th(7);
GABDKstarp_x_obs_min_x_th(0)       = a_fav_DKstarp_KPi - a_fav_DKstarp_KPi_th;
GABDKstarp_x_obs_min_x_th(1)       = a_CP_DKstarp_KK - a_CP_DKstarp_KK_th;
GABDKstarp_x_obs_min_x_th(2)       = a_CP_DKstarp_PiPi - a_CP_DKstarp_PiPi_th;
GABDKstarp_x_obs_min_x_th(3)       = r_CP_DKstarp_KK - r_CP_DKstarp_KK_th;
GABDKstarp_x_obs_min_x_th(4)       = r_CP_DKstarp_PiPi - r_CP_DKstarp_PiPi_th;
GABDKstarp_x_obs_min_x_th(5)       = r_plus_DKstarp_KPi - r_plus_DKstarp_KPi_th;
GABDKstarp_x_obs_min_x_th(6)       = r_minus_DKstarp_KPi - r_minus_DKstarp_KPi_th;

TMatrixDSym GABDKstarp_xcovI(7);
for(int i=0; i<7; i++)
  {
    for(int j=0;j<7; j++)
      {
	if(i>j) continue;
	GABDKstarp_xcovI(i,j) = corGABDKstarp(i,j)*GABDKstarp_x_err[i]*GABDKstarp_x_err[j];
	if(i!=j) GABDKstarp_xcovI(j,i) = corGABDKstarp(i,j)*GABDKstarp_x_err[i]*GABDKstarp_x_err[j];

      }
  }
//
GABDKstarp_xcovI.Invert();


