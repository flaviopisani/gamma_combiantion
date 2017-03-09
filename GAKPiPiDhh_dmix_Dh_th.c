Mxy              = 0.6;

/////////////////////////////////////////////////////////////////////////////////
r_f             = 1.;            //      settings for the CP case
delta_f         = 0.;           //
k_f             = 1;           //
r_B_h           = r_B_DKPiPi;
delta_B_h       = delta_B_DKPiPi;
k_B_h           = k_B_DKPiPi;
g               = gamma;
double num_r_CP_DKPiPi_th = 0.;
num_r_CP_DKPiPi_th += Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
num_r_CP_DKPiPi_th += Gamma_BPlus_suppressed (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, 0);
double den_r_CP_DKPiPi_th = 0.;
r_f             = 0;
delta_f         = 0;
k_f             = 1;
den_r_CP_DKPiPi_th += Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_r_CP_DKPiPi_th += Gamma_BPlus_favored (r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double r_CP_DKPiPi_th = num_r_CP_DKPiPi_th / den_r_CP_DKPiPi_th;

// equation (258)
//double r_CP_DKPiPi_th           = 1. + r_B_DKPiPi * r_B_DKPiPi + 2. * k_B_DKPiPi * r_B_DKPiPi * cos(delta_B_DKPiPi/180.*M_PI)* cos(gamma/180.*M_PI);

//
//      Observable A_fav_DKPiPi_KPi, equation 198, expression 259       
//
r_B_h           = r_B_DKPiPi;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DKPiPi;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DKPiPi; 
k_f             = 1.;
g               = gamma;  
double num_a_fav_KPiPi_KPi_th =0.;
num_a_fav_KPiPi_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_fav_KPiPi_KPi_th -=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_fav_KPiPi_KPi_th =0.;
den_a_fav_KPiPi_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_fav_KPiPi_KPi_th +=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double a_fav_DKPiPi_KPi_th = num_a_fav_KPiPi_KPi_th / den_a_fav_KPiPi_KPi_th;


//
//      Observable A_fav_DPiPiPi_KPi, equation 198, expression 259       
//
r_B_h           = r_B_DPiPiPi;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DPiPiPi;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DPiPiPi; 
k_f             = 1.;
g               = gamma;  

double num_a_fav_PiPiPi_KPi_th =0.;
num_a_fav_PiPiPi_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_fav_PiPiPi_KPi_th -=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_fav_PiPiPi_KPi_th =0.;
den_a_fav_PiPiPi_KPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_fav_PiPiPi_KPi_th +=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double a_fav_DPiPiPi_KPi_th = num_a_fav_PiPiPi_KPi_th / den_a_fav_PiPiPi_KPi_th;


//
//      Observable A_CP_DKPiPi_KK, equation 200, expression 261         
//
r_B_h           = r_B_DKPiPi;
r_f             = 1.;
delta_B_h       = delta_B_DKPiPi;
delta_f         = 0.;
k_B_h           = k_B_DKPiPi; 
k_f             = 1.;
g               = gamma;
double num_a_CP_DKPiPi_KK_th =0.;
num_a_CP_DKPiPi_KK_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DKPiPi_KK_th -=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DKPiPi_KK_th =0.;
den_a_CP_DKPiPi_KK_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DKPiPi_KK_th +=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double a_CP_DKPiPi_KK_th = num_a_CP_DKPiPi_KK_th / den_a_CP_DKPiPi_KK_th + a_CP_dir_KK; 

//
//      Observable A_CP_DKPiPi_PiPi, equation 201, expression 262
//
//
r_B_h           = r_B_DKPiPi;
r_f             = 1.;
delta_B_h       = delta_B_DKPiPi;
delta_f         = 0.;
k_B_h           = k_B_DKPiPi; 
k_f             = 1.;
g               = gamma;           
double num_a_CP_DKPiPi_PiPi_th =0.;
num_a_CP_DKPiPi_PiPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DKPiPi_PiPi_th -=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DKPiPi_PiPi_th =0.;
den_a_CP_DKPiPi_PiPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DKPiPi_PiPi_th +=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double a_CP_DKPiPi_PiPi_th = num_a_CP_DKPiPi_PiPi_th / den_a_CP_DKPiPi_PiPi_th + a_CP_dir_PiPi; 



//
//      Observable A_CP_DPiPiPi_KK, equation 200, expression 261         
//
r_B_h           = r_B_DPiPiPi;
r_f             = 1.;
delta_B_h       = delta_B_DPiPiPi;
delta_f         = 0.;
k_B_h           = k_B_DPiPiPi; 
k_f             = 1.;
g               = gamma;
double num_a_CP_DPiPiPi_KK_th =0.;
num_a_CP_DPiPiPi_KK_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DPiPiPi_KK_th -=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DPiPiPi_KK_th =0.;
den_a_CP_DPiPiPi_KK_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DPiPiPi_KK_th +=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);

double a_CP_DPiPiPi_KK_th = num_a_CP_DPiPiPi_KK_th / den_a_CP_DPiPiPi_KK_th + a_CP_dir_KK; 

//
//      Observable A_CP_DPiPiPi_PiPi, equation 201, expression 262
//
//
r_B_h           = r_B_DPiPiPi;
r_f             = 1.;
delta_B_h       = delta_B_DPiPiPi;
delta_f         = 0.;
k_B_h           = k_B_DPiPiPi; 
k_f             = 1.;
g               = gamma;           
double num_a_CP_DPiPiPi_PiPi_th =0.;
num_a_CP_DPiPiPi_PiPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
num_a_CP_DPiPiPi_PiPi_th -=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_a_CP_DPiPiPi_PiPi_th =0.;
den_a_CP_DPiPiPi_PiPi_th +=  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
den_a_CP_DPiPiPi_PiPi_th +=  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double a_CP_DPiPiPi_PiPi_th = num_a_CP_DPiPiPi_PiPi_th / den_a_CP_DPiPiPi_PiPi_th + a_CP_dir_PiPi; 



//
//      Observable R_plus_DKPiPi_KPi, equation 204, expression 265      
//
r_B_h           = r_B_DKPiPi;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DKPiPi;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DKPiPi; 
k_f             = 1.;
g               = gamma;

double num_r_plus_DKPiPi_KPi_th =0.;
num_r_plus_DKPiPi_KPi_th =  Gamma_BPlus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_plus_DKPiPi_KPi_th =0.;
den_r_plus_DKPiPi_KPi_th =  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double r_plus_DKPiPi_KPi_th = num_r_plus_DKPiPi_KPi_th / den_r_plus_DKPiPi_KPi_th;

//
//      Observable R_minus_DKPiPi_KPi, equation 205, expression 266     
//
r_B_h           = r_B_DKPiPi;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DKPiPi;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DKPiPi; 
k_f             = 1.;
g               = gamma;

double num_r_minus_DKPiPi_KPi_th =0.;
num_r_minus_DKPiPi_KPi_th =  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_minus_DKPiPi_KPi_th =0.;
den_r_minus_DKPiPi_KPi_th =  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double r_minus_DKPiPi_KPi_th = num_r_minus_DKPiPi_KPi_th / den_r_minus_DKPiPi_KPi_th;



//
//      Observable R_plus_DPiPiPi_KPi, equation 204, expression 265      
//
r_B_h           = r_B_DPiPiPi;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DPiPiPi;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DPiPiPi; 
k_f             = 1.;
g               = gamma;

double num_r_plus_DPiPiPi_KPi_th =0.;
num_r_plus_DPiPiPi_KPi_th =  Gamma_BPlus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_plus_DPiPiPi_KPi_th =0.;
den_r_plus_DPiPiPi_KPi_th =  Gamma_BPlus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double r_plus_DPiPiPi_KPi_th = num_r_plus_DPiPiPi_KPi_th / den_r_plus_DPiPiPi_KPi_th;

//
//      Observable R_minus_DPiPiPi_KPi, equation 205, expression 266     
//
r_B_h           = r_B_DPiPiPi;
r_f             = r_D_KPi;
delta_B_h       = delta_B_DPiPiPi;
delta_f         = delta_D_KPi;
k_B_h           = k_B_DPiPiPi; 
k_f             = 1.;
g               = gamma;

double num_r_minus_DPiPiPi_KPi_th =0.;
num_r_minus_DPiPiPi_KPi_th =  Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double den_r_minus_DPiPiPi_KPi_th =0.;
den_r_minus_DPiPiPi_KPi_th =  Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, g, k_B_h, k_f, xD, yD, Mxy);
double r_minus_DPiPiPi_KPi_th = num_r_minus_DPiPiPi_KPi_th / den_r_minus_DPiPiPi_KPi_th;



///////////////////////////  PDF DEFINITION ///////////////////////
TVectorD GAKPiPiDhh_x_obs_min_x_th(11);
GAKPiPiDhh_x_obs_min_x_th(0)       = r_CP_DKPiPi         - r_CP_DKPiPi_th;
GAKPiPiDhh_x_obs_min_x_th(1)       = a_fav_DKPiPi_KPi    - a_fav_DKPiPi_KPi_th;
GAKPiPiDhh_x_obs_min_x_th(2)       = a_fav_DPiPiPi_KPi   - a_fav_DPiPiPi_KPi_th;
GAKPiPiDhh_x_obs_min_x_th(3)       = a_CP_DKPiPi_KK      - a_CP_DKPiPi_KK_th;
GAKPiPiDhh_x_obs_min_x_th(4)       = a_CP_DKPiPi_PiPi    - a_CP_DKPiPi_PiPi_th;
GAKPiPiDhh_x_obs_min_x_th(5)       = a_CP_DPiPiPi_KK      - a_CP_DPiPiPi_KK_th;
GAKPiPiDhh_x_obs_min_x_th(6)       = a_CP_DPiPiPi_PiPi    - a_CP_DPiPiPi_PiPi_th;
GAKPiPiDhh_x_obs_min_x_th(7)       = r_plus_DKPiPi_KPi   - r_plus_DKPiPi_KPi_th;
GAKPiPiDhh_x_obs_min_x_th(8)       = r_minus_DKPiPi_KPi   - r_minus_DKPiPi_KPi_th;
GAKPiPiDhh_x_obs_min_x_th(9)       = r_plus_DPiPiPi_KPi   - r_plus_DPiPiPi_KPi_th;
GAKPiPiDhh_x_obs_min_x_th(10)      = r_minus_DPiPiPi_KPi   - r_minus_DPiPiPi_KPi_th;

double beta= 0.;
//for(int j=0; j<4; j++)
beta += GAKPiPiDhh_x_obs_min_x_th(0)/GAKPiPiDhh_x_err(0)*GAKPiPiDhh_x_obs_min_x_th(0)/ GAKPiPiDhh_x_err(0);
beta += GAKPiPiDhh_x_obs_min_x_th(1)/GAKPiPiDhh_x_err(1)*GAKPiPiDhh_x_obs_min_x_th(1)/ GAKPiPiDhh_x_err(1);
beta += GAKPiPiDhh_x_obs_min_x_th(2)/GAKPiPiDhh_x_err(2)*GAKPiPiDhh_x_obs_min_x_th(2)/ GAKPiPiDhh_x_err(2);
beta += GAKPiPiDhh_x_obs_min_x_th(7)/GAKPiPiDhh_x_err(7)*GAKPiPiDhh_x_obs_min_x_th(7)/ GAKPiPiDhh_x_err(7);
beta += GAKPiPiDhh_x_obs_min_x_th(8)/GAKPiPiDhh_x_err(8)*GAKPiPiDhh_x_obs_min_x_th(8)/ GAKPiPiDhh_x_err(8);
beta += GAKPiPiDhh_x_obs_min_x_th(9)/GAKPiPiDhh_x_err(9)*GAKPiPiDhh_x_obs_min_x_th(9)/ GAKPiPiDhh_x_err(9);
beta += GAKPiPiDhh_x_obs_min_x_th(10)/GAKPiPiDhh_x_err(10)*GAKPiPiDhh_x_obs_min_x_th(10)/ GAKPiPiDhh_x_err(10);

