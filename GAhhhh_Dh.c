GAhhhh_x_stat_err(0) = a_ADS_DK_K3Pi_stat_err;
GAhhhh_x_stat_err(1) = a_ADS_DPi_K3Pi_stat_err;
GAhhhh_x_stat_err(2) = a_CP_DK_4Pi_stat_err;
GAhhhh_x_stat_err(3) = a_CP_DPi_4Pi_stat_err;
GAhhhh_x_stat_err(4) = a_fav_DK_K3Pi_stat_err;
GAhhhh_x_stat_err(5) = r_ADS_DK_K3Pi_stat_err;
GAhhhh_x_stat_err(6) = r_ADS_DPi_K3Pi_stat_err;
GAhhhh_x_stat_err(7) = r_CP_4Pi_stat_err;
GAhhhh_x_stat_err(8) = r_KPi_K3Pi_stat_err;

GAhhhh_x_syst_err(0) = a_ADS_DK_K3Pi_syst_err;
GAhhhh_x_syst_err(1) = a_ADS_DPi_K3Pi_syst_err;
GAhhhh_x_syst_err(2) = a_CP_DK_4Pi_syst_err;
GAhhhh_x_syst_err(3) = a_CP_DPi_4Pi_syst_err;
GAhhhh_x_syst_err(4) = a_fav_DK_K3Pi_syst_err;
GAhhhh_x_syst_err(5) = r_ADS_DK_K3Pi_syst_err;
GAhhhh_x_syst_err(6) = r_ADS_DPi_K3Pi_syst_err;
GAhhhh_x_syst_err(7) = r_CP_4Pi_syst_err;
GAhhhh_x_syst_err(8) = r_KPi_K3Pi_syst_err;


//TVectorD GAhhhh_x_err(5);
GAhhhh_x_err(0)                = sqrt( GAhhhh_x_stat_err(0)  * GAhhhh_x_stat_err(0)  + GAhhhh_x_syst_err(0)  * GAhhhh_x_syst_err(0) );
GAhhhh_x_err(1)                = sqrt( GAhhhh_x_stat_err(1)  * GAhhhh_x_stat_err(1)  + GAhhhh_x_syst_err(1)  * GAhhhh_x_syst_err(1) );
GAhhhh_x_err(2)                = sqrt( GAhhhh_x_stat_err(2)  * GAhhhh_x_stat_err(2)  + GAhhhh_x_syst_err(2)  * GAhhhh_x_syst_err(2) );
GAhhhh_x_err(3)                = sqrt( GAhhhh_x_stat_err(3)  * GAhhhh_x_stat_err(3)  + GAhhhh_x_syst_err(3)  * GAhhhh_x_syst_err(3) );
GAhhhh_x_err(4)                = sqrt( GAhhhh_x_stat_err(4)  * GAhhhh_x_stat_err(4)  + GAhhhh_x_syst_err(4)  * GAhhhh_x_syst_err(4) );
GAhhhh_x_err(5)                = sqrt( GAhhhh_x_stat_err(5)  * GAhhhh_x_stat_err(5)  + GAhhhh_x_syst_err(5)  * GAhhhh_x_syst_err(5) );
GAhhhh_x_err(6)                = sqrt( GAhhhh_x_stat_err(6)  * GAhhhh_x_stat_err(6)  + GAhhhh_x_syst_err(6)  * GAhhhh_x_syst_err(6) );
GAhhhh_x_err(7)                = sqrt( GAhhhh_x_stat_err(7)  * GAhhhh_x_stat_err(7)  + GAhhhh_x_syst_err(7)  * GAhhhh_x_syst_err(7) );
GAhhhh_x_err(8)                = sqrt( GAhhhh_x_stat_err(8)  * GAhhhh_x_stat_err(8)  + GAhhhh_x_syst_err(8)  * GAhhhh_x_syst_err(8) );


double statGAhhhhCorrelations[81] = {
  1.0   ,-0.0618, 0.0018, 0.0088, 0.0064, 0.0821,-0.0040, 0.0020, 0.0028,
  -0.0618, 1.0   , 0.0050, 0.0202, 0.0166, 0.0135,-0.0218,-0.0001, 0.0005,
  0.0018, 0.0050, 1.0   ,-0.0197, 0.0239,-0.0011, 0.0000,-0.0182,-0.0023,
  0.0088, 0.0202,-0.0197, 1.0   , 0.0968,-0.0001,-0.0001,-0.0041,-0.0004,
  0.0064, 0.0166, 0.0239, 0.0968, 1.0   ,-0.0005,-0.0001,-0.0009, 0.0012,
  0.0821, 0.0135,-0.0011,-0.0001,-0.0005, 1.0   ,-0.0464, 0.0409,-0.0990,
  -0.0040,-0.0218, 0.0000,-0.0001,-0.0001,-0.0464, 1.0   ,-0.0041, 0.0116,
  0.0020,-0.0001,-0.0182,-0.0041,-0.0009, 0.0409,-0.0041, 1.0   ,-0.3080,
  0.0028, 0.0005,-0.0023,-0.0004, 0.0012,-0.0990, 0.0116,-0.3080, 1.0   };

for (int i=0; i<9; i++) {
  for (int j=0; j<9; j++) {
    corStatGAhhhh(i,j)=statGAhhhhCorrelations[j+i*9];}}     

double systGAhhhhCorrelations[81] = {
  1.00, -0.09, -0.04,  0.02,  0.02,  0.87,  0.05, -0.04, -0.13,
  -0.09,  1.00, -0.34,  0.43,  0.05,  0.10,  0.46, -0.04,  0.17,
  -0.04, -0.34,  1.00,  0.31,  0.09,  0.03, -0.35,  0.07, -0.14,
  0.02,  0.43,  0.31,  1.00,  0.32,  0.01,  0.24, -0.07,  0.08,
  0.02,  0.05,  0.09,  0.32,  1.00,  0.02, -0.02,  0.02,  0.00,
  0.87,  0.10,  0.03,  0.01,  0.02,  1.00,  0.14,  0.04, -0.04,
  0.05,  0.46, -0.35,  0.24, -0.02,  0.14,  1.00, -0.06,  0.13,
  -0.04, -0.04,  0.07, -0.07,  0.02,  0.04, -0.06,  1.00,  0.11,
  -0.13,  0.17, -0.14,  0.08,  0.00, -0.04,  0.13,  0.11,  1.00};

for (int i=0; i<9; i++) {
  for (int j=0; j<9; j++) {
    corSystGAhhhh(i,j)=systGAhhhhCorrelations[j+i*9];}}


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

