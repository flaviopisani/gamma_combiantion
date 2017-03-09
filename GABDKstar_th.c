// equation (251)

double a_CP_DKstar0_KK_th       = (2. * k_B_DKstar0 * r_B_DKstar0 * sin(delta_B_DKstar0/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DKstar0 * r_B_DKstar0 + 2. * k_B_DKstar0 * r_B_DKstar0 * cos(delta_B_DKstar0/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_KK;

//"2*k_dkstz*r_dkstz *sin(d_dkstz) *sin(g) / (1 + r_dkstz^2  + 2*k_dkstz*r_dkstz *cos(d_dkstz) *cos(g)) + AcpDKK"

// equation (252)
double a_fav_DKstar0_KPi_th     = (2. * k_B_DKstar0 * r_B_DKstar0 * r_D_KPi * sin((delta_B_DKstar0 - delta_D_KPi)/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DKstar0 * r_B_DKstar0 * r_D_KPi * r_D_KPi +  2. * k_B_DKstar0 * r_B_DKstar0 * r_D_KPi * cos((delta_B_DKstar0 - delta_D_KPi)/180.*M_PI) * cos(gamma/180.*M_PI));

// 2*k_dkstz*r_dkstz*rD_kpi *sin(d_dkstz-dD_kpi) *sin(g) / (1 + r_dkstz^2*rD_kpi^2  + 2*k_dkstz*r_dkstz*rD_kpi *cos(d_dkstz-dD_kpi) *cos(g))

// equation (253)
double r_CP_DKstar0_KK_th       = (1. + r_B_DKstar0 * r_B_DKstar0 + 2. * k_B_DKstar0 * r_B_DKstar0 * cos(delta_B_DKstar0/180.*M_PI) * cos(gamma/180.*M_PI)) /
  (1. + r_B_DKstar0 * r_B_DKstar0 * r_D_KPi * r_D_KPi +  2. * k_B_DKstar0 * r_B_DKstar0 * r_D_KPi * cos((delta_B_DKstar0 - delta_D_KPi)/180.*M_PI) * cos(gamma/180.*M_PI));

// (1 + r_dkstz^2  + 2*k_dkstz*r_dkstz *cos(d_dkstz) *cos(g))/(1 + r_dkstz^2*rD_kpi^2  + 2*k_dkstz*r_dkstz*rD_kpi *cos(d_dkstz-dD_kpi) *cos(g))

// equation (254)
double a_CP_DKstar0_PiPi_th     = (2. * k_B_DKstar0 * r_B_DKstar0 * sin(delta_B_DKstar0/180.*M_PI) * sin(gamma/180.*M_PI)) /
  (1. + r_B_DKstar0 * r_B_DKstar0 + 2. * k_B_DKstar0 * r_B_DKstar0 * cos(delta_B_DKstar0/180.*M_PI) * cos(gamma/180.*M_PI)) + a_CP_dir_PiPi;

// 2*k_dkstz*r_dkstz *sin(d_dkstz) *sin(g) / (1 + r_dkstz^2  + 2*k_dkstz*r_dkstz *cos(d_dkstz) *cos(g)) + AcpDpipi

// equation (255)
double r_CP_Kstar0_PiPi_th      = (1. + r_B_DKstar0 * r_B_DKstar0 + 2. * k_B_DKstar0 * r_B_DKstar0 * cos(delta_B_DKstar0/180.*M_PI) * cos(gamma/180.*M_PI)) /
  (1. + r_B_DKstar0 * r_B_DKstar0 * r_D_KPi * r_D_KPi +  2. * k_B_DKstar0 * r_B_DKstar0 * r_D_KPi * cos((delta_B_DKstar0 - delta_D_KPi)/180.*M_PI) * cos(gamma/180.*M_PI));

// 1 + r_dkstz^2  + 2*k_dkstz*r_dkstz *cos(d_dkstz) *cos(g))/(1 + r_dkstz^2*rD_kpi^2  + 2*k_dkstz*r_dkstz*rD_kpi *cos(d_dkstz-dD_kpi) *cos(g))

// equation (256)
double r_plus_DKstar0_KPi_th    = (r_B_DKstar0 * r_B_DKstar0 + r_D_KPi * r_D_KPi + 2. * k_B_DKstar0 * r_B_DKstar0 *  r_D_KPi * cos((delta_B_DKstar0 + delta_D_KPi + gamma)/180.*M_PI))/
  (1. + r_B_DKstar0 * r_B_DKstar0 * r_D_KPi * r_D_KPi + 2. * k_B_DKstar0 * r_B_DKstar0 * r_D_KPi * cos((delta_B_DKstar0 - delta_D_KPi + gamma)/180.*M_PI));

// (r_dkstz^2  + rD_kpi^2 + 2*k_dkstz *r_dkstz *rD_kpi*cos( g+d_dkstz +dD_kpi)) / (1 + r_dkstz^2 *rD_kpi^2 + 2*k_dkstz *r_dkstz *rD_kpi*cos( g +d_dkstz -dD_kpi))

// equation (257)
double r_minus_DKstar0_KPi_th   = (r_B_DKstar0 * r_B_DKstar0 + r_D_KPi * r_D_KPi + 2. * k_B_DKstar0 * r_B_DKstar0 * r_D_KPi * cos((delta_B_DKstar0 + delta_D_KPi - gamma)/180.*M_PI)) /
  (1. + r_B_DKstar0 * r_B_DKstar0 * r_D_KPi * r_D_KPi + 2. * k_B_DKstar0 * r_B_DKstar0 * r_D_KPi * cos((delta_B_DKstar0 - delta_D_KPi - gamma)/180.*M_PI));

///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD GABDKstar_x_obs_min_x_th(7);
GABDKstar_x_obs_min_x_th(0)       = a_CP_DKstar0_KK - a_CP_DKstar0_KK_th;
GABDKstar_x_obs_min_x_th(1)       = a_fav_DKstar0_KPi - a_fav_DKstar0_KPi_th;
GABDKstar_x_obs_min_x_th(2)       = r_CP_DKstar0_KK - r_CP_DKstar0_KK_th;
GABDKstar_x_obs_min_x_th(3)       = a_CP_DKstar0_PiPi - a_CP_DKstar0_PiPi_th;
GABDKstar_x_obs_min_x_th(4)       = r_CP_Kstar0_PiPi - r_CP_Kstar0_PiPi_th;
GABDKstar_x_obs_min_x_th(5)       = r_plus_DKstar0_KPi - r_plus_DKstar0_KPi_th;
GABDKstar_x_obs_min_x_th(6)       = r_minus_DKstar0_KPi - r_minus_DKstar0_KPi_th;

TMatrixDSym GABDKstar_xcovI(7);
for(int i=0; i<7; i++)
  {
    for(int j=0;j<7; j++)
      {
	if(i>j) continue;
	GABDKstar_xcovI(i,j) = corGABDKstar(i,j)*GABDKstar_x_err[i]*GABDKstar_x_err[j];
	if(i!=j) GABDKstar_xcovI(j,i) = corGABDKstar(i,j)*GABDKstar_x_err[i]*GABDKstar_x_err[j];

      }
  }
//
GABDKstar_xcovI.Invert();

