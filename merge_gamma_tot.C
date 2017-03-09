{

  gROOT->ProcessLine(".! ls root_file/ | cut -d_ -f2 | cut -d. -f1>list.dat");
  ifstream in;
  in.open("list.dat");
  int a;
  int nfile =0;
  TH1D * gamma;
  TH1D * gamma_tmp;

  while(1) {
    in >> a ;
    //printf("READ: %i\n",a);
    nfile++;
    if (!in.good()) break;
    char File[100];
    sprintf(File,"root_file/gammaFile_%i_tot.root",a);
    printf("READ: %i\n",nfile);    
    TFile * f = new TFile(File);
    if(nfile==1) gamma = (TH1D*) f->Get("h1D_gamma_tot");
    if(nfile==1) deltaB = (TH1D*) f->Get("h1D_delta_B_DK_tot");
    if(nfile==1) rB = (TH1D*) f->Get("h1D_r_B_DK_tot");
    else {
      gamma_tmp = (TH1D*) f->Get("h1D_gamma_tot");
      gamma->Add(gamma_tmp);
      delete gamma_tmp;

      deltaB_tmp = (TH1D*) f->Get("h1D_delta_B_DK_tot");
      deltaB->Add(deltaB_tmp);
      delete deltaB_tmp;

      rB_tmp = (TH1D*) f->Get("h1D_r_B_DK_tot");
      rB->Add(rB_tmp);
      delete rB_tmp;


      f->Close();
    }    
    //    gamma->Draw();    
    TFile * fout = new TFile("tot.root","RECREATE");
    gamma->Write();
    deltaB->Write();
    rB->Write();
    fout->Close();
  }
}
