//      eq. (269)
double C_th                     = (1. - r_B_DsK * r_B_DsK) / (1. + r_B_DsK * r_B_DsK);
//      eq. (270)
double D_f_th                   = 2. * r_B_DsK * cos((delta_Bs_DsK - gamma - phi_s)/180.*M_PI) / (1. + r_B_DsK * r_B_DsK);
//      eq. (271)
double D_bar_f_th               = 2. * r_B_DsK * cos((delta_Bs_DsK + gamma + phi_s)/180.*M_PI) / (1. + r_B_DsK * r_B_DsK);
//      eq. (272)
double S_f_th                   = 2. * r_B_DsK * sin((delta_Bs_DsK - gamma - phi_s)/180.*M_PI) / (1. + r_B_DsK * r_B_DsK);
//      eq. (273)
double S_bar_f_th               = 2. * r_B_DsK * sin((delta_Bs_DsK + gamma + phi_s)/180.*M_PI) / (1. + r_B_DsK * r_B_DsK);

TVectorD BsDsK_x_obs_min_x_th(5);
BsDsK_x_obs_min_x_th(0)       = C       - C_th;
BsDsK_x_obs_min_x_th(1)       = D_f     - D_f_th;
BsDsK_x_obs_min_x_th(2)       = D_bar_f - D_bar_f_th;
BsDsK_x_obs_min_x_th(3)       = S_f     - S_f_th;
BsDsK_x_obs_min_x_th(4)       = S_bar_f - S_bar_f_th;

TMatrixDSym BsDsK_x_covI(5);
for(int i=0; i<5; i++)
  {
    for(int j=0;j<5; j++)
      {
	if(i>j) continue;
	BsDsK_x_covI(i,j) = corBsDsK(i,j)*BsDsK_x_err[i]*BsDsK_x_err[j];
	if(i!=j) BsDsK_x_covI(j,i) = corBsDsK(i,j)*BsDsK_x_err[i]*BsDsK_x_err[j];
      }
  }

BsDsK_x_covI.Invert();
