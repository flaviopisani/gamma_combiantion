Mxy              = 0.570;

double R_WS_D_K3Pi_th = r_D_K3Pi*r_D_K3Pi - k_D_K3Pi* r_D_K3Pi * ( yD * cos(delta_D_K3Pi/180.*M_PI) - xD * sin(delta_D_K3Pi/180.*M_PI) ) + 0.5 * ( xD*xD + yD *yD );

//
//      Observable A_ADS_DK_KPiPiPi, equation 160,  expression 223. 
//
r_B_h           = r_B_DK;
r_f             = r_D_K3Pi;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_K3Pi;
k_B_h           = 1.;  
k_f             = k_D_K3Pi; 
g		= gamma;
double diff_a_ADS_DK_K3Pi_th = 0.;
diff_a_ADS_DK_K3Pi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);    
diff_a_ADS_DK_K3Pi_th -= Gamma_BPlus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f , xD, yD, Mxy);
double sum_a_ADS_DK_K3Pi_th = 0.;
sum_a_ADS_DK_K3Pi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
sum_a_ADS_DK_K3Pi_th += Gamma_BPlus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_ADS_DK_K3Pi_th = diff_a_ADS_DK_K3Pi_th / sum_a_ADS_DK_K3Pi_th;

//
//      
//
r_B_h           = r_B_DPi;
r_f             = r_D_K3Pi;
delta_B_h       = delta_B_DPi;
delta_f         = delta_D_K3Pi;
k_B_h           = 1.;  
k_f             = k_D_K3Pi; 
g		= gamma;
double diff_a_ADS_DPi_K3Pi_th = 0.;
diff_a_ADS_DPi_K3Pi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);    
diff_a_ADS_DPi_K3Pi_th -= Gamma_BPlus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f , xD, yD, Mxy);
double sum_a_ADS_DPi_K3Pi_th = 0.;
sum_a_ADS_DPi_K3Pi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
sum_a_ADS_DPi_K3Pi_th += Gamma_BPlus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_ADS_DPi_K3Pi_th = diff_a_ADS_DPi_K3Pi_th / sum_a_ADS_DPi_K3Pi_th;

//
//      Observable A_CP_DK_4Pi, equation 162, expression 220.
//
r_f             = 1.;            //      settings for the CP case
delta_f         = 0.;           //
k_f             = 2.*F_PiPiPiPi -1;           //
r_B_h           = r_B_DK;
delta_B_h       = delta_B_DK;
k_B_h           = 1.;
g		= gamma;
double num_a_CP_DK_4Pi_th = 0.;
num_a_CP_DK_4Pi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_a_CP_DK_4Pi_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
double den_a_CP_DK_4Pi_th = 0.;
den_a_CP_DK_4Pi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
den_a_CP_DK_4Pi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);

double a_CP_DK_4Pi_th = num_a_CP_DK_4Pi_th / den_a_CP_DK_4Pi_th;



//
//      Observable A_CP_DPi_4Pi, equation 162, expression 220.
//
r_f             = 1.;            //      settings for the CP case
delta_f         = 0.;           //
k_f             = 2.*F_PiPiPiPi -1;           //
r_B_h           = r_B_DPi;
delta_B_h       = delta_B_DPi;
k_B_h           = 1.;
g		= gamma;
double num_a_CP_DPi_4Pi_th = 0.;
num_a_CP_DPi_4Pi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_a_CP_DPi_4Pi_th -= Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
double den_a_CP_DPi_4Pi_th = 0.;
den_a_CP_DPi_4Pi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
den_a_CP_DPi_4Pi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);

double a_CP_DPi_4Pi_th = num_a_CP_DPi_4Pi_th / den_a_CP_DPi_4Pi_th;


// equation (220)
//double a_CP_DK_4Pi_th   = (2. * (2*F_PiPiPiPi -1) * r_B_DK * sin(delta_B_DK/180.*M_PI) * sin(gamma/180.*M_PI)) /
//  (1. + r_B_DK * r_B_DK + 2. * (2*F_PiPiPiPi -1) * r_B_DK * cos(delta_B_DK/180.*M_PI)* cos(gamma/180.*M_PI));


//
//      Observable A_fav_DK_K3Pi, equation 164, expression 219.
//
r_B_h           = r_B_DK;
r_f             = r_D_K3Pi;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_K3Pi;
k_B_h           = 1.;
k_f             = k_D_K3Pi;
g		= gamma;
double num_a_fav_DK_K3Pi_th = 0.;
num_a_fav_DK_K3Pi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_fav_DK_K3Pi_th -=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_fav_DK_K3Pi_th = 0.;
den_a_fav_DK_K3Pi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_fav_DK_K3Pi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_fav_DK_K3Pi_th = num_a_fav_DK_K3Pi_th / den_a_fav_DK_K3Pi_th;

//
//      Observable R_ADS_DK_K3Pi, equation 165, expression 222.
//
r_B_h           = r_B_DK;
r_f             = r_D_K3Pi;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_K3Pi;
k_B_h           = 1.;
k_f             = k_D_K3Pi;
g		= gamma;
double num_r_ADS_DK_K3Pi_th = 0.;
num_r_ADS_DK_K3Pi_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_ADS_DK_K3Pi_th +=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_ADS_DK_K3Pi_th = 0.;
den_r_ADS_DK_K3Pi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_ADS_DK_K3Pi_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_ADS_DK_K3Pi_th = num_r_ADS_DK_K3Pi_th / den_r_ADS_DK_K3Pi_th;


//
//      Observable R_ADS_DPi_K3Pi, equation 165, expression 222.
//
r_B_h           = r_B_DPi;
r_f             = r_D_K3Pi;
delta_B_h       = delta_B_DPi;
delta_f         = delta_D_K3Pi;
k_B_h           = 1.;
k_f             = k_D_K3Pi;
g		= gamma;
double num_r_ADS_DPi_K3Pi_th = 0.;
num_r_ADS_DPi_K3Pi_th +=  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_ADS_DPi_K3Pi_th +=  Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_ADS_DPi_K3Pi_th = 0.;
den_r_ADS_DPi_K3Pi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_ADS_DPi_K3Pi_th +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_ADS_DPi_K3Pi_th = num_r_ADS_DPi_K3Pi_th / den_r_ADS_DPi_K3Pi_th;

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// R_CP_DK_4Pi   //////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

r_f             = 1.;            //      settings for the CP case
delta_f         = 0.;           //
k_f             = 2.*F_PiPiPiPi -1;           //
r_B_h           = r_B_DK;
delta_B_h       = delta_B_DK;
k_B_h           = 1.;
g               = gamma;
double num_r_CP_DK_4Pi_th = 0.;
num_r_CP_DK_4Pi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_r_CP_DK_4Pi_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
double den_r_CP_DK_4Pi_th = 0.;
r_f             = r_D_K3Pi;
delta_f         = delta_D_K3Pi;
k_f             = k_D_K3Pi;
den_r_CP_DK_4Pi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CP_DK_4Pi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_CP_DK_4Pi_th = num_r_CP_DK_4Pi_th / den_r_CP_DK_4Pi_th;


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// R_CP_DPi_4Pi   //////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

r_f             = 1.;            //      settings for the CP case
delta_f         = 0.;           //
k_f             = 2.*F_PiPiPiPi -1;           //
r_B_h           = r_B_DPi;
delta_B_h       = delta_B_DPi;
k_B_h           = 1.;
g               = gamma;
double num_r_CP_DPi_4Pi_th = 0.;
num_r_CP_DPi_4Pi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_r_CP_DPi_4Pi_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
double den_r_CP_DPi_4Pi_th = 0.;
r_f             = r_D_K3Pi;
delta_f         = delta_D_K3Pi;
k_f             = k_D_K3Pi;
den_r_CP_DPi_4Pi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CP_DPi_4Pi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_CP_DPi_4Pi_th = num_r_CP_DPi_4Pi_th / den_r_CP_DPi_4Pi_th;

double r_CP_4Pi_th = r_CP_DK_4Pi_th /r_CP_DPi_4Pi_th; 


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              r_KPi_K3Pi equation (209)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

r_B_h           = r_B_DK;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DK;
delta_f         = delta_D_K3Pi;
k_B_h           = 1.;
k_f             = k_D_K3Pi;
g               = gamma;
double num_r_K_over_Pi_K3Pi_th =0.;
num_r_K_over_Pi_K3Pi_th  +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_r_K_over_Pi_K3Pi_th  +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

r_B_h           = r_B_DPi;
delta_B_h       = delta_B_DPi;

double den_r_K_over_Pi_K3Pi_th =0.;
den_r_K_over_Pi_K3Pi_th  +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_K_over_Pi_K3Pi_th  +=  Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_KPi_K3Pi_th = RBR_DKDPi*num_r_K_over_Pi_K3Pi_th / den_r_K_over_Pi_K3Pi_th;


//      printf("Test hhhh: %f %f\n",r_CP_4Pi_th,r_CP_4Pi_th2);

TVectorD GAhhhh_x_obs_min_x_th(9);
GAhhhh_x_obs_min_x_th(0)  = a_ADS_DK_K3Pi  - a_ADS_DK_K3Pi_th;
GAhhhh_x_obs_min_x_th(1)  = a_ADS_DPi_K3Pi - a_ADS_DPi_K3Pi_th;
GAhhhh_x_obs_min_x_th(2)  = a_CP_DK_4Pi   - a_CP_DK_4Pi_th;
GAhhhh_x_obs_min_x_th(3)  = a_CP_DPi_4Pi  - a_CP_DPi_4Pi_th;
GAhhhh_x_obs_min_x_th(4)  = a_fav_DK_K3Pi - a_fav_DK_K3Pi_th;
GAhhhh_x_obs_min_x_th(5)  = r_ADS_DK_K3Pi  - r_ADS_DK_K3Pi_th;
GAhhhh_x_obs_min_x_th(6)  = r_ADS_DPi_K3Pi - r_ADS_DPi_K3Pi_th;
GAhhhh_x_obs_min_x_th(7)  = r_CP_4Pi      - r_CP_4Pi_th;
GAhhhh_x_obs_min_x_th(8)  = r_KPi_K3Pi    - r_KPi_K3Pi_th;

TMatrixDSym GAhhhh_x_covI(9);
for(int i=0; i<9; i++)
  {
    for(int j=0;j<9; j++)
      {
	if(i>j) continue;
	GAhhhh_x_covI(i,j) = corGAhhhh(i,j)*GAhhhh_x_err[i]*GAhhhh_x_err[j];
	if(i!=j) GAhhhh_x_covI(j,i) = corGAhhhh(i,j)*GAhhhh_x_err[i]*GAhhhh_x_err[j];
      }
  }
//
GAhhhh_x_covI.Invert();

/*
TMatrixDSym corCharmLHCb(3);
//      r_D_K3Pi                            k_D_K3Pi*y'                    1/4*(x^2+y^2)
corCharmLHCb(0,0)=1.0;                  corCharmLHCb(0,1)=0.91;                corCharmLHCb(0,2)=0.80;
corCharmLHCb(1,0)=corCharmLHCb(0,1);    corCharmLHCb(1,1)=1.0;                 corCharmLHCb(1,2)=0.94;
corCharmLHCb(2,0)=corCharmLHCb(0,2);    corCharmLHCb(2,1)=corCharmLHCb(1,2);   corCharmLHCb(2,2)=1.0;

double charmLHCb_K3pi_b_th = k_D_K3Pi*(yD*cos(delta_D_K3Pi/180*M_PI)-xD*sin(delta_D_K3Pi/180*M_PI));
double charmLHCb_K3pi_c_th = 0.25*(xD*xD + yD*yD);

TVectorD charmLHCb_x_obs_min_x_th(3);
charmLHCb_x_obs_min_x_th(0) = charmLHCb_K3pi_a - r_D_K3Pi;
charmLHCb_x_obs_min_x_th(1) = charmLHCb_K3pi_b - charmLHCb_K3pi_b_th;
charmLHCb_x_obs_min_x_th(2) = charmLHCb_K3pi_c - charmLHCb_K3pi_c_th;

TVectorD charmLHCb_x_err(3);
charmLHCb_x_err(0)        = charmLHCb_K3pi_a_err;
charmLHCb_x_err(1)        = charmLHCb_K3pi_b_err;
charmLHCb_x_err(2)        = charmLHCb_K3pi_c_err;
TMatrixDSym charmLHCb_x_covI(3);
for(int i=0; i<3; i++)
  {
    for(int j=0;j<3; j++)
      {
	if(i>j) continue;
	charmLHCb_x_covI(i,j) = corCharmLHCb(i,j)*charmLHCb_x_err[i]*charmLHCb_x_err[j];
	if(i!=j) charmLHCb_x_covI(j,i) = corCharmLHCb(i,j)*charmLHCb_x_err[i]*charmLHCb_x_err[j];
      }
  }
//

charmLHCb_x_covI.Invert();
*/
