/*
double a_ADS_K_K3Pi  = -0.31291; // A_{ADS(K)}^{KPiPiPi}
double a_CP_DK_4Pi   =  0.10035; // A_{CP}^{4Pi}
double a_fav_DK_K3Pi = -0.00042; // A_{fav}^{DK,K3Pi}
double r_ADS_K_K3Pi  =  0.01399; // R_{ADS(K)}^{KPiPiPi}
double r_CP_4Pi      =  0.97540; // R_{CP}^{4Pi}

double a_ADS_K_K3Pi_stat_err      = 0.10200; 
double a_CP_DK_4Pi_stat_err       = 0.03360;
double a_fav_DK_K3Pi_stat_err     = 0.01190;
double r_ADS_K_K3Pi_stat_err      = 0.00149;
double r_CP_4Pi_stat_err          = 0.03670;

double a_ADS_K_K3Pi_syst_err      = 0.01500;
double a_CP_DK_4Pi_syst_err       = 0.00790;
double a_fav_DK_K3Pi_syst_err     = 0.00300;
double r_ADS_K_K3Pi_syst_err      = 0.00041;
double r_CP_4Pi_syst_err          = 0.01000;
*/

//TVectorD GAhhhh_x_stat_err(5);
GAhhhh_x_stat_err(0)        = a_ADS_K_K3Pi_stat_err;
GAhhhh_x_stat_err(1)        = a_CP_DK_4Pi_stat_err;
GAhhhh_x_stat_err(2)        = a_fav_DK_K3Pi_stat_err;
GAhhhh_x_stat_err(3)        = r_ADS_K_K3Pi_stat_err;
GAhhhh_x_stat_err(4)        = r_CP_4Pi_stat_err;

//TVectorD GAhhhh_x_syst_err(5);
GAhhhh_x_syst_err(0)        = a_ADS_K_K3Pi_syst_err;
GAhhhh_x_syst_err(1)        = a_CP_DK_4Pi_syst_err;
GAhhhh_x_syst_err(2)        = a_fav_DK_K3Pi_syst_err;
GAhhhh_x_syst_err(3)        = r_ADS_K_K3Pi_syst_err;
GAhhhh_x_syst_err(4)        = r_CP_4Pi_syst_err;

//TVectorD GAhhhh_x_err(5);
GAhhhh_x_err(0)                = sqrt( GAhhhh_x_stat_err(0) * GAhhhh_x_stat_err(0) + GAhhhh_x_syst_err(0) * GAhhhh_x_syst_err(0) );
GAhhhh_x_err(1)                = sqrt( GAhhhh_x_stat_err(1) * GAhhhh_x_stat_err(1) + GAhhhh_x_syst_err(1) * GAhhhh_x_syst_err(1) );
GAhhhh_x_err(2)                = sqrt( GAhhhh_x_stat_err(2) * GAhhhh_x_stat_err(2) + GAhhhh_x_syst_err(2) * GAhhhh_x_syst_err(2) );
GAhhhh_x_err(3)                = sqrt( GAhhhh_x_stat_err(3) * GAhhhh_x_stat_err(3) + GAhhhh_x_syst_err(3) * GAhhhh_x_syst_err(3) );
GAhhhh_x_err(4)                = sqrt( GAhhhh_x_stat_err(4) * GAhhhh_x_stat_err(4) + GAhhhh_x_syst_err(4) * GAhhhh_x_syst_err(4) );

//TMatrixDSym corStatGAhhhh(5);
//      a_ADS_K_K3Pi         a_CP_DK_4Pi        a_fav_DK_K3Pi           r_ADS_K_K3Pi         r_CP_4Pi
corStatGAhhhh(0,0)=1.0     ;             corStatGAhhhh(0,1)=0.0018;               corStatGAhhhh(0,2)=0.0064;              corStatGAhhhh(0,3)=0.0821;               corStatGAhhhh(0,4)=0.0020;
corStatGAhhhh(1,0)=corStatGAhhhh(0,1);  corStatGAhhhh(1,1)=1.0;                  corStatGAhhhh(1,2)=0.0239;              corStatGAhhhh(1,3)=-0.0011;              corStatGAhhhh(1,4)=-0.0182;
corStatGAhhhh(2,0)=corStatGAhhhh(0,2);  corStatGAhhhh(2,1)=corStatGAhhhh(1,2);  corStatGAhhhh(2,2)=1.0;                 corStatGAhhhh(2,3)=-0.0005;              corStatGAhhhh(2,4)=-0.0009;
corStatGAhhhh(3,0)=corStatGAhhhh(0,3);  corStatGAhhhh(3,1)=corStatGAhhhh(1,3);  corStatGAhhhh(3,2)=corStatGAhhhh(2,3); corStatGAhhhh(3,3)=1.0;                  corStatGAhhhh(3,4)=0.0409;
corStatGAhhhh(4,0)=corStatGAhhhh(0,4);  corStatGAhhhh(4,1)=corStatGAhhhh(1,4);  corStatGAhhhh(4,2)=corStatGAhhhh(2,4); corStatGAhhhh(4,3)=corStatGAhhhh(3,4);  corStatGAhhhh(4,4)=1.0;


//TMatrixDSym corSystGAhhhh(5);
//      a_ADS_K_K3Pi         a_CP_DK_4Pi        a_fav_DK_K3Pi           r_ADS_K_K3Pi         r_CP_4Pi
corSystGAhhhh(0,0)=1.0;                 corSystGAhhhh(0,1)=-0.04;             corSystGAhhhh(0,2)=0.02;                corSystGAhhhh(0,3)=0.87;                 corSystGAhhhh(0,4)=-0.04;
corSystGAhhhh(1,0)=corSystGAhhhh(0,1);  corSystGAhhhh(1,1)=1.0;                corSystGAhhhh(1,2)=0.09;                corSystGAhhhh(1,3)=0.03;                 corSystGAhhhh(1,4)=0.07;
corSystGAhhhh(2,0)=corSystGAhhhh(0,2);  corSystGAhhhh(2,1)=corSystGAhhhh(1,2); corSystGAhhhh(2,2)=1.0;                 corSystGAhhhh(2,3)=0.02;                 corSystGAhhhh(2,4)=0.02;
corSystGAhhhh(3,0)=corSystGAhhhh(0,3);  corSystGAhhhh(3,1)=corSystGAhhhh(1,3); corSystGAhhhh(3,2)=corSystGAhhhh(2,3); corSystGAhhhh(3,3)=1.0;                  corSystGAhhhh(3,4)=0.04;
corSystGAhhhh(4,0)=corSystGAhhhh(0,4);  corSystGAhhhh(4,1)=corSystGAhhhh(1,4); corSystGAhhhh(4,2)=corSystGAhhhh(2,4); corSystGAhhhh(4,3)=corSystGAhhhh(3,4);  corSystGAhhhh(4,4)=1.0;

//TMatrixDSym 
covStatGAhhhh = buildCov(corStatGAhhhh,GAhhhh_x_stat_err);
//TMatrixDSym 
covSystGAhhhh = buildCov(corSystGAhhhh,GAhhhh_x_syst_err);
//TMatrixDSym 
covGAhhhh     = covStatGAhhhh + covSystGAhhhh;
//TMatrixDSym 
corGAhhhh     = buildCor(covGAhhhh);

/*
for (int i=0; i<5; i++) {
  for(int j=0; j<5; j++) {
    printf("%f ",corGAhhhh(i,j));
  }
  printf("\n");
 }
*/
//return 0;

