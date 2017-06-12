// equation (214)
double a_ADS_K_KPi_th   = (2. * r_B_DK * r_D_KPi * sin((delta_B_DK + delta_D_KPi)/180.*M_PI)*sin(gamma/180.*M_PI))/
  (r_B_DK * r_B_DK + r_D_KPi * r_D_KPi + 2. * r_B_DK * r_D_KPi * cos((delta_B_DK + delta_D_KPi)/180.*M_PI)*cos(gamma/180.*M_PI));

// equation (211)
double a_CP_DK_KK_th    = (2. * r_B_DK * sin(delta_B_DK/180.*M_PI) * sin(gamma/180.*M_PI))/
  (1. + r_B_DK * r_B_DK  + 2. * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_KK;

// equation (211)
double a_CP_DK_PiPi_th  = (2. * r_B_DK * sin(delta_B_DK/180.*M_PI) * sin(gamma/180.*M_PI))/
  (1. + r_B_DK * r_B_DK  + 2. * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_PiPi;

// equation (210)
double a_fav_DK_KPi_th  = (2. * r_B_DK * r_D_KPi * sin((delta_B_DK - delta_D_KPi)/180.*M_PI) * sin(gamma/180.*M_PI))/
  (1. + r_B_DK * r_B_DK * r_D_KPi * r_D_KPi + 2. * r_B_DK * r_D_KPi * cos((delta_B_DK - delta_D_KPi)/180.*M_PI) * cos(gamma/180.*M_PI));

// equation (213)
double r_ADS_K_KPi_th   = (r_B_DK * r_B_DK + r_D_KPi * r_D_KPi + 2. * r_B_DK * r_D_KPi * cos((delta_B_DK + delta_D_KPi)/180.*M_PI) * cos(gamma/180.*M_PI))/(1. + r_B_DK * r_B_DK * r_D_KPi * r_D_KPi + 2. * r_B_DK * r_D_KPi * cos((delta_B_DK - delta_D_KPi)/180.*M_PI) * cos(gamma/180.*M_PI));

//double r_ADS_K_KPi_th   = (1. + r_B_DK * r_B_DK * r_D_KPi * r_D_KPi + 2. * r_B_DK * r_D_KPi * cos((gamma+delta_B_DK - delta_D_KPi)/180.*M_PI));
//(r_B_DK * r_B_DK + r_D_KPi * r_D_KPi + 2. * r_B_DK * r_D_KPi * cos((gamma+delta_B_DK + delta_D_KPi)/180.*M_PI)) /
  

//equation (209)
double r_CP_KK_th        = 1. + r_B_DK * r_B_DK + 2. * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI);
double r_CP_PiPi_th      = 1. + r_B_DK * r_B_DK + 2. * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI);

TVectorD GAhh_x_obs_min_x_th(7);

GAhh_x_obs_min_x_th(0) = a_ADS_K_KPi_th- a_ADS_K_KPi;
GAhh_x_obs_min_x_th(1) = a_CP_DK_KK_th - a_CP_DK_KK;
GAhh_x_obs_min_x_th(2) = a_CP_DK_PiPi_th - a_CP_DK_PiPi;
GAhh_x_obs_min_x_th(3) = a_fav_DK_KPi_th - a_fav_DK_KPi;
GAhh_x_obs_min_x_th(4) = r_ADS_K_KPi_th - r_ADS_K_KPi;
GAhh_x_obs_min_x_th(5) = r_CP_KK_th - r_CP_KK;
GAhh_x_obs_min_x_th(6) = r_CP_PiPi_th - r_CP_PiPi;

//
TMatrixDSym GAhh_x_covI(7);
for(int i=0; i<7; i++)
  {
    for(int j=0;j<7; j++)
      {
	if(i>j) continue;
	GAhh_x_covI(i,j) = corGAhh(i,j)*GAhh_x_err[i]*GAhh_x_err[j];
	if(i!=j) GAhh_x_covI(j,i) = corGAhh(i,j)*GAhh_x_err[i]*GAhh_x_err[j];
      }
  }
GAhh_x_covI.Invert();
