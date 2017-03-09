Mxy              = 0.592;

//double R_WS_D_KPiPi0_th = r_D_KPiPi0 * r_D_KPiPi0 - k_D_KPiPi0 * r_D_KPiPi0 * ( yD * cos(delta_D_KPiPi0/180.*M_PI) - xD * sin(delta_D_KPiPi0/180.*M_PI)  ) + 0.5 * (xD * xD + yD *yD);
//
//      A_ADS_DK_KPiPi0 equation 170, expression 226
//
r_B_h           = r_B_DK;
r_f             = r_D_KPiPi0;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_KPiPi0;
k_B_h           = 1.;
k_f             = k_D_KPiPi0;
g		= gamma;
double num_a_ADS_DK_KPiPi0_th = 0.;
num_a_ADS_DK_KPiPi0_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_ADS_DK_KPiPi0_th -= Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_ADS_DK_KPiPi0_th = 0.;
den_a_ADS_DK_KPiPi0_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_ADS_DK_KPiPi0_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_ADS_DK_KPiPi0_th = num_a_ADS_DK_KPiPi0_th / den_a_ADS_DK_KPiPi0_th;

//
//      A_ADS_DPi_KPiPi0 equation 170, expression 226
//
r_B_h           = r_B_DPi;
r_f             = r_D_KPiPi0;
delta_B_h       = delta_B_DPi;
delta_f         = delta_D_KPiPi0;
k_B_h           = 1.;
k_f             = k_D_KPiPi0;
g		= gamma;
double num_a_ADS_DPi_KPiPi0_th = 0.;
num_a_ADS_DPi_KPiPi0_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_ADS_DPi_KPiPi0_th -= Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_ADS_DPi_KPiPi0_th = 0.;
den_a_ADS_DPi_KPiPi0_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_ADS_DPi_KPiPi0_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_ADS_DPi_KPiPi0_th = num_a_ADS_DPi_KPiPi0_th / den_a_ADS_DPi_KPiPi0_th;


//
//      A_CP_DK_KKPi0 equation 172, expression 228
//
r_f             = 1.;
delta_f         = 0.;
k_f             = 2.* F_plus_KKPi0 - 1.;
r_B_h           = r_B_DK;
delta_B_h       = delta_B_DK;
k_B_h           = 1.;
g		= gamma;
double num_a_CP_DK_KKPi0_th = 0.;
num_a_CP_DK_KKPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DK_KKPi0_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DK_KKPi0_th = 0.;
den_a_CP_DK_KKPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DK_KKPi0_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DK_KKPi0_th = num_a_CP_DK_KKPi0_th / den_a_CP_DK_KKPi0_th;

//
//      A_CP_DK_PiPiPi0 equation 173, expression 229
//
r_f             = 1.;
delta_f         = 0.;
k_f             = 2.* F_plus_PiPiPi0 - 1.;
r_B_h           = r_B_DK;
delta_B_h       = delta_B_DK;
k_B_h           = 1.;
g		= gamma;
double num_a_CP_DK_PiPiPi0_th = 0.;
num_a_CP_DK_PiPiPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DK_PiPiPi0_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DK_PiPiPi0_th = 0.;
den_a_CP_DK_PiPiPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DK_PiPiPi0_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DK_PiPiPi0_th = num_a_CP_DK_PiPiPi0_th / den_a_CP_DK_PiPiPi0_th;


//
//      A_CP_DPi_KKPi0 equation 172, expression 228
//
r_f             = 1.;
delta_f         = 0.;
k_f             = 2.* F_plus_KKPi0 - 1.;
r_B_h           = r_B_DPi;
delta_B_h       = delta_B_DPi;
k_B_h           = 1.;
g		= gamma;
double num_a_CP_DPi_KKPi0_th = 0.;
num_a_CP_DPi_KKPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DPi_KKPi0_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DPi_KKPi0_th = 0.;
den_a_CP_DPi_KKPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DPi_KKPi0_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DPi_KKPi0_th = num_a_CP_DPi_KKPi0_th / den_a_CP_DPi_KKPi0_th;

//
//      A_CP_DPi_PiPiPi0 equation 173, expression 229
//
r_f             = 1.;
delta_f         = 0.;
k_f             = 2.* F_plus_PiPiPi0 - 1.;
r_B_h           = r_B_DPi;
delta_B_h       = delta_B_DPi;
k_B_h           = 1.;
g		= gamma;
double num_a_CP_DPi_PiPiPi0_th = 0.;
num_a_CP_DPi_PiPiPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DPi_PiPiPi0_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DPi_PiPiPi0_th = 0.;
den_a_CP_DPi_PiPiPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DPi_PiPiPi0_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DPi_PiPiPi0_th = num_a_CP_DPi_PiPiPi0_th / den_a_CP_DPi_PiPiPi0_th;



//
//
//      A_fav_DK_KPiPi0 equation 176, expression 232 
//
r_B_h           = r_B_DK;
r_f             = r_D_KPiPi0;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_KPiPi0;
k_B_h           = 1.;
k_f             = k_D_KPiPi0;
g		= gamma;
double num_a_fav_DK_KPiPi0_th = 0.;
num_a_fav_DK_KPiPi0_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);;
num_a_fav_DK_KPiPi0_th -=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_fav_DK_KPiPi0_th = 0.;
den_a_fav_DK_KPiPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_fav_DK_KPiPi0_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_fav_DK_KPiPi0_th = num_a_fav_DK_KPiPi0_th / den_a_fav_DK_KPiPi0_th;

//
//      R_ADS_DK_KPiPi0 equation 178, expression 234
//
r_B_h           = r_B_DK;
r_f             = r_D_KPiPi0;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_KPiPi0;
k_B_h           = 1.;
k_f             = k_D_KPiPi0;
g		= gamma;
double num_r_ADS_DK_KPiPi0_th = 0.;
num_r_ADS_DK_KPiPi0_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_ADS_DK_KPiPi0_th +=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_ADS_DK_KPiPi0_th = 0.;
den_r_ADS_DK_KPiPi0_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_ADS_DK_KPiPi0_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_ADS_DK_KPiPi0_th = num_r_ADS_DK_KPiPi0_th / den_r_ADS_DK_KPiPi0_th;

//
//      R_ADS_DPi_KPiPi0 equation 178, expression 234
//
r_B_h           = r_B_DPi;
r_f             = r_D_KPiPi0;
delta_B_h       = delta_B_DPi;
delta_f         = delta_D_KPiPi0;
k_B_h           = 1.;
k_f             = k_D_KPiPi0;
g		= gamma;
double num_r_ADS_DPi_KPiPi0_th = 0.;
num_r_ADS_DPi_KPiPi0_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_ADS_DPi_KPiPi0_th +=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_ADS_DPi_KPiPi0_th = 0.;
den_r_ADS_DPi_KPiPi0_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_ADS_DPi_KPiPi0_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_ADS_DPi_KPiPi0_th = num_r_ADS_DPi_KPiPi0_th / den_r_ADS_DPi_KPiPi0_th;



r_f             = 1.;
delta_f         = 0.;
k_f             = 2.* F_plus_KKPi0 - 1.;
r_B_h           = r_B_DK;
delta_B_h       = delta_B_DK;
k_B_h           = 1.;
g               = gamma;
double num_r_CP_KKPi0_th = 0.;
num_r_CP_KKPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_CP_KKPi0_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_CP_KKPi0_th = 0.;

r_f             = 1.;
delta_f         = 0.;
k_f             = 2.* F_plus_KKPi0 - 1.;
r_B_h           = 0;
delta_B_h       = 0;
k_B_h           = 1.;
g               = gamma;
den_r_CP_KKPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CP_KKPi0_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);;

double r_CP_KKPi0_th = num_r_CP_KKPi0_th / den_r_CP_KKPi0_th;



r_f             = 1.;
delta_f         = 0.;
k_f             = 2.* F_plus_PiPiPi0 - 1.;
r_B_h           = r_B_DK;
delta_B_h       = delta_B_DK;
k_B_h           = 1.;
g               = gamma;

double num_r_CP_PiPiPi0_th = 0.;
num_r_CP_PiPiPi0_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_CP_PiPiPi0_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_CP_PiPiPi0_th = 0.;
r_f             = 1.;
delta_f         = 0.;
k_f             = 2.* F_plus_PiPiPi0 - 1.;
r_B_h           = 0;
delta_B_h       = 0;
k_B_h           = 1.;
g               = gamma;
den_r_CP_PiPiPi0_th += Gamma_BMinus_favored(0,0,1, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CP_PiPiPi0_th += Gamma_BPlus_favored (0,0,1, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_CP_PiPiPi0_th = num_r_CP_PiPiPi0_th / den_r_CP_PiPiPi0_th;


// equation (236)
//double r_CP_KKPi0_th	= (1. + r_B_DK * r_B_DK + 2. * (2. * F_plus_KKPi0 - 1.) * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI));

// equation (237)
//double r_CP_PiPiPi0_th  =  (1. + r_B_DK * r_B_DK + 2. * (2. * F_plus_PiPiPi0 - 1.) * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI));

///////////////////////////  PDF DEFINITION ///////////////////////

TVectorD ADhhpi0_x_min_x_th(11);
ADhhpi0_x_min_x_th(0)       = a_ADS_DK_KPiPi0   - a_ADS_DK_KPiPi0_th;
ADhhpi0_x_min_x_th(1)       = a_ADS_DPi_KPiPi0  - a_ADS_DPi_KPiPi0_th;
ADhhpi0_x_min_x_th(2)       = a_CP_DK_KKPi0     - a_CP_DK_KKPi0_th;
ADhhpi0_x_min_x_th(3)       = a_CP_DK_PiPiPi0   - a_CP_DK_PiPiPi0_th;
ADhhpi0_x_min_x_th(4)       = a_CP_DPi_KKPi0    - a_CP_DPi_KKPi0_th;
ADhhpi0_x_min_x_th(5)       = a_CP_DPi_PiPiPi0  - a_CP_DPi_PiPiPi0_th;
ADhhpi0_x_min_x_th(6)       = a_fav_DK_KPiPi0   - a_fav_DK_KPiPi0_th;
ADhhpi0_x_min_x_th(7)       = r_ADS_DK_KPiPi0   - r_ADS_DK_KPiPi0_th;
ADhhpi0_x_min_x_th(8)       = r_ADS_DPi_KPiPi0  - r_ADS_DPi_KPiPi0_th;
ADhhpi0_x_min_x_th(9)       = r_CP_KKPi0        - r_CP_KKPi0_th;
ADhhpi0_x_min_x_th(10)      = r_CP_PiPiPi0      - r_CP_PiPiPi0_th;

TMatrixDSym ADhhpi0_covI(11);
for(int i=0; i<11; i++)
  {
    for(int j=0;j<11; j++)
      {
	if(i>j) continue;
	ADhhpi0_covI(i,j) = corADhhpi0(i,j)*ADhhpi0_x_err[i]*ADhhpi0_x_err[j];
	if(i!=j) ADhhpi0_covI(j,i) = corADhhpi0(i,j)*ADhhpi0_x_err[i]*ADhhpi0_x_err[j];
      }
  }
//
ADhhpi0_covI.Invert();
