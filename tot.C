{
  TFile * f = TFile::Open("tot.root");
  TH1D * h  = (TH1D*)f->Get("h1D_gamma_tot");
  
  TH1D * h_new = new TH1D("h_new","h_new",400,20,100);
  for (int i=1; i<401; i++ ) {
      double X = h->GetBinContent(i+1000);   
      h_new->SetBinContent(i,X);
  } 
  TFile * f_new = TFile::Open("TOT.root","RECREATE");
  h_new->Write();
  f_new->Close();
}
