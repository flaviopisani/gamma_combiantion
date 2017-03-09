{


  TFile * f = TFile::Open("tot.root");
  TFile * f_red = TFile::Open("tot_red.root","RECREATE");
  TH1D * h_gamma = (TH1D *) f->Get("h1D_gamma_tot");
  TH1D * h_red_gamma = new TH1D("h_red_gamma","h_red_gamma",900,0,180);

  TH1D * h_deltaB = (TH1D *) f->Get("h1D_delta_B_DK_tot");
  TH1D * h_red_deltaB = new TH1D("h_red_delta_B_DK","h_red_delteB_DK",900,0,180);

  TH1D * h_deltaBPi = (TH1D *) f->Get("h1D_delta_B_DPi_tot");
  TH1D * h_red_deltaBPi = new TH1D("h_red_delta_B_DPi","h_red_delteB_DPi",900,0,180);

  TH1D * h_delta_B_DKstar0 = (TH1D *) f->Get("h1D_delta_B_DKstar0_tot");
  TH1D * h_red_delta_B_DKstar0 = new TH1D("h_red_delta_B_DKstar0","h_red_delta_B_DKstar0",853,0,180);

  for (int i=1; i<h_gamma->GetNbinsX()+1; i++) {
    if(i<=900) h_red_gamma->SetBinContent(i,h_gamma->GetBinContent(i));
    else h_red_gamma->SetBinContent(i-900,h_gamma->GetBinContent(i));
  }

  for (int i=1; i<h_h_deltaB->GetNbinsX()+1; i++) {
    if(i<=900) h_red_deltaB->SetBinContent(i,h_deltaB->GetBinContent(i));
    else h_red_deltaB->SetBinContent(i-900,h_deltaB->GetBinContent(i));
  }

  for (int i=1; i<h_h_deltaBPi->GetNbinsX()+1; i++) {
    if(i<=900) h_red_deltaBPi->SetBinContent(i,h_deltaBPi->GetBinContent(i));
    else h_red_deltaBPi->SetBinContent(i-900,h_deltaBPi->GetBinContent(i));
  }

  for (int i=1; i<h_delta_B_DKstar0->GetNbinsX()+1; i++) {
    if(i>=758&&i<1611) h_red_delta_B_DKstar0->SetBinContent(i-758+1,h_delta_B_DKstar0->GetBinContent(i));
    //    if(i>=1611&&i<1801) h_red_delta_B_DKstar0->SetBinContent(i-1611+1,h_delta_B_DKstar0->GetBinContent(i));
    //    if(i<758) h_red_delta_B_DKstar0->SetBinContent(190+i,h_delta_B_DKstar0->GetBinContent(i));
    //else h_red_delta_B_DKstar0->SetBinContent(i-900,h_delta_B_DKstar0->GetBinContent(i));
  }

  h_red_gamma->Draw();
  h_red_gamma->Write();
  h_red_deltaB->Write();
  h_red_deltaBPi->Write();
  h_red_delta_B_DKstar0->Write();

  f_red->Close();
}
