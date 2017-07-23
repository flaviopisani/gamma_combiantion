//var_to_str[32] = "delta_B_DstarK";
//var_to_str[33] = "r_B_DstarK";
/*
double a_fav_D_gamma;
double a_fav_D_Pi0;
double a_CP_D_gamma;
double a_CP_D_Pi0;
double r_CP_D_gamma;
double r_CP_D_Pi0;
*/


double a_fav_D_gamma_th   = (-2. * r_B_DstarK * r_D_KPi * sin((delta_B_DstarK - delta_D_KPi)/180.*M_PI)*sin(gamma/180.*M_PI))/
  (1 + r_B_DstarK * r_B_DstarK * r_D_KPi * r_D_KPi - 2. * r_B_DstarK * r_D_KPi * cos((delta_B_DstarK - delta_D_KPi)/180.*M_PI)*cos(gamma/180.*M_PI));


double a_fav_D_Pi0_th   = (2. * r_B_DstarK * r_D_KPi * sin((delta_B_DstarK - delta_D_KPi)/180.*M_PI)*sin(gamma/180.*M_PI))/
  (1 + r_B_DstarK * r_B_DstarK * r_D_KPi * r_D_KPi + 2. * r_B_DstarK * r_D_KPi * cos((delta_B_DstarK - delta_D_KPi)/180.*M_PI)*cos(gamma/180.*M_PI));


double a_CP_D_gamma_th    = (-2. * r_B_DstarK * sin(delta_B_DstarK/180.*M_PI) * sin(gamma/180.*M_PI))/
  (1. + r_B_DstarK * r_B_DstarK  - 2. * r_B_DstarK * cos(delta_B_DstarK/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_KK;


double a_CP_D_Pi0_th    = (2. * r_B_DstarK * sin(delta_B_DstarK/180.*M_PI) * sin(gamma/180.*M_PI))/
  (1. + r_B_DstarK * r_B_DstarK  + 2. * r_B_DstarK * cos(delta_B_DstarK/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_KK;


double r_CP_D_gamma_th        = 1. + r_B_DstarK * r_B_DstarK - 2. * r_B_DstarK * cos(delta_B_DstarK/180.*M_PI) * cos(gamma/180.*M_PI);


double r_CP_D_Pi0_th        = 1. + r_B_DstarK * r_B_DstarK + 2. * r_B_DstarK * cos(delta_B_DstarK/180.*M_PI) * cos(gamma/180.*M_PI);


///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD GBDstarKp_x_obs_min_x_th(6);
GBDstarKp_x_obs_min_x_th(0)       = a_fav_D_gamma - a_fav_D_gamma_th;
GBDstarKp_x_obs_min_x_th(1)       = a_fav_D_Pi0 - a_fav_D_Pi0_th;
GBDstarKp_x_obs_min_x_th(2)       = a_CP_D_gamma - a_CP_D_gamma_th;
GBDstarKp_x_obs_min_x_th(3)       = a_CP_D_Pi0 - a_CP_D_Pi0_th;
GBDstarKp_x_obs_min_x_th(4)       = r_CP_D_gamma - r_CP_D_gamma_th;
GBDstarKp_x_obs_min_x_th(5)       = r_CP_D_Pi0 - r_CP_D_Pi0_th ;

TMatrixDSym GBDstarKp_xcovI(6);
for(int i=0; i<6; i++)
  {
    for(int j=0;j<6; j++)
      {
	if(i>j) continue;
	GBDstarKp_xcovI(i,j) = corGBDstarKp(i,j)*GBDstarKp_x_err[i]*GBDstarKp_x_err[j];
	if(i!=j) GBDstarKp_xcovI(j,i) = corGBDstarKp(i,j)*GBDstarKp_x_err[i]*GBDstarKp_x_err[j];

      }
  }
//
GBDstarKp_xcovI.Invert();


