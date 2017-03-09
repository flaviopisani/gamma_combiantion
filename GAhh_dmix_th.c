Mxy              = 0.594;
//Mxy              = 0.0;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                     A_ADS_DK_KPi equation 148,  equation (214)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// debug 
//r_B_DK = 0.09;
//delta_B_DK = 2.21657/M_PI*180;
//r_D_KPi=0.058;
//delta_D_KPi=3.28122/M_PI*180;
//gamma = 1.22173/M_PI*180;
//xD = 0.0041;
//yD = 0.0063;
/////////
r_B_h            = r_B_DK;
r_f              = r_D_KPi;
delta_B_h        = delta_B_DK;
delta_f          = delta_D_KPi;
k_B_h            = 1.;
k_f              = 1.;
g                = gamma;


double num_a_ADS_DK_KPi_th = 0.;
num_a_ADS_DK_KPi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_ADS_DK_KPi_th -= Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_ADS_DK_KPi_th = 0.;
den_a_ADS_DK_KPi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_ADS_DK_KPi_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_ADS_DK_KPi_th =  num_a_ADS_DK_KPi_th / den_a_ADS_DK_KPi_th;

//printf("DEBUG: %g %g %g %g %g %g %g %g %g %g %g\n ",r_B_h, delta_B_h/180*M_PI, k_B_h, r_f, delta_f/180*M_PI, 
//      k_f, g/180*M_PI,xD, yD, Mxy,
//      Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy));
//return 0;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              A_CP_DK_KK equation 150  equation (211)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_f              = 1.;           //      settings for the CP case
delta_f          = 0.;           //      
k_f              = 1.;           //   
r_B_h            = r_B_DK;
delta_B_h        = delta_B_DK;
k_B_h            = 1.;
g                = gamma;
double num_a_CP_DK_KK_th = 0.;
num_a_CP_DK_KK_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DK_KK_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DK_KK_th = 0.;
den_a_CP_DK_KK_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DK_KK_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f,  g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DK_KK_th = num_a_CP_DK_KK_th / den_a_CP_DK_KK_th + a_CP_dir_KK;



/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              A_CP_DK_PiPi equation 151,  equation (211)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_f              = 1.;            //      settings for the CP case
delta_f          = 0.;           //
k_f              = 1.;           //
r_B_h            = r_B_DK;
delta_B_h        = delta_B_DK;
k_B_h            = 1.;
g                = gamma; 
double diff_a_CP_DK_PiPi_th = 0.;
diff_a_CP_DK_PiPi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
diff_a_CP_DK_PiPi_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double sum_a_CP_DK_PiPi_th = 0.;
sum_a_CP_DK_PiPi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
sum_a_CP_DK_PiPi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f,  g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DK_PiPi_th = diff_a_CP_DK_PiPi_th / sum_a_CP_DK_PiPi_th + a_CP_dir_PiPi;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              A_fav_DK_KPi equation 154,  equation (210)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_B_h            = r_B_DK;
r_f              = r_D_KPi;
delta_B_h        = delta_B_DK;
delta_f          = delta_D_KPi;
k_B_h            = 1.;
k_f              = 1.;
g                = gamma;
double diff_a_fav_DK_KPi_th = 0.;
diff_a_fav_DK_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
diff_a_fav_DK_KPi_th -=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double sum_a_fav_DK_KPi_th = 0.;
sum_a_fav_DK_KPi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy); 
sum_a_fav_DK_KPi_th += Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f,  g, k_B_h, k_f, xD, yD, Mxy);

double a_fav_DK_KPi_th =  diff_a_fav_DK_KPi_th / sum_a_fav_DK_KPi_th;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              R_ADS_DK_KPi equation 155, equation (213)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_B_h            = r_B_DK;
r_f              = r_D_KPi;
delta_B_h        = delta_B_DK;
delta_f          = delta_D_KPi;
k_B_h            = 1.;
k_f              = 1.;
g                = gamma;
double num_r_ADS_DK_KPi_th = 0.;
num_r_ADS_DK_KPi_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_ADS_DK_KPi_th +=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_ADS_DK_KPi_th = 0.;
den_r_ADS_DK_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_ADS_DK_KPi_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f,  g, k_B_h, k_f, xD, yD, Mxy);

double r_ADS_DK_KPi_th = num_r_ADS_DK_KPi_th / den_r_ADS_DK_KPi_th;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              r_CP_KK_th equation (209)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
r_f             = 1.;            //      settings for the CP case
delta_f         = 0.;           //
k_f             = 1;           //
r_B_h           = r_B_DK;
delta_B_h       = delta_B_DK;
k_B_h           = 1.;
g               = gamma;
double num_r_CP_KK_th = 0.;
num_r_CP_KK_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_r_CP_KK_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
double den_r_CP_KK_th = 0.;
r_f             = r_D_KPi;
delta_f         = delta_D_KPi;
k_f             = 1;
den_r_CP_KK_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CP_KK_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_CP_KK_th = num_r_CP_KK_th / den_r_CP_KK_th;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              r_CP_PiPi_th equation (209)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
r_B_h           = r_B_DK;
delta_B_h       = delta_B_DK;
k_B_h           = 1.;
r_f             = 1.;            //      settings for the CP case
delta_f         = 0.;           //
k_f             = 1;           //
g               = gamma;
double num_r_CP_PiPi_th = 0.;
num_r_CP_PiPi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_r_CP_PiPi_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
double den_r_CP_PiPi_th = 0.;
r_f             = r_D_KPi;
delta_f         = delta_D_KPi;
k_f             = 1;
den_r_CP_PiPi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CP_PiPi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_CP_PiPi_th = num_r_CP_PiPi_th / den_r_CP_PiPi_th;

TVectorD GAhh_x_obs_min_x_th(7);

GAhh_x_obs_min_x_th(0) = a_ADS_DK_KPi_th - a_ADS_K_KPi;
GAhh_x_obs_min_x_th(1) = a_CP_DK_KK_th   - a_CP_DK_KK;
GAhh_x_obs_min_x_th(2) = a_CP_DK_PiPi_th - a_CP_DK_PiPi;
GAhh_x_obs_min_x_th(3) = a_fav_DK_KPi_th - a_fav_DK_KPi;
GAhh_x_obs_min_x_th(4) = r_ADS_DK_KPi_th - r_ADS_K_KPi;
GAhh_x_obs_min_x_th(5) = r_CP_KK_th      - r_CP_KK;
GAhh_x_obs_min_x_th(6) = r_CP_PiPi_th    - r_CP_PiPi;


//
TMatrixDSym GAhh_x_covI(7);
for(int i=0; i<7; i++)
  {
    for(int j=0;j<7; j++)
      {
	if(i>j) continue;
	GAhh_x_covI(i,j) = corGAhh(i,j)*GAhh_x_err[i]*GAhh_x_err[j];
	if(i!=j) GAhh_x_covI(j,i) = corGAhh(i,j)*GAhh_x_err[i]*GAhh_x_err[j];
      }
  }
GAhh_x_covI.Invert();

