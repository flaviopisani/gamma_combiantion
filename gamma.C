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


#include <measures_classes.h>
#include <assign_from_classes.h>



// definition of the functions
#include <functions_dmix_th.h>
#include <function.h>
// Main routine for chi2 and baysian analysis
#include <prob.c>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void assign_from_classes (char* json_file) {


	//GAhh
	Gahh gahh_paper;
	gahh_paper.assign_from_json(json_file);

	a_ADS_K_KPi = gahh_paper.get_v1();
	a_CP_DK_KK = gahh_paper.get_v2();
	a_CP_DK_PiPi = gahh_paper.get_v3();
	a_fav_DK_KPi = gahh_paper.get_v4();
	r_ADS_K_KPi = gahh_paper.get_v5();
	r_CP_KK = gahh_paper.get_v6();
	r_CP_PiPi = gahh_paper.get_v7();

	a_ADS_K_KPi_stat_err = gahh_paper.get_v1_st();
	a_CP_DK_KK_stat_err = gahh_paper.get_v2_st();
	a_CP_DK_PiPi_stat_err = gahh_paper.get_v3_st();
	a_fav_DK_KPi_stat_err = gahh_paper.get_v4_st();
	r_ADS_K_KPi_stat_err = gahh_paper.get_v5_st();
	r_CP_KK_stat_err = gahh_paper.get_v6_st();
	r_CP_PiPi_stat_err = gahh_paper.get_v7_st();

	a_ADS_K_KPi_syst_err = gahh_paper.get_v1_sy();
	a_CP_DK_KK_syst_err = gahh_paper.get_v2_sy();
	a_CP_DK_PiPi_syst_err = gahh_paper.get_v3_sy();
	a_fav_DK_KPi_syst_err = gahh_paper.get_v4_sy();
	r_ADS_K_KPi_syst_err = gahh_paper.get_v5_sy();
	r_CP_KK_syst_err = gahh_paper.get_v6_sy();
	r_CP_PiPi_syst_err = gahh_paper.get_v7_sy();



	double* pointer_to_matrix_stat;
	double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = gahh_paper.get_corrStat();
	pointer_to_matrix_syst = gahh_paper.get_corrSyst();

	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++) {
			corStatGAhh(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++) {
			corSystGAhh(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}




	//ggsz
	Ggsz ggsz_paper;
	ggsz_paper.assign_from_json(json_file);

	x_plus = ggsz_paper.get_v1();
	x_minus = ggsz_paper.get_v2();
	y_plus = ggsz_paper.get_v3();
	y_minus = ggsz_paper.get_v4();

	x_plus_stat_err = ggsz_paper.get_v1_st();
	x_minus_stat_err = ggsz_paper.get_v2_st();
	y_plus_stat_err = ggsz_paper.get_v3_st();
	y_minus_stat_err = ggsz_paper.get_v4_st();

	x_plus_syst_err = ggsz_paper.get_v1_sy();
	x_minus_syst_err = ggsz_paper.get_v2_sy();
	y_plus_syst_err = ggsz_paper.get_v3_sy();
	y_minus_syst_err = ggsz_paper.get_v4_sy();

	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = ggsz_paper.get_corrStat();
	pointer_to_matrix_syst = ggsz_paper.get_corrSyst();

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrStatGGSZ(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrSystGGSZ(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}


	//GAhhhh
	Gahhhh gahhhh_paper;
	gahhhh_paper.assign_from_json(json_file);

	a_ADS_K_K3Pi = gahhhh_paper.get_v1();
	a_CP_DK_4Pi = gahhhh_paper.get_v2();
	a_fav_DK_K3Pi = gahhhh_paper.get_v3();
	r_ADS_K_K3Pi = gahhhh_paper.get_v4();
	r_CP_4Pi = gahhhh_paper.get_v5();

	a_ADS_K_K3Pi_stat_err = gahhhh_paper.get_v1_st();
	a_CP_DK_4Pi_stat_err = gahhhh_paper.get_v2_st();
	a_fav_DK_K3Pi_stat_err = gahhhh_paper.get_v3_st();
	r_ADS_K_K3Pi_stat_err = gahhhh_paper.get_v4_st();
	r_CP_4Pi_stat_err = gahhhh_paper.get_v5_st();

	a_ADS_K_K3Pi_syst_err = gahhhh_paper.get_v1_sy();
	a_CP_DK_4Pi_syst_err = gahhhh_paper.get_v2_sy();
	a_fav_DK_K3Pi_syst_err = gahhhh_paper.get_v3_sy();
	r_ADS_K_K3Pi_syst_err = gahhhh_paper.get_v4_sy();
	r_CP_4Pi_syst_err = gahhhh_paper.get_v5_sy();



	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = gahhhh_paper.get_corrStat();
	pointer_to_matrix_syst = gahhhh_paper.get_corrSyst();

	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++) {
			corStatGAhhhh(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<5; i++){
		for (int j=0; j<7; j++) {
			corSystGAhhhh(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}

	//ADhhpi0
	Adhhpi0 adhhpi0_paper;
	adhhpi0_paper.assign_from_json(json_file);

	a_ADS_DK_KPiPi0 = adhhpi0_paper.get_v1();
	a_CP_DK_KKPi0 = adhhpi0_paper.get_v2();
	a_CP_DK_PiPiPi0 = adhhpi0_paper.get_v3();
	a_fav_DK_KPiPi0 = adhhpi0_paper.get_v4();
	r_ADS_DK_KPiPi0 = adhhpi0_paper.get_v5();
	r_CP_KKPi0 = adhhpi0_paper.get_v6();
	r_CP_PiPiPi0 = adhhpi0_paper.get_v7();

	a_ADS_DK_KPiPi0_stat_err = adhhpi0_paper.get_v1_st();
	a_CP_DK_KKPi0_stat_err = adhhpi0_paper.get_v2_st();
	a_CP_DK_PiPiPi0_stat_err = adhhpi0_paper.get_v3_st();
	a_fav_DK_KPiPi0_stat_err = adhhpi0_paper.get_v4_st();
	r_ADS_DK_KPiPi0_stat_err = adhhpi0_paper.get_v5_st();
	r_CP_KKPi0_stat_err = adhhpi0_paper.get_v6_st();
	r_CP_PiPiPi0_stat_err = adhhpi0_paper.get_v7_st();

	a_ADS_DK_KPiPi0_syst_err = adhhpi0_paper.get_v1_sy();
	a_CP_DK_KKPi0_syst_err = adhhpi0_paper.get_v2_sy();
	a_CP_DK_PiPiPi0_syst_err = adhhpi0_paper.get_v3_sy();
	a_fav_DK_KPiPi0_syst_err = adhhpi0_paper.get_v4_sy();
	r_ADS_DK_KPiPi0_syst_err = adhhpi0_paper.get_v5_sy();
	r_CP_KKPi0_syst_err = adhhpi0_paper.get_v6_sy();
	r_CP_PiPiPi0_syst_err = adhhpi0_paper.get_v7_sy();



	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = adhhpi0_paper.get_corrStat();
	pointer_to_matrix_syst = adhhpi0_paper.get_corrSyst();

	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++) {
			corStatADhhpi0(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++) {
			corSystADhhpi0(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}

	//BsDsK
	Bsdsk bsdsk_paper;
	bsdsk_paper.assign_from_json(json_file);

	C = bsdsk_paper.get_v1();
	D_bar_f = bsdsk_paper.get_v2();
	D_f = bsdsk_paper.get_v3();
	S_bar_f = bsdsk_paper.get_v4();
	S_f = bsdsk_paper.get_v5();

	C_stat_err = bsdsk_paper.get_v1_st();
	D_bar_f_stat_err = bsdsk_paper.get_v2_st();
	D_f_stat_err = bsdsk_paper.get_v3_st();
	S_bar_f_stat_err = bsdsk_paper.get_v4_st();
	S_f_stat_err = bsdsk_paper.get_v5_st();

	C_syst_err = bsdsk_paper.get_v1_sy();
	D_bar_f_syst_err = bsdsk_paper.get_v2_sy();
	D_f_syst_err = bsdsk_paper.get_v3_sy();
	S_bar_f_syst_err = bsdsk_paper.get_v4_sy();
	S_f_syst_err = bsdsk_paper.get_v5_sy();



	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = bsdsk_paper.get_corrStat();
	pointer_to_matrix_syst = bsdsk_paper.get_corrSyst();

	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++) {
			corStatBsDsK(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<5; i++){
		for (int j=0; j<7; j++) {
			corSystBsDsK(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}

	//ggszDKPi
	Ggszdkpi ggszdkpi_paper;
	ggszdkpi_paper.assign_from_json(json_file);

	x_DKPi_plus = ggszdkpi_paper.get_v1();
	x_DKPi_minus = ggszdkpi_paper.get_v2();
	y_DKPi_plus = ggszdkpi_paper.get_v3();
	y_DKPi_minus = ggszdkpi_paper.get_v4();

	x_DKPi_plus_stat_err = ggszdkpi_paper.get_v1_st();
	x_DKPi_minus_stat_err = ggszdkpi_paper.get_v2_st();
	y_DKPi_plus_stat_err = ggszdkpi_paper.get_v3_st();
	y_DKPi_minus_stat_err = ggszdkpi_paper.get_v4_st();

	x_DKPi_plus_syst_err = ggszdkpi_paper.get_v1_sy();
	x_DKPi_minus_syst_err = ggszdkpi_paper.get_v2_sy();
	y_DKPi_plus_syst_err = ggszdkpi_paper.get_v3_sy();
	y_DKPi_minus_syst_err = ggszdkpi_paper.get_v4_sy();

	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = ggszdkpi_paper.get_corrStat();
	pointer_to_matrix_syst = ggszdkpi_paper.get_corrSyst();

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrStatGGSZDKPi(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrSystGGSZDKPi(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}


	//ggszDKstar0
	Ggszdkstar0 ggszDKstar0_paper;
	ggszDKstar0_paper.assign_from_json(json_file);

	x_DKstar0_plus = ggszDKstar0_paper.get_v1();
	x_DKstar0_minus = ggszDKstar0_paper.get_v2();
	y_DKstar0_plus = ggszDKstar0_paper.get_v3();
	y_DKstar0_minus = ggszDKstar0_paper.get_v4();

	x_DKstar0_plus_stat_err = ggszDKstar0_paper.get_v1_st();
	x_DKstar0_minus_stat_err = ggszDKstar0_paper.get_v2_st();
	y_DKstar0_plus_stat_err = ggszDKstar0_paper.get_v3_st();
	y_DKstar0_minus_stat_err = ggszDKstar0_paper.get_v4_st();

	x_DKstar0_plus_syst_err = ggszDKstar0_paper.get_v1_sy();
	x_DKstar0_minus_syst_err = ggszDKstar0_paper.get_v2_sy();
	y_DKstar0_plus_syst_err = ggszDKstar0_paper.get_v3_sy();
	y_DKstar0_minus_syst_err = ggszDKstar0_paper.get_v4_sy();

	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = ggszDKstar0_paper.get_corrStat();
	pointer_to_matrix_syst = ggszDKstar0_paper.get_corrSyst();

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrStatGGSZDKstar0(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrSystGGSZDKstar0(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}
/*
	//GABDKstar
	Gabdkstar GABDKstar_paper;
	GABDKstar_paper.assign_from_json(json_file);

	a_fav_DKstar0_KPi = GABDKstar_paper.get_v1();
	r_plus_DKstar0_KPi = GABDKstar_paper.get_v2();
	r_minus_DKstar0_KPi = GABDKstar_paper.get_v3();

	a_fav_DKstar0_KPi_stat_err = GABDKstar_paper.get_v1_st();
	r_plus_DKstar0_KPi_stat_err = GABDKstar_paper.get_v2_st();
	r_minus_DKstar0_KPi_stat_err = GABDKstar_paper.get_v3_st();

	a_fav_DKstar0_KPi_syst_err = GABDKstar_paper.get_v1_sy();
	r_plus_DKstar0_KPi_syst_err = GABDKstar_paper.get_v2_sy();
	r_minus_DKstar0_KPi_syst_err = GABDKstar_paper.get_v3_sy();

	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = GABDKstar_paper.get_corrStat();
	pointer_to_matrix_syst = GABDKstar_paper.get_corrSyst();

	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			corStatGABDKstar(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			corSystGABDKstar(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}
*/

cout <<  a_fav_DKstar0_KPi << endl   ;//     = -0.03200; // A_fav^{DKstar0,KPi}
cout << r_plus_DKstar0_KPi  << endl   ;//  =  0.05700; // R_{plus}^{DK*0,KPi}
cout << r_minus_DKstar0_KPi  << endl ;//   =  0.05600; // R_{minus}^{DK*0,KPi}

cout << a_fav_DKstar0_KPi_stat_err<< endl ;//   = 0.041;
cout << r_plus_DKstar0_KPi_stat_err  << endl;// = 0.029;
cout << r_minus_DKstar0_KPi_stat_err << endl;// = 0.032;

cout << a_fav_DKstar0_KPi_syst_err  <<endl;//  = 0.020;
cout << r_plus_DKstar0_KPi_syst_err <<endl;//  = 0.012;
cout << r_minus_DKstar0_KPi_syst_err << endl << endl << endl;// = 0.012;






cout << a_ADS_K_KPi << endl;//       = -0.40267; // A_{ADS(K)}^{KPi}
cout << a_CP_DK_KK << endl;//        = 0.08658; // A_CP^{DK,KPi}
cout << a_CP_DK_PiPi << endl;//      = 0.12760; // A_CP^{DK,PiPi}
cout << a_fav_DK_KPi << endl ;//      = -0.01944; // A_{fav}^{DK,KPi}
cout << r_ADS_K_KPi << endl;//       = 0.01876; // R_{ADS}^{KPi}
cout << r_CP_KK << endl;//           = 0.96834; // R_{CP}^{KK}
cout << r_CP_PiPi << endl << endl << endl;// 



















cout << x_plus << endl;
cout << x_minus << endl;
cout << y_plus << endl;
cout << y_minus << endl;
cout << x_plus_stat_err << endl;
cout << x_minus_stat_err << endl;
cout << y_plus_stat_err << endl;
cout << y_minus_stat_err << endl;
cout << x_plus_syst_err << endl;
cout << x_minus_syst_err << endl;
cout << y_plus_syst_err << endl;
cout << y_minus_syst_err << endl;

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			cout << corrStatGGSZ(i,j) << endl;
			
		}
	}

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			cout << corrSystGGSZ(i,j) << endl;
			
		}
	}



}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


























int main(int argc, char * argv[]) {

  int grid =0;

  if (argc>5){
    cout<<"wrong usage. Correct: ./gamma [mode] [n. extraction]  "<<endl;return 0;
  }
  char * mode;
  mode = argv[1];
  int NMAX = atoi(argv[2]);
  int modeNum;

  char* json_file; 
  json_file = argv[3];
 
  if(argc>4)grid = atoi(argv[4]);


  int jobpid = getpid();
  TDatime * now = new TDatime();
  int today = now->GetDate();
  int clock = now->GetTime();
  int rndSeed = today+clock+jobpid;
  gsl_rng_default_seed = today+clock+jobpid;

  //TRandom3 * myRandom = new TRandom3(rndSeed);
  ROOT::Math::Random<ROOT::Math::GSLRngMT> * myRandom = new ROOT::Math::Random<ROOT::Math::GSLRngMT>(rndSeed);


assign_from_classes (json_file);




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
