// equation (241)
double x_DKstar0_minus_th               = (r_B_DKstar0*R_B_DKstar0) * cos(((delta_B_DKstar0+Delta_B_DKstar0) - gamma)/180.*M_PI);
// equation (242)
double y_DKstar0_minus_th               = (r_B_DKstar0*R_B_DKstar0) * sin(((delta_B_DKstar0+Delta_B_DKstar0) - gamma)/180.*M_PI);
// equation (239)
double x_DKstar0_plus_th                = (r_B_DKstar0*R_B_DKstar0) * cos(((delta_B_DKstar0+Delta_B_DKstar0) + gamma)/180.*M_PI);
// equation (240)
double y_DKstar0_plus_th                = (r_B_DKstar0*R_B_DKstar0) * sin(((delta_B_DKstar0+Delta_B_DKstar0) + gamma)/180.*M_PI);

///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD ggsz_DKstar0_x_obs_min_x_th(4);
ggsz_DKstar0_x_obs_min_x_th(0)       = x_DKstar0_minus - x_DKstar0_minus_th;
ggsz_DKstar0_x_obs_min_x_th(1)       = y_DKstar0_minus - y_DKstar0_minus_th;
ggsz_DKstar0_x_obs_min_x_th(2)       = x_DKstar0_plus  - x_DKstar0_plus_th;
ggsz_DKstar0_x_obs_min_x_th(3)       = y_DKstar0_plus  - y_DKstar0_plus_th;
//
//
TMatrixDSym ggsz_DKstar0_x_covI(4);
for(int i=0; i<4; i++) {
  for(int j=0;j<4; j++) {
    if(i>j) continue;
    ggsz_DKstar0_x_covI(i,j) = corGGSZDKstar0(i,j)*ggsz_DKstar0_x_err[i]*ggsz_DKstar0_x_err[j];
    if(i!=j) ggsz_DKstar0_x_covI(j,i) = corGGSZDKstar0(i,j)*ggsz_DKstar0_x_err[i]*ggsz_DKstar0_x_err[j];
  }
 }
//
ggsz_DKstar0_x_covI.Invert();
