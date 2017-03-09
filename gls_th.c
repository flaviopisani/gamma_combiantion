//r_D_KsKPi = sqrt( (R_D_KsKPi * (1 - k_D_KsKPi * r_D_KsKPi * ( yD * cos(delta_D_KsKPi/180.*M_PI) + xD * sin(delta_D_KsKPi/180.*M_PI)  ) )
//		   + k_D_KsKPi * r_D_KsKPi * ( yD * cos(delta_D_KsKPi/180.*M_PI) - xD * sin(delta_D_KsKPi/180.*M_PI)  ) ) );

double R_D_KsKPi_th  = (r_D_KsKPi * r_D_KsKPi - k_D_KsKPi * r_D_KsKPi * ( yD * cos(delta_D_KsKPi/180.*M_PI) - xD * sin(delta_D_KsKPi/180.*M_PI)  ))/
  (1  - k_D_KsKPi * r_D_KsKPi * ( yD * cos(delta_D_KsKPi/180.*M_PI) + xD * sin(delta_D_KsKPi/180.*M_PI) ));
  

// equation (250)
double r_DK_fos_Ks_KPi_th       =(1. + r_B_DK * r_B_DK * r_D_KsKPi * r_D_KsKPi +  2. * k_D_KsKPi * r_B_DK * r_D_KsKPi * cos((delta_B_DK - delta_D_KsKPi)/180.*M_PI) * cos(gamma/180.*M_PI)) / (r_B_DK * r_B_DK + r_D_KsKPi * r_D_KsKPi + 2. * k_D_KsKPi * r_B_DK * r_D_KsKPi * cos((delta_B_DK + delta_D_KsKPi)/180.*M_PI) * cos(gamma/180.*M_PI));

// equation(246)
double a_fav_DK_KsKPi_th        =(2. * k_D_KsKPi * r_B_DK * r_D_KsKPi * sin((delta_B_DK - delta_D_KsKPi)/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DK * r_B_DK  * r_D_KsKPi * r_D_KsKPi + 2. * k_D_KsKPi * r_B_DK * r_D_KsKPi * cos((delta_B_DK - delta_D_KsKPi)/180.*M_PI) * cos(gamma/180.*M_PI));

// equation (247)
double a_sup_DK_KsKPi_th        = (2. * k_D_KsKPi * r_B_DK * r_D_KsKPi * sin((delta_B_DK + delta_D_KsKPi)/180.*M_PI) * sin(gamma/180.*M_PI)) /
  //  (1. + r_B_DK * r_B_DK  + r_D_KsKPi * r_D_KsKPi + 2. * k_D_KsKPi * r_B_DK * r_D_KsKPi * cos((delta_B_DK + delta_D_KsKPi)/180.*M_PI) * cos(gamma/180.*M_PI));
  (r_B_DK * r_B_DK+ r_D_KsKPi * r_D_KsKPi + 2. * k_D_KsKPi * r_B_DK * r_D_KsKPi * cos((delta_B_DK + delta_D_KsKPi)/180.*M_PI) * cos(gamma/180.*M_PI));



///////////////////////////  PDF DEFINITION ///////////////////////
TVectorD GLS_x_obs_min_x_th(3);
GLS_x_obs_min_x_th(0)       = r_DK_fos_Ks_KPi - r_DK_fos_Ks_KPi_th;
GLS_x_obs_min_x_th(1)       = a_fav_DK_KsKPi  - a_fav_DK_KsKPi_th;
GLS_x_obs_min_x_th(2)       = a_sup_DK_KsKPi  - a_sup_DK_KsKPi_th;
//
//
double alpha = 0.;
for(int j=0;j<3; j++) alpha += GLS_x_obs_min_x_th(j) * GLS_x_obs_min_x_th(j) / ( GLS_x_err(j)* GLS_x_err(j));
