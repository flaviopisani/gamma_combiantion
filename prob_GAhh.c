double prob_GAhh( const double * par) {

  double a_CP_dir_KK = par[0]; double a_CP_dir_PiPi = par[1]; double RBR_DKDPi = par[2]; double delta_D_KPi = par[3];  double delta_B_DK = par[4]; 
  double delta_B_DPi = par[5]; double gamma = par[6]; double r_D_KPi     = par[7]; double r_B_DK        = par[8]; double r_B_DPi   = par[9]; 
  double xD          = par[10]; double yD          = par[11];

  // HFAG 
  TVectorD x(6);
  x[0]            = xD;
  x[1]            = yD;
  x[2]            = delta_D_KPi;
  x[3]            = r_D_KPi*r_D_KPi;
  x[4]            = a_CP_dir_PiPi;
  x[5]            = a_CP_dir_KK;
  
  double logprior = -0.5 * (x - HFAG_x_obs) * (HFAG_x_covI * (x - HFAG_x_obs));


  ////////////////////////////////////////////////////////////////////
  ///////////////////////////  TRUTH RELATIONS ///////////////////////
  ///////////////////////////////////////////////////////////////////
  // ADS/GLW B->DK, D->hh
#include <GAhh_dmix_Dh_th.c>
  double logprob        =  -0.5 * GAhh_x_obs_min_x_th * (GAhh_x_covI * GAhh_x_obs_min_x_th);
  return -(logprior+logprob);
}

