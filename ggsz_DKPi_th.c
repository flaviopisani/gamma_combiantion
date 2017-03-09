// equation (241)
double x_DKPi_minus_th               = r_B_DKstar0 * cos((delta_B_DKstar0 - gamma)/180.*M_PI);
// equation (242)
double y_DKPi_minus_th               = r_B_DKstar0 * sin((delta_B_DKstar0 - gamma)/180.*M_PI);
// equation (239)
double x_DKPi_plus_th                = r_B_DKstar0 * cos((delta_B_DKstar0 + gamma)/180.*M_PI);
// equation (240)
double y_DKPi_plus_th                = r_B_DKstar0 * sin((delta_B_DKstar0 + gamma)/180.*M_PI);

///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD ggsz_DKPi_x_obs_min_x_th(4);
ggsz_DKPi_x_obs_min_x_th(0)       = x_DKPi_minus - x_DKPi_minus_th;
ggsz_DKPi_x_obs_min_x_th(1)       = y_DKPi_minus - y_DKPi_minus_th;
ggsz_DKPi_x_obs_min_x_th(2)       = x_DKPi_plus  - x_DKPi_plus_th;
ggsz_DKPi_x_obs_min_x_th(3)       = y_DKPi_plus  - y_DKPi_plus_th;
//
//
TMatrixDSym ggsz_DKPi_x_covI(4);
for(int i=0; i<4; i++) {
  for(int j=0;j<4; j++) {
    if(i>j) continue;
    ggsz_DKPi_x_covI(i,j) = corGGSZDKPi(i,j)*ggsz_DKPi_x_err[i]*ggsz_DKPi_x_err[j];
    if(i!=j) ggsz_DKPi_x_covI(j,i) = corGGSZDKPi(i,j)*ggsz_DKPi_x_err[i]*ggsz_DKPi_x_err[j];
  }
 }
//
ggsz_DKPi_x_covI.Invert();
