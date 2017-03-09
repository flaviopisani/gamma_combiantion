Mxy              = 0.5;
double R_D_KsKPi_th  = (r_D_KsKPi * r_D_KsKPi - k_D_KsKPi * r_D_KsKPi * ( yD * cos(delta_D_KsKPi/180.*M_PI) - xD* sin(delta_D_KsKPi/180.*M_PI)  ))/
  (1  - k_D_KsKPi * r_D_KsKPi * ( yD * cos(delta_D_KsKPi/180.*M_PI) + xD * sin(delta_D_KsKPi/180.*M_PI) ));

//
//      Observable R_DK_fav_over_sup_KSKPi, equation ??, expression 250         
//
r_B_h           = r_B_DK;
r_f             = r_D_KsKPi;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_KsKPi;
k_B_h           = 1.;
k_f             = k_D_KsKPi;
g		= gamma;


double num_r_DK_fav_over_sup_KsKPi_th =0.;
num_r_DK_fav_over_sup_KsKPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_DK_fav_over_sup_KsKPi_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_DK_fav_over_sup_KsKPi_th =0.;
den_r_DK_fav_over_sup_KsKPi_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_DK_fav_over_sup_KsKPi_th +=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double r_DK_fos_Ks_KPi_th = num_r_DK_fav_over_sup_KsKPi_th / den_r_DK_fav_over_sup_KsKPi_th;

//
//      Observable A_fav_DK_KSKPi, equation 186, expression 246         
//
r_B_h           = r_B_DK;
r_f             = r_D_KsKPi;     // expression 216 uses r_D_K3Pi
delta_B_h       = delta_B_DK;
delta_f         = delta_D_KsKPi; // expression 216 uses delta_D_K3Pi
k_B_h           = 1.;
k_f             = k_D_KsKPi;
g		= gamma;

double num_a_fav_DK_KsKPi_th =0.;
num_a_fav_DK_KsKPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_fav_DK_KsKPi_th -=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_fav_DK_KsKPi_th =0.;
den_a_fav_DK_KsKPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_fav_DK_KsKPi_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double a_fav_DK_KsKPi_th = num_a_fav_DK_KsKPi_th / den_a_fav_DK_KsKPi_th;

//
//      Observable A_sup_DK_KSKPi, equation 187, expression 247         
//
r_B_h           = r_B_DK;
r_f             = r_D_KsKPi;     // expression 216 uses r_D_K3Pi
delta_B_h       = delta_B_DK;
delta_f         = delta_D_KsKPi; // expression 216 uses delta_D_K3Pi
k_B_h           = 1.;
k_f             = k_D_KsKPi;
double num_a_sup_DK_KsKPi_th =0.;
num_a_sup_DK_KsKPi_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_sup_DK_KsKPi_th -=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_sup_DK_KsKPi_th =0.;
den_a_sup_DK_KsKPi_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_sup_DK_KsKPi_th +=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_sup_DK_KsKPi_th = num_a_sup_DK_KsKPi_th / den_a_sup_DK_KsKPi_th;


///////////////////////////  PDF DEFINITION ///////////////////////
TVectorD GLS_x_obs_min_x_th(3);
GLS_x_obs_min_x_th(0)       = r_DK_fos_Ks_KPi - r_DK_fos_Ks_KPi_th;
GLS_x_obs_min_x_th(1)       = a_fav_DK_KsKPi  - a_fav_DK_KsKPi_th;
GLS_x_obs_min_x_th(2)       = a_sup_DK_KsKPi  - a_sup_DK_KsKPi_th;
//
//
double alpha = 0.;
for(int j=0;j<3; j++) alpha += GLS_x_obs_min_x_th(j) * GLS_x_obs_min_x_th(j) / ( GLS_x_err(j)* GLS_x_err(j));
