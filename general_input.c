/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// XXX Inputs ////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
double fR_WS_D_K3Pi      = 0.00324;
double fR_WS_D_K3Pi_err  = sqrt(0.00008 * 0.00008 + 0.00007 *0.00007);

double fR_D_KsKPi      = 0.356;
double fR_D_KsKPi_err  = sqrt(0.034 * 0.034 + 0.007 * 0.007);

double fR_WS_D_KPiPi0      = 0.00220;
double fR_WS_D_KPiPi0_err  = 0.00010;

double fF_plus_KKPi0     = 0.732;
double fF_plus_KKPi0_err = 0.055;

double fF_plus_PiPiPi0     = 0.973;
double fF_plus_PiPiPi0_err = 0.017;

double fF_PiPiPiPi         = 0.737;
double fF_PiPiPiPi_err     = 0.028;

double fphi_s     = -0.010 * 180./M_PI;
double fphi_s_err = 0.039 * 180./M_PI;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// LHCb Charm     ///////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double charmLHCb_K3pi_a    = 0.0573;
double charmLHCb_K3pi_b    = 0.0003;
double charmLHCb_K3pi_c    = 0.000048;

double charmLHCb_K3pi_a_err    = 0.0012;
double charmLHCb_K3pi_b_err    = 0.0018;
double charmLHCb_K3pi_c_err    = 0.000018;
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// Histos inputs ///////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TFile * f_K3Pi_2014 = TFile::Open("CLEO_K3PiScan_2014_pdf.root");
//TH2D * 
h_K3Pi_2014  = (TH2D*)f_K3Pi_2014->Get("hPdf");

//  TH2D * h_K3Pi_2014 = new TH2D("h_K3Pi_2014","h_K3Pi_2014",75,0,1.5,180,0,2*acos(-1));
// for (int i=1; i<76; i++ ) {
//  for (int j=1; j<181; j++ ) {
//    double X = h_K3Pi_2014_tmp->GetBinContent(i+25,j);
//    h_K3Pi_2014->SetBinContent(i,j,X);
//  }
// }

TFile * f_K3Pi_2009 = TFile::Open("CLEO_K3PiScan_2009_GaussianRise_pdf2.root");
//TH2D * 
h_K3Pi_2009  = (TH2D*)f_K3Pi_2009->Get("hPdf");

/*
  TH2D * h_K3Pi_2009 = new TH2D("h_K3Pi_2009","h_K3Pi_2009",320,0,1.5,360,0,2*acos(-1));

  for (int i=1; i<321; i++ ) {
    for (int j=1; j<361; j++ ) {
      double X = h_K3Pi_2009_tmp->GetBinContent(i+80,j);
      h_K3Pi_2009->SetBinContent(i,j,X);
    }
  }
*/


TFile * f_KPiPi0 = TFile::Open("CLEO_KPiPi0Scan_2014_pdf.root");
//TH2D * 
h_KPiPi0  = (TH2D*)f_KPiPi0->Get("hPdf");

/*
TH2D * h_KPiPi0 = new TH2D("h_KPiPi0","h_KPiPi0",40,0.4,1.2,71,2,4.5);
for (int i=1; i<41; i++ ) {
  for (int j=1; j<71; j++ ) {
    double X = h_KPiPi0_tmp->GetBinContent(i+45,j+57);
    h_KPiPi0->SetBinContent(i,j,X);
  }
 }
*/
TFile * f_KsKPi = TFile::Open("CLEO_KSKpiScan_2012_Kst_pdf.root");
//TH2D * 
h_KsKPi  = (TH2D*)f_KsKPi->Get("hPdf");
/*
  TH2D * h_KsKPi = new TH2D("h_KsKPi","h_KsKPi",500,0.6,1.5,149,-0.66,1.2);
  for (int i=1; i<501; i++ ) {
    for (int j=1; j<150; j++ ) {
      double X = h_KsKPi_tmp->GetBinContent(i,j+197);
      h_KsKPi->SetBinContent(i,j,X);
    }
  }
*/

//  TFile * test = new TFile("test.root","RECREATE");
//test->cd();
//h_KsKPi->Write();
//test->Close();
//return 0;

//h_KPiPi0->Scale(1./h_KPiPi0->GetMaximum());
//h_K3Pi_2014->Scale(1./h_K3Pi_2014->GetMaximum());
//h_KsKPi->Scale(1./h_KsKPi->GetMaximum());

/*
double scale = -4.165;
h_KPiPi0->Scale(1./TMath::Exp(scale/(-2.)));
scale = 1.06322;
h_K3Pi_2014->Scale(1./TMath::Exp(scale/(-2.)));
scale = -3.651;
h_KsKPi->Scale(1./TMath::Exp(scale/(-2.)));
*/

//printf("Range: %f %f\n",x_min[14],x_max[14]);
k_D_K3Pi_var = new RooRealVar("k_D_K3Pi_var","k_D_K3Pi_var",x_min[14],x_max[14]);
delta_D_K3Pi_var = new RooRealVar("delta_D_K3Pi_var","delta_D_K3Pi_var",x_min[5]/180*M_PI,x_max[5]/180*M_PI);
k_D_KsKPi_var = new RooRealVar("k_D_KsKPi_var","k_D_KsKPi_var",x_min[16],x_max[16]);
delta_D_KsKPi_var = new RooRealVar("delta_D_KsKPi_var","delta_D_KsKPi_var",x_min[8]/180*M_PI,x_max[8]/180*M_PI);
k_D_KPiPi0_var    = new RooRealVar("k_D_KPiPi0_var","k_D_KPiPi0_var",x_min[15],x_max[15]);
delta_D_KPiPi0_var = new RooRealVar("delta_D_KPiPi0_var","delta_D_KPiPi0_var",x_min[7]/180*M_PI,x_max[7]/180*M_PI);

HK3Pi = new RooDataHist("HK3Pi","HK3Pi",RooArgSet(*k_D_K3Pi_var,*delta_D_K3Pi_var),h_K3Pi_2014);
//HK3Pi = new RooDataHist("HK3Pi","HK3Pi",RooArgSet(*k_D_K3Pi_var,*delta_D_K3Pi_var),h_K3Pi_2009);
PK3Pi = new RooHistPdf("PK3Pi","PK3Pi",RooArgSet(*k_D_K3Pi_var,*delta_D_K3Pi_var),*HK3Pi,2);

HKsKPi = new RooDataHist("HKsKPi","HKsKPi",RooArgSet(*k_D_KsKPi_var,*delta_D_KsKPi_var),h_KsKPi);
PKsKPi = new RooHistPdf("PKsKPi","PKsKPi",RooArgSet(*k_D_KsKPi_var,*delta_D_KsKPi_var),*HKsKPi,1);

HKPiPi0 = new RooDataHist("HKPiPi0","HKPiPi0",RooArgSet(*k_D_KPiPi0_var,*delta_D_KPiPi0_var),h_KPiPi0);
PKPiPi0 = new RooHistPdf("PKPiPi0","PKPiPi0",RooArgSet(*k_D_KPiPi0_var,*delta_D_KPiPi0_var),*HKPiPi0,2);

