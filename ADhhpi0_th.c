//r_D_KPiPi0 = sqrt( R_WS_D_KPiPi0 +
//		   k_D_KPiPi0 * r_D_KPiPi0 * ( yD * cos(delta_D_KPiPi0/180.*M_PI) - xD * sin(delta_D_KPiPi0/180.*M_PI)  ) - 0.5 * (xD * xD + yD *yD));

double R_WS_D_KPiPi0_th = r_D_KPiPi0 * r_D_KPiPi0 - k_D_KPiPi0 * r_D_KPiPi0 * ( yD * cos(delta_D_KPiPi0/180.*M_PI) - xD * sin(delta_D_KPiPi0/180.*M_PI)  ) 
  + 0.5 * (xD * xD + yD *yD);

// equation (226)
//      double a_ADS_K_KPiPi0_th        = (2. * k_D_KPiPi0 * r_B_DK * r_D_KPiPi0 * sin((delta_B_DK + delta_D_KPiPi0)/180.*M_PI) * sin(gamma/180.*M_PI)) / r_ADS_K_KPiPiPi;
double a_ADS_DK_KPiPi0_th        = (2. * k_D_KPiPi0 * r_B_DK * r_D_KPiPi0 * sin((delta_B_DK + delta_D_KPiPi0)/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (r_B_DK * r_B_DK + r_D_KPiPi0 * r_D_KPiPi0 + 2. * k_D_KPiPi0 * r_B_DK * r_D_KPiPi0 * cos((delta_B_DK + delta_D_KPiPi0)/180.*M_PI) * cos(gamma/180.*M_PI));

// equation(228)
double a_CP_DK_KKPi0_th         = (2. * (2. * F_plus_KKPi0 - 1.) * r_B_DK * sin(delta_B_DK/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DK * r_B_DK + 2. * (2. * F_plus_KKPi0 - 1.) * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI));

// equation (229)
double a_CP_DK_PiPiPi0_th       = (2. * (2. * F_plus_PiPiPi0 - 1.) * r_B_DK * sin(delta_B_DK/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DK * r_B_DK + 2. * (2. * F_plus_PiPiPi0 - 1.) * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI));
// equation (232)
double a_fav_DK_KPiPi0_th       = (2. * k_D_KPiPi0 * r_B_DK * r_D_KPiPi0 * sin((delta_B_DK - delta_D_KPiPi0)/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DK * r_B_DK * r_D_KPiPi0 * r_D_KPiPi0 +  2. * k_D_KPiPi0 * r_B_DK * r_D_KPiPi0 * cos((delta_B_DK - delta_D_KPiPi0)/180.*M_PI) * cos(gamma/180.*M_PI)); \


// equation (234)
double r_ADS_DK_KPiPi0_th        = (r_B_DK * r_B_DK + r_D_KPiPi0 * r_D_KPiPi0 + 2. * k_D_KPiPi0 * r_B_DK * r_D_KPiPi0 * cos((delta_B_DK + delta_D_KPiPi0)/180.*M_PI) * cos(gamma/180.*M_PI)) /
  (1. + r_B_DK * r_B_DK * r_D_KPiPi0 * r_D_KPiPi0 +  2. * k_D_KPiPi0 * r_B_DK * r_D_KPiPi0 * cos((delta_B_DK - delta_D_KPiPi0)/180.*M_PI) * cos(gamma/180.*M_PI));

// equation (236)
double r_CP_KKPi0_th            = (1. + r_B_DK * r_B_DK + 2. * (2. * F_plus_KKPi0 - 1.) * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI));
// equation (237)
double r_CP_PiPiPi0_th          = (1. + r_B_DK * r_B_DK + 2. * (2. * F_plus_PiPiPi0 - 1.) * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI));

///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD ADhhpi0_x_min_x_th(7);
ADhhpi0_x_min_x_th(0)       = a_ADS_DK_KPiPi0  - a_ADS_DK_KPiPi0_th;
ADhhpi0_x_min_x_th(1)       = a_CP_DK_KKPi0   - a_CP_DK_KKPi0_th;
ADhhpi0_x_min_x_th(2)       = a_CP_DK_PiPiPi0 - a_CP_DK_PiPiPi0_th;
ADhhpi0_x_min_x_th(3)       = a_fav_DK_KPiPi0 - a_fav_DK_KPiPi0_th;
ADhhpi0_x_min_x_th(4)       = r_ADS_DK_KPiPi0  - r_ADS_DK_KPiPi0_th;
ADhhpi0_x_min_x_th(5)       = r_CP_KKPi0      - r_CP_KKPi0_th;
ADhhpi0_x_min_x_th(6)       = r_CP_PiPiPi0    - r_CP_PiPiPi0_th;

TMatrixDSym ADhhpi0_covI(7);
for(int i=0; i<7; i++)
  {
    for(int j=0;j<7; j++)
      {
	if(i>j) continue;
	ADhhpi0_covI(i,j) = corADhhpi0(i,j)*ADhhpi0_x_err[i]*ADhhpi0_x_err[j];
	if(i!=j) ADhhpi0_covI(j,i) = corADhhpi0(i,j)*ADhhpi0_x_err[i]*ADhhpi0_x_err[j];
      }
  }
//
ADhhpi0_covI.Invert();
