#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <map>
#include "TRandom3.h"
#include "TTree.h"
#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TSystem.h"
#include "TDatime.h"
#include "Math/Random.h"
#include "Math/Minimizer.h"
#include "Math/Factory.h"
#include "Math/Functor.h"
#include "Math/GSLRndmEngines.h"
#include "TMatrixDSym.h"
#include "TVectorD.h"
#include <gsl/gsl_sf_gamma.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_blas.h>
#include <gsl/gsl_linalg.h>
#include <TFitter.h>
#include <TMath.h>
#include <RooRealVar.h>
#include <RooDataHist.h>
#include <RooHistPdf.h>
using namespace std;

#define N1DPLOT  32
#define NMODE 11
#define NBIN 1800
#define NBINX 100
#define NBINY 100


// where the measurements are given
#include <global_variable.c>
// definition of the functions
#include <functions_dmix_th.c>
#include <function.c>
// Main routine for chi2 and baysian analysis
#include <prob.c>

int main(int argc, char * argv[]) {

  int grid =0;

  if (argc>4){
    cout<<"wrong usage. Correct: ./gamma [mode] [n. extraction]  "<<endl;return 0;
  }
  char * mode;
  mode = argv[1];
  int NMAX = atoi(argv[2]);
  int modeNum;
  if(argc>3)grid = atoi(argv[3]);


  int jobpid = getpid();
  TDatime * now = new TDatime();
  int today = now->GetDate();
  int clock = now->GetTime();
  int rndSeed = today+clock+jobpid;
  gsl_rng_default_seed = today+clock+jobpid;
  
  //TRandom3 * myRandom = new TRandom3(rndSeed);
  ROOT::Math::Random<ROOT::Math::GSLRngMT> * myRandom = new ROOT::Math::Random<ROOT::Math::GSLRngMT>(rndSeed);

#include <initialize.c>
  
  bool right_mode = false;
  for (int i=0; i<NMODE; i++) if ( mode == mode_to_str[i]  ) right_mode=true;
  if(!right_mode) {
    printf("Mode not supported: %s\n",mode); 
    printf("Availble mode are: \n"); 
    for (int i=0; i<NMODE; i++) printf("%s\n",mode_to_str[i].Data());
    return 1;
  }
  


  /////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////// INPUTS //////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////  
  // Histograms 
#include<histograms.c>
  //HFAG inputs
#include <hfag.c>
  //CLEO inputs
#include <cleo_K3pi_kpipi0_6d.c>
  //ADS/GLW B->DK, D->hh  Inputs
#include <GAhh.c>
  // GGSZ  Inputs  
#include <ggsz.c>
  // ADS,GLW B->DK, D->hhhh inputs
#include <GAhhhh.c>
  //B->DK, D->hhpi0 ADS inputs 
#include <ADhhpi0.c>
  // B->DK, D->KsKPi, GLS   
#include <gls.c>
  // B->DKPiPi, D->hh, GLS,ADS 
#include <GAKPiPiDhh.c>
// Bs->DsK  
#include <BsDsK.c>
  //      B^{0}-->DK^{star0} GLW/ADS
#include <GABDKstar.c>
  // GGSZ DKPi Inputs  
#include <ggsz_DKPi.c>  
  // GGSZ DKStar
#include <ggsz_DKstar0.c>



#include <measures_classes.h>
#include <assign_from_classes.h>

  /////////////////////////////////////////////////////////////////////////////
  /////////////////////////////// END INPUTS //////////////////////////////////
  //////////////////////////////////////// ////////////////////////////////////
  

  /////////////////////////////////////////////////////////////////////////////
  /////////////////////////////// MINIMIZER-CHI2 //////////////////////////////
  //////////////////////////////////////// ////////////////////////////////////
  // Search for the minimum 
  // set starting point
  TFitter* minimizer = new TFitter(32);
  double p1 = 3;
  minimizer->ExecuteCommand("SET PRINTOUT",&p1,1);
  minimizer->SetFCN(minuitFunction);
  //  for (int i=0; i<N1DPLOT; i++) minimizer->SetParameter(i,var_to_str[i].Data(),param[i],0.001*(x_max[i]-x_min[i]),x_min[i],x_max[i]);
  for (int i=0; i<N1DPLOT; i++) minimizer->SetParameter(i,var_to_str[i].Data(),param[i],0.001*(x_max[i]-x_min[i]),0,0);
  Double_t stratArg(2) ;
  minimizer->ExecuteCommand("SET STR",&stratArg,1);
  Double_t level = 0.5;
  minimizer->ExecuteCommand("SET ERR",&level,1);
  Double_t eps = 1e-12;
  minimizer->ExecuteCommand("SET EPS",&eps,1) ;
  Double_t arglist[2];
  arglist[0]= 500*30000; // maximum iterations
  arglist[1]= 1.0;
  minimizer->ExecuteCommand("MIGRAD",arglist,2);
  minimizer->ExecuteCommand("HESSE",arglist,1);

  // get best fit value
  for (int i=0; i<32; i++) param[i] = minimizer->GetParameter(i);
  //printf(" %i %f\n",i,param[i]);
  double tmp = prob(param,0);
  printf("FCN value at minimum: %f %f\n",tmp,param[13]);
  //  return 0;
  
  HFAG_x_covI.Invert();
  CLEO_x_covI.Invert();

  // random generator for multivariate gaussian 
  int progress = 0;
  printf("\n");

  gsl_rng * r;
  //  const gsl_rng_type * T;
  gsl_rng_env_setup();
  //  T = gsl_rng_default;
  //  r = gsl_rng_alloc(T);
  r = gsl_rng_alloc(gsl_rng_mt19937);
  gsl_rng_set (r, rndSeed);      

  //  gsl_rng * rc;
  //const gsl_rng_type * Tc;
  //gsl_rng_env_setup();
  //Tc = gsl_rng_default;
  //rc = gsl_rng_alloc(Tc);

  gsl_vector * hfag_mean = gsl_vector_alloc(6);
  gsl_matrix * hfag_x_covI = gsl_matrix_alloc(6,6);
  gsl_vector * hfag_resul = gsl_vector_alloc (6);    
  for (int i = 0; i <6; i++) gsl_vector_set (hfag_mean, i,HFAG_x_obs[i]);
  for(int i=0; i<6; i++) {
    for(int j=0;j<6; j++) {
      gsl_matrix_set (hfag_x_covI, i, j,HFAG_x_covI(i,j));
    }
  }  

  gsl_vector * cleo_mean = gsl_vector_alloc(6);
  gsl_matrix * cleo_x_covI = gsl_matrix_alloc(6,6);
  gsl_vector * cleo_resul = gsl_vector_alloc (6);
  for (int i = 0; i <6; i++) gsl_vector_set (cleo_mean, i,CLEO_x_obs[i]);

    for(int i=0; i<6; i++) {
      for(int j=0;j<6; j++) {
	gsl_matrix_set (cleo_x_covI, i, j,CLEO_x_covI(i,j));
      }
    }
  
  for(long int i = 0; i<NMAX; i++) {
    
    float pp = float(i)/NMAX*100;
    int PP = (int) pp;
    //    printf("%f %\n",pp);
    if(PP == progress) {
      printf("Extraction in progress, be patient: %d %\n",progress);
      progress=progress+10;
    }

    /////////////////////////////////////////////////////////////////////////////////
    //////////////////////////// Generating priors /////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////////
    //////////////////////// GSL generator for HFAG inputs ////////////////////////


    // HFAG multivariate 
    rmvnorm(r,6,hfag_mean,hfag_x_covI,hfag_resul);
    ////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////////
    //////////////////////// GSL generator for CLEO inputs ////////////////////////
    
    // CLEO multivariate 
    rmvnorm(r,6,cleo_mean,cleo_x_covI,cleo_resul);

    ////////////////////////////////////////////////////////////////////////////////
    //logprior+= DG(delta_D_KsKPi,k_D_KsKPi,fdelta_D_KsKPi,fk_D_KsKPi,fdelta_D_KsKPi_err,fk_D_KsKPi_err,0.60);
    myRandom->Gaussian2D(fdelta_D_KsKPi_err,fk_D_KsKPi_err,0.60,param[8],param[16]);
    
    //param[0] a_CP_dir_KK HFAG input later
    // a_CP_dir_KK 
    param[0]  = gsl_vector_get (hfag_resul, 5);	
    //a_CP_dir_PiPi
    param[1]  = gsl_vector_get (hfag_resul, 4);
    // F_plus_KKPi0 - Gaussian
    param[2] = myRandom->Gaus(fF_plus_KKPi0,fF_plus_KKPi0_err);
    // F_plus_PiPiPi0 - Gaussian
    param[3] = myRandom->Gaus(fF_plus_PiPiPi0,fF_plus_PiPiPi0_err);
    // F_PiPiPiPi - Gaussian
    param[4]  = myRandom->Gaus(fF_PiPiPiPi,fF_PiPiPiPi_err);
    //delta_D_K3Pi
    param[5]  = gsl_vector_get (cleo_resul, 1);
    //delta_D_KPi
    param[6]  = gsl_vector_get (hfag_resul, 2);
    //delta_D_KPiPi0
    param[7]  = gsl_vector_get (cleo_resul, 3);
    //      delta_D_KsKPi
    param[8] = param[8]+fdelta_D_KsKPi;   // 2D gaussian    
    // delta_B_DK    - unknonws  flat
    param[9]  = myRandom->Uniform(1) * (delta_B_DK_range[1]-delta_B_DK_range[0]) + delta_B_DK_range[0];    
    // delta_B_DKPiPi - unknonws  flat  
    param[10] = myRandom->Uniform(1) * (delta_B_DKPiPi_range[1]-delta_B_DKPiPi_range[0])+ delta_B_DKPiPi_range[0];
    // delta_B_DKstar0 - unknonws  flat
    param[11]  = myRandom->Uniform(1) * (delta_B_DKstar0_range[1]-delta_B_DKstar0_range[0])+ delta_B_DKstar0_range[0];
    // delta_Bs_DsK - unknonws  flat
    param[12] = myRandom->Uniform(1) * (delta_Bs_DsK_range[1]-delta_Bs_DsK_range[0])+ delta_Bs_DsK_range[0];
    // gamma - unknonws  flat
    param[13] = myRandom->Uniform(1) * (gamma_range[1]-gamma_range[0]) + gamma_range[0];
    //k_D_K3Pi 
    param[14] = gsl_vector_get (cleo_resul, 0);
    //k_D_KPiPi0
    param[15] = gsl_vector_get (cleo_resul, 2);
    //k_D_KsKPi
    param[16] = param[16] + fk_D_KsKPi;
    // k_B_DKPiPi  - unknonws  flat
    param[17] = myRandom->Uniform(1) * (k_B_DKPiPi_range[1]-k_B_DKPiPi_range[0])+ k_B_DKPiPi_range[0];
    // k_B_DKstar0 - Gaussian  
    param[18] = myRandom->Gaus(fk_B_DKstar0,fk_B_DKstar0_err);
    // r_B_DsK   - unknonws  flat
    param[19] = myRandom->Uniform(1) * (r_B_DsK_range[1]-r_B_DsK_range[0])+ r_B_DsK_range[0];
    //phi_s  - Gaussian 
    param[20]  = myRandom->Gaus(fphi_s, fphi_s_err); 
    //r_D_K3Pi
    param[21]  = gsl_vector_get (cleo_resul, 4);
    //    r_D_KPi
    param[22] = sqrt(gsl_vector_get (hfag_resul, 3));
    // r_D_KPiPi0
    param[23] = gsl_vector_get (cleo_resul, 5);
    // r_D_KsKPi - unknonws  flat   
    param[24] = myRandom->Uniform(1) * 0.3 + 0.45;
    // r_B_DK - unknonws  flat   
    param[25] = myRandom->Uniform(1) * (r_B_DK_range[1]-r_B_DK_range[0]) + r_B_DK_range[0];
    //r_B_DKPiPi - unknonws  flat
    param[26] = myRandom->Uniform(1) * (r_B_DKPiPi_range[1]-r_B_DKPiPi_range[0])+ r_B_DKPiPi_range[0];
    //r_B_DKstar0  - unknonws  flat 
    param[27] = myRandom->Uniform(1) * (r_B_DKstar0_range[1]-r_B_DKstar0_range[0])+ r_B_DKstar0_range[0];
    //    xD
    param[28] = gsl_vector_get (hfag_resul, 0);
    //    yD         
    param[29] = gsl_vector_get (hfag_resul, 1);
    //Delta_B_DKstar0 - Gaussian 
    param[30]= myRandom->Gaus(fDelta_B_DKstar0,fDelta_B_DKstar0_err);
    //R_B_DKstar0 - Gaussian 
    param[31]= myRandom->Gaus(fR_B_DKstar0,fR_B_DKstar0_err);

    //    for (int i=0; i<32; i++) printf("PARARM %d %f\n",i,param[i]);
     
    //gsl_rng_free(rc);
    double logprob = prob(param,modeNum);
    //    return 0;

    if(i<100000) {for (int i=0; i<N1DPLOT; i++) H1D_prior[i]->Fill(param[i]);}
    
    //    printf("PARAM 3: %g %g\n", param[2],logprob);          
    for (int i=0; i<N1DPLOT; i++) {
      H1D[i]->Fill(param[i],exp(logprob));
    }
    
    if (mode == mode_to_str[2] || mode == mode_to_str[8])  H2D[5][14]->Fill(param[5],param[14],exp(logprob));
    if (mode == mode_to_str[5]) { 
      H2D[10][13]->Fill(param[10],param[13],exp(logprob));
      H2D[10][26]->Fill(param[10],param[26],exp(logprob));
      H2D[13][26]->Fill(param[13],param[26],exp(logprob));
    } 
    else if (mode == mode_to_str[6]) {
      H2D[12][13]->Fill(param[12],param[13],exp(logprob));
      H2D[12][19]->Fill(param[12],param[19],exp(logprob));
      H2D[13][19]->Fill(param[13],param[19],exp(logprob));
    }
    else if (mode==mode_to_str[7]) {
      H2D[11][13]->Fill(param[11],param[13],exp(logprob));
      H2D[11][27]->Fill(param[11],param[27],exp(logprob));
      H2D[13][27]->Fill(param[13],param[27],exp(logprob));     
    }
    else {
      H2D[13][25]->Fill(param[13],param[25],exp(logprob));
      H2D[9][13]->Fill(param[9],param[13],exp(logprob));
      H2D[9][25]->Fill(param[9],param[25],exp(logprob));	
    }    
    
    /*
    for (int i=0; i<N1DPLOT; i++)  {
      for (int j=0; j<N1DPLOT; j++)  {
	  if(i==j) continue;
	  if(i>j) continue;
	  H2D[i][j]->Fill(param[i],param[j],exp(logprob[modeNum]));
      }
    }
    */
  }
    // delete gsl vector
    gsl_vector_free(hfag_mean);    
    gsl_vector_free(hfag_resul);
    gsl_matrix_free(hfag_x_covI);
    //    gsl_rng_free(r);
    
    gsl_vector_free(cleo_mean);
    gsl_vector_free(cleo_resul);
    gsl_matrix_free(cleo_x_covI);

  gsl_rng_free(r);  
  char  fileWithSeed[50]; 
  if(grid==1)     sprintf(fileWithSeed,"gammaFile_%i_%s.root",rndSeed,mode);
  else sprintf(fileWithSeed,"root_file/gammaFile_%i_%s.root",rndSeed,mode);

    //    sprintf(fileWithSeed,"test.root",rndSeed);
    printf("Output file: %s\n",fileWithSeed);
    
    TFile * outFile = new TFile(fileWithSeed,"RECREATE");
    outFile->cd();
    
    for (int i=0; i<N1DPLOT; i++) {
      //      for (int j=NMODE-1; j<NMODE; j++) {      
	//topdir[j]->cd(); 
      H1D[i]->Write(); 
      H1D_prior[i]->Write(); 
      
    }
    //    }  
    if (mode == mode_to_str[2] || mode == mode_to_str[8])  H2D[5][14]->Write();
    if (mode==mode_to_str[5]) {
      H2D[10][13]->Write();
      H2D[10][26]->Write();
      H2D[13][26]->Write();
    }
    else if (mode==mode_to_str[6]) {
      H2D[12][13]->Write();
      H2D[12][19]->Write();
      H2D[13][19]->Write();
    }
    else if (mode==mode_to_str[7]) {
      H2D[11][13]->Write();
      H2D[11][27]->Write();
      H2D[13][27]->Write();
    }
    else {
      H2D[13][25]->Write();
      H2D[9][13]->Write();
      H2D[9][25]->Write();
    }
    
    /*
      for (int i=0; i<N1DPLOT; i++)  {
      for (int j=0; j<N1DPLOT; j++)  {
	  if(i==j) continue;
	  if(i>j) continue;
	  H2D[i][j]->Write();
      }
    } 
    */
    //  h_gamma_prior->Write();
    //    h_delta_D_K3Pi_prior->Write();    
    outFile->Close();
    
    printf("\n");
  }

