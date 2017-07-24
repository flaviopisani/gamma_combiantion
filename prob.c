double prob( const double * par, int mode = 0) {

  // 37 Parameters
  double  a_CP_dir_KK     = par[0];   double  a_CP_dir_PiPi   = par[1];   double  F_plus_KKPi0    = par[2];   double  F_plus_PiPiPi0  = par[3];
  double  F_PiPiPiPi      = par[4];   double  delta_D_K3Pi    = par[5];   double  delta_D_KPi     = par[6];   double  delta_D_KPiPi0  = par[7];
  double  delta_D_KsKPi   = par[8];   double  delta_B_DK      = par[9];   double  delta_B_DKPiPi  = par[10];  double  delta_B_DKstar0 = par[11];
  double  delta_Bs_DsK    = par[12];  double  gamma           = par[13];  double  k_D_K3Pi        = par[14];  double  k_D_KPiPi0      = par[15];
  double  k_D_KsKPi       = par[16];  double  k_B_DKPiPi      = par[17];  double  k_B_DKstar0     = par[18];  double  r_B_DsK         = par[19];
  double  phi_s           = par[20];  double  r_D_K3Pi        = par[21];  double  r_D_KPi         = par[22];  double  r_D_KPiPi0      = par[23];
  double  r_D_KsKPi       = par[24];  double  r_B_DK          = par[25];  double  r_B_DKPiPi      = par[26];  double  r_B_DKstar0     = par[27];
  double  xD              = par[28];  double  yD              = par[29];  double  Delta_B_DKstar0 = par[30];  double  R_B_DKstar0     = par[31];

double delta_B_DstarK = par[32];
double r_B_DstarK = par[33];
double delta_B_DKstar = par[34];
double r_B_DKstar = par[35];
double k_B_DKstar = par[36];


  //  double  R_WS_D_K3Pi     = par[32];
  //double  R_D_KsKPi       = par[33];
  //double  R_WS_D_KPiPi0   = par[34];

  
  double logprob[NMODE];
  for(int i=0; i<NMODE; i++) logprob[i]=0;
  double logprior =0;
  
  /////////////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////// Gaussian priors for the chi2 minimum ////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////////////

  logprior+= -0.5 * (phi_s          - fphi_s          ) * (phi_s           - fphi_s         )/  fphi_s_err        /  fphi_s_err;
  logprior+= -0.5 * (F_plus_KKPi0   -  fF_plus_KKPi0  ) * (F_plus_KKPi0   -  fF_plus_KKPi0  )/  fF_plus_KKPi0_err/   fF_plus_KKPi0_err;
  logprior+= -0.5 * (F_plus_PiPiPi0 -  fF_plus_PiPiPi0) * (F_plus_PiPiPi0 -  fF_plus_PiPiPi0)/  fF_plus_PiPiPi0_err/ fF_plus_PiPiPi0_err;
  logprior+= -0.5 * (F_PiPiPiPi     -  fF_PiPiPiPi    ) * (F_PiPiPiPi     -  fF_PiPiPiPi    )/  fF_PiPiPiPi_err/     fF_plus_PiPiPi0_err;
  logprior+= -0.5 * (k_B_DKstar0    - fk_B_DKstar0    ) * (k_B_DKstar0    - fk_B_DKstar0    )/fk_B_DKstar0_err/fk_B_DKstar0_err;
  logprior+= -0.5 * (R_B_DKstar0    - fR_B_DKstar0    ) * (R_B_DKstar0    - fR_B_DKstar0    )/fR_B_DKstar0_err/fR_B_DKstar0_err;
  logprior+= -0.5 * (Delta_B_DKstar0    - fDelta_B_DKstar0    ) * (Delta_B_DKstar0    - fDelta_B_DKstar0    )/ fDelta_B_DKstar0_err / fDelta_B_DKstar0_err;
logprior += -0.5 * (k_B_DKstar - 0.954700)*(k_B_DKstar - 0.954700)/0.058781/0.58781;


  // CLEO KsKPi
  logprior+= DG(delta_D_KsKPi,k_D_KsKPi,fdelta_D_KsKPi,fk_D_KsKPi,fdelta_D_KsKPi_err,fk_D_KsKPi_err,0.60);
  //  logprior+= -0.5 * (delta_D_KsKPi          - fdelta_D_KsKPi       ) * (delta_D_KsKPi       - fdelta_D_KsKPi     )/  fdelta_D_KsKPi_err        /  fdelta_D_KsKPi_err;  
  //logprior+= -0.5 * (k_D_KsKPi              - fk_D_KsKPi       ) * (k_D_KsKPi       - fk_D_KsKPi     )/  fk_D_KsKPi_err        /  fk_D_KsKPi_err;  


  // HFAG 
  TVectorD x(6);
  x[0]            = xD;
  x[1]            = yD;
  x[2]            = delta_D_KPi;
  x[3]            = r_D_KPi*r_D_KPi;
  x[4]            = a_CP_dir_PiPi;
  x[5]            = a_CP_dir_KK;
  
  logprior += -0.5 * (x - HFAG_x_obs) * (HFAG_x_covI * (x - HFAG_x_obs));


  // CLEO 6D gaussian 
  TVectorD y(6);
  y[0]            = k_D_K3Pi;
  y[1]            = delta_D_K3Pi;
  y[2]            = k_D_KPiPi0;
  y[3]            = delta_D_KPiPi0;
  y[4]            = r_D_K3Pi;
  y[5]            = r_D_KPiPi0;


  logprior += -0.5 * (y - CLEO_x_obs) * (CLEO_x_covI * (y - CLEO_x_obs));


  ////////////////////////////////////////////////////////////////////
  ///////////////////////////  TRUTH RELATIONS ///////////////////////
  ///////////////////////////////////////////////////////////////////
  // ADS/GLW B->DK, D->hh
#include <GAhh_dmix_th.c>
  logprob[0]        =  -0.5 * GAhh_x_obs_min_x_th * (GAhh_x_covI * GAhh_x_obs_min_x_th);
  // GGSZ B->DK, D->Kshh
#include <ggsz_th.c>
  logprob[1]        =  -0.5 * ggsz_x_obs_min_x_th * (ggsz_x_covI * ggsz_x_obs_min_x_th);
  // ADS,GLW B->DK, D->hhhh
#include <GAhhhh_dmix_th.c>
  logprob[2]         =  -0.5 * GAhhhh_x_obs_min_x_th * (GAhhhh_x_covI * GAhhhh_x_obs_min_x_th);
#include <ADhhpi0_dmix_th.c>
  logprob[3]        =  -0.5 * ADhhpi0_x_min_x_th * (ADhhpi0_covI * ADhhpi0_x_min_x_th);
#include <gls_dmix_th.c>
  logprob[4]  = -0.5 * alpha;
  logprob[4] += -0.5 * (R_D_KsKPi_th - fR_D_KsKPi) * (R_D_KsKPi_th - fR_D_KsKPi) / fR_D_KsKPi_err /fR_D_KsKPi_err;
  logprob[4] += -0.5 * (R_D_KsKPi_th - fR_D_KsKPi_lhcb) * (R_D_KsKPi_th - fR_D_KsKPi_lhcb) / fR_D_KsKPi_lhcb_err /fR_D_KsKPi_lhcb_err;
#include <GAKPiPiDhh_dmix_th.c>
  logprob[5] = -0.5 * beta;
  logprob[5] += DG(a_CP_DKPiPi_KK_th,a_CP_DKPiPi_PiPi_th,a_CP_DKPiPi_KK,a_CP_DKPiPi_PiPi,GAKPiPiDhh_x_err(2),GAKPiPiDhh_x_err(3),0.20);
#include <BsDsK_th.c>
  logprob[6]     =  -0.5 *BsDsK_x_obs_min_x_th * (BsDsK_x_covI * BsDsK_x_obs_min_x_th);
#include <GABDKstar_dmix_th.c>
  logprob[7]     =  -0.5 *GABDKstar_x_obs_min_x_th * (GABDKstar_xcovI * GABDKstar_x_obs_min_x_th);
#include <ggsz_DKPi_th.c>
  logprob[8]     =  -0.5 * ggsz_DKPi_x_obs_min_x_th * (ggsz_DKPi_x_covI * ggsz_DKPi_x_obs_min_x_th);
#include <ggsz_DKstar0_th.c>
  logprob[9]     =  -0.5 * ggsz_DKstar0_x_obs_min_x_th * (ggsz_DKstar0_x_covI * ggsz_DKstar0_x_obs_min_x_th);

#include <GBDstarKp_th.c>
logprob[10] = -0.5 *GBDstarKp_x_obs_min_x_th * (GBDstarKp_xcovI * GBDstarKp_x_obs_min_x_th);
#include <GABDKstarp_th.c>
logprob[11] = -0.5 *GABDKstarp_x_obs_min_x_th * (GABDKstarp_xcovI * GABDKstarp_x_obs_min_x_th);


  logprob[12]=logprob[0]+logprob[1]+logprob[2]+logprob[3]+logprob[4]+logprob[5]+logprob[6]+logprob[7]+logprob[8]+logprob[9]+logprob[10]+logprob[11];
  //  printf("DEBUG: %g %g %g %g %g %g %g %g %g %g \n",logprob[0],logprob[1],logprob[2],logprob[3],logprob[4],
  //	 logprob[5],logprob[6],logprob[7],logprob[8],logprob[9]);
  if(mode==0) return -(logprior+logprob[12]);
  else     return logprob[mode];
 
}

void minuitFunction(int& nDim, double* gout, double& result, double * par, int flg) {
  //printf("RESULT 2: %f\n",result);
  result = prob(par,0);
}
