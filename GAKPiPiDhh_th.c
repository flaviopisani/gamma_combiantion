// equation (258)
double r_CP_DKPiPi_th           = 1. + r_B_DKPiPi * r_B_DKPiPi + 2. * k_B_DKPiPi * r_B_DKPiPi * cos(delta_B_DKPiPi/180.*M_PI)* cos(gamma/180.*M_PI);

// equation (259)
double a_fav_DKPiPi_KPi_th      =(2. * k_B_DKPiPi * r_B_DKPiPi * r_D_KPi * sin((delta_B_DKPiPi - delta_D_KPi)/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DKPiPi * r_B_DKPiPi * r_D_KPi * r_D_KPi + 2. * k_B_DKPiPi * r_B_DKPiPi * r_D_KPi *cos((delta_B_DKPiPi- delta_D_KPi)/180.*M_PI)* cos(gamma/180.*M_PI));

// equation (261)
double a_CP_DKPiPi_KK_th        =(2. * k_B_DKPiPi * r_B_DKPiPi * sin(delta_B_DKPiPi/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DKPiPi * r_B_DKPiPi + 2. * k_B_DKPiPi * r_B_DKPiPi * cos(delta_B_DKPiPi/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_KK;

// equation (262)
double a_CP_DKPiPi_PiPi_th      =(2. * k_B_DKPiPi * r_B_DKPiPi * sin(delta_B_DKPiPi/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DKPiPi * r_B_DKPiPi + 2. * k_B_DKPiPi * r_B_DKPiPi * cos(delta_B_DKPiPi/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_PiPi;

// equation (265)
double r_plus_DKPiPi_KPi_th     =(r_B_DKPiPi * r_B_DKPiPi + r_D_KPi * r_D_KPi + 2. * k_B_DKPiPi * r_B_DKPiPi * r_D_KPi * cos(delta_B_DKPiPi/180*M_PI + delta_D_KPi/180*M_PI + gamma/180*M_PI)) / (1. + r_B_DKPiPi * r_B_DKPiPi * r_D_KPi * r_D_KPi + 2. * k_B_DKPiPi * r_B_DKPiPi * r_D_KPi * cos(delta_B_DKPiPi/180*M_PI - delta_D_KPi/180*M_PI + gamma/180*M_PI));

// equation (266)
double r_minus_DKPiPi_KPi_th    =(r_B_DKPiPi * r_B_DKPiPi + r_D_KPi * r_D_KPi + 2. * k_B_DKPiPi * r_B_DKPiPi * r_D_KPi * cos(delta_B_DKPiPi/180*M_PI + delta_D_KPi/180*M_PI - gamma/180*M_PI)) /
  (1. + r_B_DKPiPi * r_B_DKPiPi * r_D_KPi * r_D_KPi + 2. * k_B_DKPiPi * r_B_DKPiPi * r_D_KPi * cos(delta_B_DKPiPi/180*M_PI - delta_D_KPi/180*M_PI - gamma/180*M_PI));

///////////////////////////  PDF DEFINITION ///////////////////////
TVectorD GAKPiPiDhh_x_obs_min_x_th(6);
GAKPiPiDhh_x_obs_min_x_th(0)       = r_CP_DKPiPi         - r_CP_DKPiPi_th;
GAKPiPiDhh_x_obs_min_x_th(1)       = a_fav_DKPiPi_KPi    - a_fav_DKPiPi_KPi_th;
GAKPiPiDhh_x_obs_min_x_th(2)       = a_CP_DKPiPi_KK      - a_CP_DKPiPi_KK_th;
GAKPiPiDhh_x_obs_min_x_th(3)       = a_CP_DKPiPi_PiPi    - a_CP_DKPiPi_PiPi_th;
GAKPiPiDhh_x_obs_min_x_th(4)       = r_plus_DKPiPi_KPi   - r_plus_DKPiPi_KPi_th;
GAKPiPiDhh_x_obs_min_x_th(5)       = r_minus_DKPiPi_KPi   - r_minus_DKPiPi_KPi_th;

double beta= 0.;
//for(int j=0; j<4; j++) 
beta += GAKPiPiDhh_x_obs_min_x_th(0)/GAKPiPiDhh_x_err(0)*GAKPiPiDhh_x_obs_min_x_th(0)/ GAKPiPiDhh_x_err(0);
beta += GAKPiPiDhh_x_obs_min_x_th(1)/GAKPiPiDhh_x_err(1)*GAKPiPiDhh_x_obs_min_x_th(1)/ GAKPiPiDhh_x_err(1);
beta += GAKPiPiDhh_x_obs_min_x_th(4)/GAKPiPiDhh_x_err(4)*GAKPiPiDhh_x_obs_min_x_th(4)/ GAKPiPiDhh_x_err(4);
beta += GAKPiPiDhh_x_obs_min_x_th(5)/GAKPiPiDhh_x_err(5)*GAKPiPiDhh_x_obs_min_x_th(5)/ GAKPiPiDhh_x_err(5);

