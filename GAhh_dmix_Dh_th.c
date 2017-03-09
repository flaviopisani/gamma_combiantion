Mxy              = 0.594;
//Mxy              = 0.0;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                     A_ADS_DK_KPi equation 148,  equation (214)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

//      A_ADS_DPi_KPi equation 149
//
r_B_h           = r_B_DPi;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DPi;
delta_f         = delta_D_KPi;
k_B_h           = 1.;
k_f             = 1.;
double num_a_ADS_DPi_KPi_th = 0.;
num_a_ADS_DPi_KPi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f, xD, yD, Mxy);
num_a_ADS_DPi_KPi_th -= Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f, xD, yD, Mxy);
double sum_a_ADS_DPi_KPi_th = 0.;
sum_a_ADS_DPi_KPi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f, xD, yD, Mxy);
sum_a_ADS_DPi_KPi_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f, xD, yD, Mxy);
double a_ADS_DPi_KPi_th = num_a_ADS_DPi_KPi_th / sum_a_ADS_DPi_KPi_th;


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
//              A_CP_DPi_KK equation 152 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_f              = 1.;           //      settings for the CP case
delta_f          = 0.;           //      
k_f              = 1.;           //   
r_B_h            = r_B_DPi;
delta_B_h        = delta_B_DPi;
k_B_h            = 1.;
g                = gamma;
double num_a_CP_DPi_KK_th = 0.;
num_a_CP_DPi_KK_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DPi_KK_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DPi_KK_th = 0.;
den_a_CP_DPi_KK_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DPi_KK_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f,  g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DPi_KK_th = num_a_CP_DPi_KK_th / den_a_CP_DPi_KK_th + a_CP_dir_KK;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              A_CP_DPi_PiPi equation 153,  equation (211)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_f              = 1.;            //      settings for the CP case
delta_f          = 0.;           //
k_f              = 1.;           //
r_B_h            = r_B_DPi;
delta_B_h        = delta_B_DPi;
k_B_h            = 1.;
g                = gamma; 
double diff_a_CP_DPi_PiPi_th = 0.;
diff_a_CP_DPi_PiPi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
diff_a_CP_DPi_PiPi_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double sum_a_CP_DPi_PiPi_th = 0.;
sum_a_CP_DPi_PiPi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
sum_a_CP_DPi_PiPi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f,  g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DPi_PiPi_th = diff_a_CP_DPi_PiPi_th / sum_a_CP_DPi_PiPi_th + a_CP_dir_PiPi;


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
//              R_ADS_DPi_KPi
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_B_h            = r_B_DPi;
r_f              = r_D_KPi;
delta_B_h        = delta_B_DPi;
delta_f          = delta_D_KPi;
k_B_h            = 1.;
k_f              = 1.;
g                = gamma;
double num_r_ADS_DPi_KPi_th = 0.;
num_r_ADS_DPi_KPi_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_ADS_DPi_KPi_th +=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_ADS_DPi_KPi_th = 0.;
den_r_ADS_DPi_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_ADS_DPi_KPi_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f,  g, k_B_h, k_f, xD, yD, Mxy);

double r_ADS_DPi_KPi_th = num_r_ADS_DPi_KPi_th / den_r_ADS_DPi_KPi_th;


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

double num_r_CPK_th = 0.;
num_r_CPK_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_r_CPK_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);

double den_r_CPK_th = 0.;
r_f             = r_D_KPi;
delta_f         = delta_D_KPi;
k_f             = 1;
den_r_CPK_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CPK_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_CPK_th = num_r_CPK_th / den_r_CPK_th;


r_f             = 1.;            //      settings for the CP case
delta_f         = 0.;           //
k_f             = 1;           //
r_B_h           = r_B_DPi;
delta_B_h       = delta_B_DPi;
k_B_h           = 1.;
g               = gamma;

double num_r_CPPi_th = 0.;
num_r_CPPi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_r_CPPi_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);

double den_r_CPPi_th = 0.;
r_f             = r_D_KPi;
delta_f         = delta_D_KPi;
k_f             = 1;
den_r_CPPi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CPPi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);


double r_CPPi_th = num_r_CPPi_th / den_r_CPPi_th;

double r_CP_KK_th = r_CPK_th/r_CPPi_th;

double r_CP_PiPi_th = r_CPK_th/r_CPPi_th;




/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              r_KPi_KPi equation (209)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_B_h           = r_B_DK;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_KPi;
k_B_h           = 1.;
k_f             = 1.;
g               = gamma;
double num_r_K_over_Pi_KPi_th =0.;
num_r_K_over_Pi_KPi_th  +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_K_over_Pi_KPi_th  +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

r_B_h           = r_B_DPi;
delta_B_h       = delta_B_DPi;

double den_r_K_over_Pi_KPi_th =0.;
den_r_K_over_Pi_KPi_th  +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_K_over_Pi_KPi_th  +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_KPi_KPi_th = RBR_DKDPi*num_r_K_over_Pi_KPi_th / den_r_K_over_Pi_KPi_th;

TVectorD GAhh_x_obs_min_x_th(12);

//printf("TEST: %f %f %f\n", r_KPi_KPi_th, r_KPi_KPi, RBR_DKDPi);
//return 0;

GAhh_x_obs_min_x_th(0)  = a_ADS_DK_KPi_th  - a_ADS_DK_KPi;
GAhh_x_obs_min_x_th(1)  = a_ADS_DPi_KPi_th - a_ADS_DPi_KPi;
GAhh_x_obs_min_x_th(2)  = a_CP_DK_KK_th    - a_CP_DK_KK;
GAhh_x_obs_min_x_th(3)  = a_CP_DK_PiPi_th  - a_CP_DK_PiPi;
GAhh_x_obs_min_x_th(4)  = a_CP_DPi_KK_th   - a_CP_DPi_KK;
GAhh_x_obs_min_x_th(5)  = a_CP_DPi_PiPi_th - a_CP_DPi_PiPi;
GAhh_x_obs_min_x_th(6)  = a_fav_DK_KPi_th  - a_fav_DK_KPi;
GAhh_x_obs_min_x_th(7)  = r_ADS_DK_KPi_th  - r_ADS_DK_KPi;
GAhh_x_obs_min_x_th(8)  = r_ADS_DPi_KPi_th - r_ADS_DPi_KPi;
GAhh_x_obs_min_x_th(9)  = r_CP_KK_th       - r_CP_KK;
GAhh_x_obs_min_x_th(10) = r_CP_PiPi_th     - r_CP_PiPi;
GAhh_x_obs_min_x_th(11) = r_KPi_KPi_th     - r_KPi_KPi;

/*
for (int i=0; i<12; i++) {
  if(i==0)  printf("GAhh: %d %g %g %g %g",i,a_ADS_DK_KPi_th,a_ADS_DK_KPi,GAhh_x_obs_min_x_th(i),GAhh_x_err[i]);
  else printf(" %d %g %g %g %g",i,a_ADS_DK_KPi_th,a_ADS_DK_KPi,GAhh_x_obs_min_x_th(i),GAhh_x_err[i]);
 }
printf("\n");
for (int i=0; i<12; i++) {
  if(i==0)  printf("GAhh 2: %d %g",i,GAhh_x_obs_min_x_th(i)/GAhh_x_err[i]*GAhh_x_obs_min_x_th(i)/GAhh_x_err[i]);
  else printf(" %d %g",i,GAhh_x_obs_min_x_th(i)/GAhh_x_err[i]*GAhh_x_obs_min_x_th(i)/GAhh_x_err[i]);
 }
printf("\n");
printf("Variable: %g %g %g %g %g %g %g %g %g %g %g %g\n",a_CP_dir_KK,a_CP_dir_PiPi,RBR_DKDPi,delta_D_KPi,delta_B_DK,delta_B_DPi,gamma,r_D_KPi,r_B_DK,r_B_DPi,xD,yD);
*/  

//
TMatrixDSym GAhh_x_covI(12);
for(int i=0; i<12; i++)
  {
    for(int j=0;j<12; j++)
      {
	if(i>j) continue;
	GAhh_x_covI(i,j) = corGAhh(i,j)*GAhh_x_err[i]*GAhh_x_err[j];
	if(i!=j) GAhh_x_covI(j,i) = corGAhh(i,j)*GAhh_x_err[i]*GAhh_x_err[j];
      }
  }
GAhh_x_covI.Invert();

