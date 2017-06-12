// equation (241)
double x_minus_th               = r_B_DK * cos((delta_B_DK - gamma)/180.*M_PI);
	x_minus_th		-= 0.5 * yD; 	
// equation (242)
double y_minus_th               = r_B_DK * sin((delta_B_DK - gamma)/180.*M_PI);
	y_minus_th		-= 0.5 * xD; 	
// equation (239)
double x_plus_th                = r_B_DK * cos((delta_B_DK + gamma)/180.*M_PI);
	x_plus_th		-= 0.5 * yD; 	
// equation (240)
double y_plus_th                = r_B_DK * sin((delta_B_DK + gamma)/180.*M_PI);
	y_plus_th		-= 0.5 * xD; 	

///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD ggsz_x_obs_min_x_th(4);
ggsz_x_obs_min_x_th(0)       = x_minus - x_minus_th;
ggsz_x_obs_min_x_th(1)       = y_minus - y_minus_th;
ggsz_x_obs_min_x_th(2)       = x_plus  - x_plus_th;
ggsz_x_obs_min_x_th(3)       = y_plus  - y_plus_th;
//
//
TMatrixDSym ggsz_x_covI(4);
for(int i=0; i<4; i++) {
  for(int j=0;j<4; j++) {
    if(i>j) continue;
    ggsz_x_covI(i,j) = corGGSZ(i,j)*ggsz_x_err[i]*ggsz_x_err[j];
    if(i!=j) ggsz_x_covI(j,i) = corGGSZ(i,j)*ggsz_x_err[i]*ggsz_x_err[j];
  }
 }
//
ggsz_x_covI.Invert();
