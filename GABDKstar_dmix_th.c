Mxy              = 0.6;
//
//      Observable A_fav_DK*0_KPi, equation 191, expression 252         
//
r_B_h           = r_B_DKstar0*R_B_DKstar0;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DKstar0+Delta_B_DKstar0;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DKstar0; 
k_f             = 1.;
g		= gamma;

double num_a_fav_DKstar0_KPi_th =0.; 
num_a_fav_DKstar0_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_fav_DKstar0_KPi_th -=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_fav_DKstar0_KPi_th =0.; 
den_a_fav_DKstar0_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_fav_DKstar0_KPi_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_fav_DKstar0_KPi_th = num_a_fav_DKstar0_KPi_th / den_a_fav_DKstar0_KPi_th;

//
//      Observable R_plus_DK*0_KPi, equation 195, expression 256       
//
r_B_h           = r_B_DKstar0*R_B_DKstar0;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DKstar0+Delta_B_DKstar0;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DKstar0;
k_f             = 1.;
g		= gamma;

double num_r_plus_DKstar0_KPi_th =0.; // Note B^{+} and B^{0} have the same widths
num_r_plus_DKstar0_KPi_th =  Gamma_BPlus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_plus_DKstar0_KPi_th =0.;
den_r_plus_DKstar0_KPi_th =  Gamma_BPlus_favored   (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double r_plus_DKstar0_KPi_th = num_r_plus_DKstar0_KPi_th / den_r_plus_DKstar0_KPi_th;


//
//      Observable R_minus_DK*0_KPi, equation 196, expression 257       
//
r_B_h           = r_B_DKstar0*R_B_DKstar0;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DKstar0+Delta_B_DKstar0;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DKstar0;
k_f             = 1.;
g		= gamma;

double num_r_minus_DKstar0_KPi_th =0.; // Note B^{-} and \bar{B}^{0} have the same widths
num_r_minus_DKstar0_KPi_th =  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_minus_DKstar0_KPi_th =0.;
den_r_minus_DKstar0_KPi_th =  Gamma_BMinus_favored   (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_minus_DKstar0_KPi_th = num_r_minus_DKstar0_KPi_th / den_r_minus_DKstar0_KPi_th;


///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD GABDKstar_x_obs_min_x_th(3);
GABDKstar_x_obs_min_x_th(0)       = a_fav_DKstar0_KPi   - a_fav_DKstar0_KPi_th;
GABDKstar_x_obs_min_x_th(1)       = r_plus_DKstar0_KPi  - r_plus_DKstar0_KPi_th;
GABDKstar_x_obs_min_x_th(2)       = r_minus_DKstar0_KPi - r_minus_DKstar0_KPi_th;

TMatrixDSym GABDKstar_xcovI(3);
for(int i=0; i<3; i++)
  {
    for(int j=0;j<3; j++)
      {
	if(i>j) continue;
	GABDKstar_xcovI(i,j) = corGABDKstar(i,j)*GABDKstar_x_err[i]*GABDKstar_x_err[j];
	if(i!=j) GABDKstar_xcovI(j,i) = corGABDKstar(i,j)*GABDKstar_x_err[i]*GABDKstar_x_err[j];
      }
  }
//
GABDKstar_xcovI.Invert();
