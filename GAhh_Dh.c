GAhh_x_stat_err(0)  = a_ADS_DK_KPi_stat_err;
GAhh_x_stat_err(1)  = a_ADS_DPi_KPi_stat_err;
GAhh_x_stat_err(2)  = a_CP_DK_KK_stat_err;
GAhh_x_stat_err(3)  = a_CP_DK_PiPi_stat_err;
GAhh_x_stat_err(4)  = a_CP_DPi_KK_stat_err;
GAhh_x_stat_err(5)  = a_CP_DPi_PiPi_stat_err;
GAhh_x_stat_err(6)  = a_fav_DK_KPi_stat_err;
GAhh_x_stat_err(7)  = r_ADS_DK_KPi_stat_err;
GAhh_x_stat_err(8)  = r_ADS_DPi_KPi_stat_err;
GAhh_x_stat_err(9)  = r_CP_KK_stat_err;
GAhh_x_stat_err(10) = r_CP_PiPi_stat_err;
GAhh_x_stat_err(11) = r_KPi_KPi_stat_err;


GAhh_x_syst_err(0)  = a_ADS_DK_KPi_syst_err;
GAhh_x_syst_err(1)  = a_ADS_DPi_KPi_syst_err;
GAhh_x_syst_err(2)  = a_CP_DK_KK_syst_err;
GAhh_x_syst_err(3)  = a_CP_DK_PiPi_syst_err;
GAhh_x_syst_err(4)  = a_CP_DPi_KK_syst_err;
GAhh_x_syst_err(5)  = a_CP_DPi_PiPi_syst_err;
GAhh_x_syst_err(6)  = a_fav_DK_KPi_syst_err;
GAhh_x_syst_err(7)  = r_ADS_DK_KPi_syst_err;
GAhh_x_syst_err(8)  = r_ADS_DPi_KPi_syst_err;
GAhh_x_syst_err(9)  = r_CP_KK_syst_err;
GAhh_x_syst_err(10) = r_CP_PiPi_syst_err;
GAhh_x_syst_err(11) = r_KPi_KPi_syst_err;


//TVectorD GAhh_x_err(7);
GAhh_x_err(0)                 = sqrt( GAhh_x_stat_err(0)  * GAhh_x_stat_err(0)  + GAhh_x_syst_err(0)  * GAhh_x_syst_err(0) );
GAhh_x_err(1)                 = sqrt( GAhh_x_stat_err(1)  * GAhh_x_stat_err(1)  + GAhh_x_syst_err(1)  * GAhh_x_syst_err(1) );
GAhh_x_err(2)                 = sqrt( GAhh_x_stat_err(2)  * GAhh_x_stat_err(2)  + GAhh_x_syst_err(2)  * GAhh_x_syst_err(2) );
GAhh_x_err(3)                 = sqrt( GAhh_x_stat_err(3)  * GAhh_x_stat_err(3)  + GAhh_x_syst_err(3)  * GAhh_x_syst_err(3) );
GAhh_x_err(4)                 = sqrt( GAhh_x_stat_err(4)  * GAhh_x_stat_err(4)  + GAhh_x_syst_err(4)  * GAhh_x_syst_err(4) );
GAhh_x_err(5)                 = sqrt( GAhh_x_stat_err(5)  * GAhh_x_stat_err(5)  + GAhh_x_syst_err(5)  * GAhh_x_syst_err(5) );
GAhh_x_err(6)                 = sqrt( GAhh_x_stat_err(6)  * GAhh_x_stat_err(6)  + GAhh_x_syst_err(6)  * GAhh_x_syst_err(6) );
GAhh_x_err(7)                 = sqrt( GAhh_x_stat_err(7)  * GAhh_x_stat_err(7)  + GAhh_x_syst_err(7)  * GAhh_x_syst_err(7) );
GAhh_x_err(8)                 = sqrt( GAhh_x_stat_err(8)  * GAhh_x_stat_err(8)  + GAhh_x_syst_err(8)  * GAhh_x_syst_err(8) );
GAhh_x_err(9)                 = sqrt( GAhh_x_stat_err(9)  * GAhh_x_stat_err(9)  + GAhh_x_syst_err(9)  * GAhh_x_syst_err(9) );
GAhh_x_err(10)                = sqrt( GAhh_x_stat_err(10) * GAhh_x_stat_err(10) + GAhh_x_syst_err(10) * GAhh_x_syst_err(10) );
GAhh_x_err(11)                = sqrt( GAhh_x_stat_err(11) * GAhh_x_stat_err(11) + GAhh_x_syst_err(11) * GAhh_x_syst_err(11) );


double statCorrelations[144] = {
  1.0   ,-0.0474, 0.0023, 0.0012, 0.0093, 0.0053, 0.0078, 0.1024,-0.0032, 0.0006, 0.0009, 0.0003,
  -0.0474, 1.0   , 0.0043, 0.0025, 0.0174, 0.0100, 0.0144, 0.0155,-0.0431, 0.0002, 0.0001, 0.0000,
  0.0023, 0.0043, 1.0   , 0.0043,-0.0069, 0.0158, 0.0243,-0.0003, 0.0001,-0.0144,-0.0001,-0.001,
  0.0012, 0.0025, 0.0043, 1.0   , 0.0160,-0.0359, 0.0143,-0.0010,-0.0000,-0.0002,-0.0382,-0.0021,
  0.0093, 0.0174,-0.0069, 0.0160, 1.0   , 0.0639, 0.0917,-0.0002,-0.0002,-0.0013, 0.0000,-0.0011,
  0.0053, 0.0100, 0.0158,-0.0359, 0.0639, 1.0   , 0.0530,-0.0001,-0.0001, 0.0001,-0.0029,-0.0005,
  0.0078, 0.0144, 0.0243, 0.0143, 0.0917, 0.053, 1.0    ,-0.0001,-0.0001, 0.0002, 0.0000,-0.0004,
  0.1024, 0.0155,-0.0003,-0.0010,-0.0002,-0.0001,-0.0001, 1.0   ,-0.0219, 0.0399, 0.0245,-0.1136,
  -0.0032,-0.0431, 0.0001,-0.0000,-0.0002,-0.0001,-0.0001,-0.0219, 1.0   ,-0.0055,-0.0025, 0.0114,
  0.0006, 0.0002,-0.0144,-0.0002,-0.0013, 0.0001, 0.0002, 0.0399,-0.0055, 1.0   , 0.0597,-0.3165,
  0.0009, 0.0001,-0.0001,-0.0382, 0.0000,-0.0029, 0.0000, 0.0245,-0.0025, 0.0597, 1.0   ,-0.1756,
  0.0003, 0.0000,-0.001, -0.0021,-0.0011,-0.0005,-0.0004,-0.1136, 0.0114,-0.3165,-0.1756, 1.0   };

for (int i=0; i<12; i++) {
  for (int j=0; j<12; j++) { 
    corStatGAhh(i,j)=statCorrelations[j+i*12];}}


double systCorrelations[144] = {
  1.00,  0.36, -0.06,  0.27,  0.30,  0.04,  0.09,  0.78, -0.43, -0.04,  0.23, -0.14,
  0.36,  1.00, -0.03,  0.31,  0.22, -0.06, -0.55,  0.59, -0.47, -0.01,  0.12, -0.04,
  -0.06, -0.03,  1.00, -0.02, -0.80,  0.09,  0.09, -0.10, -0.06,  0.03, -0.28,  0.07,
  0.27,  0.31, -0.02,  1.00,  0.19, -0.42, -0.01,  0.35, -0.28, -0.22,  0.11, -0.07,
  0.30,  0.22, -0.80,  0.19,  1.00,  0.11,  0.09,  0.37, -0.21, -0.16,  0.20, -0.13,
  0.04, -0.06,  0.09, -0.42,  0.11,  1.00,  0.30, -0.03,  0.06, -0.08, -0.03, -0.09,
  0.09, -0.55,  0.09, -0.01,  0.09,  0.30,  1.00, -0.11,  0.05, -0.01, -0.02, -0.02,
  0.78,  0.59, -0.10,  0.35,  0.37, -0.03, -0.11,  1.00, -0.57, -0.14,  0.33, -0.22,
  -0.43, -0.47, -0.06, -0.28, -0.21,  0.06,  0.05, -0.57,  1.00,  0.19,  0.10,  0.02,
  -0.04, -0.01,  0.03, -0.22, -0.16, -0.08, -0.01, -0.14,  0.19,  1.00,  0.17,  0.21,
  0.23,  0.12, -0.28,  0.11,  0.20, -0.03, -0.02,  0.33,  0.10,  0.17,  1.00, -0.11,
  -0.14, -0.04,  0.07, -0.07, -0.13, -0.09, -0.02, -0.22,  0.02,  0.21, -0.11,  1.00};

for (int i=0; i<12; i++) {
  for (int j=0; j<12; j++) { 
    corSystGAhh(i,j)=systCorrelations[j+i*12];}}


//TMatrixDSym 
covStatGAhh = buildCov(corStatGAhh,GAhh_x_stat_err);
//TMatrixDSym 
covSystGAhh = buildCov(corSystGAhh,GAhh_x_syst_err);
//TMatrixDSym 
covGAhh     = covStatGAhh + covSystGAhh;
//TMatrixDSym 
corGAhh     = buildCor(covGAhh);

/*  LocalWords:  TMatrixDSym
 */
