//TVectorD ADhhpi0_x_stat_err(7);
ADhhpi0_x_stat_err(0)                = a_ADS_DK_KPiPi0_stat_err;
ADhhpi0_x_stat_err(1)                = a_ADS_DPi_KPiPi0_stat_err;
ADhhpi0_x_stat_err(2)                = a_CP_DK_KKPi0_stat_err;
ADhhpi0_x_stat_err(3)                = a_CP_DK_PiPiPi0_stat_err;
ADhhpi0_x_stat_err(4)                = a_CP_DPi_KKPi0_stat_err;
ADhhpi0_x_stat_err(5)                = a_CP_DPi_PiPiPi0_stat_err;
ADhhpi0_x_stat_err(6)                = a_fav_DK_KPiPi0_stat_err;
ADhhpi0_x_stat_err(7)                = r_ADS_DK_KPiPi0_stat_err;
ADhhpi0_x_stat_err(8)                = r_ADS_DPi_KPiPi0_stat_err;
ADhhpi0_x_stat_err(9)                = r_CP_KKPi0_stat_err;
ADhhpi0_x_stat_err(10)               = r_CP_PiPiPi0_stat_err;


//TVectorD ADhhpi0_x_syst_err(7);
ADhhpi0_x_syst_err(0)                = a_ADS_DK_KPiPi0_syst_err;
ADhhpi0_x_syst_err(1)                = a_ADS_DPi_KPiPi0_syst_err;
ADhhpi0_x_syst_err(2)                = a_CP_DK_KKPi0_syst_err;
ADhhpi0_x_syst_err(3)                = a_CP_DK_PiPiPi0_syst_err;
ADhhpi0_x_syst_err(4)                = a_CP_DPi_KKPi0_syst_err;
ADhhpi0_x_syst_err(5)                = a_CP_DPi_PiPiPi0_syst_err;
ADhhpi0_x_syst_err(6)                = a_fav_DK_KPiPi0_syst_err;
ADhhpi0_x_syst_err(7)                = r_ADS_DK_KPiPi0_syst_err;
ADhhpi0_x_syst_err(8)                = r_ADS_DPi_KPiPi0_syst_err;
ADhhpi0_x_syst_err(9)                = r_CP_KKPi0_syst_err;
ADhhpi0_x_syst_err(10)               = r_CP_PiPiPi0_syst_err;


//TVectorD ADhhpi0_x_err(7);
ADhhpi0_x_err(0)                = sqrt( ADhhpi0_x_stat_err(0) * ADhhpi0_x_stat_err(0) + ADhhpi0_x_syst_err(0) * ADhhpi0_x_syst_err(0) );
ADhhpi0_x_err(1)                = sqrt( ADhhpi0_x_stat_err(1) * ADhhpi0_x_stat_err(1) + ADhhpi0_x_syst_err(1) * ADhhpi0_x_syst_err(1) );
ADhhpi0_x_err(2)                = sqrt( ADhhpi0_x_stat_err(2) * ADhhpi0_x_stat_err(2) + ADhhpi0_x_syst_err(2) * ADhhpi0_x_syst_err(2) );
ADhhpi0_x_err(3)                = sqrt( ADhhpi0_x_stat_err(3) * ADhhpi0_x_stat_err(3) + ADhhpi0_x_syst_err(3) * ADhhpi0_x_syst_err(3) );
ADhhpi0_x_err(4)                = sqrt( ADhhpi0_x_stat_err(4) * ADhhpi0_x_stat_err(4) + ADhhpi0_x_syst_err(4) * ADhhpi0_x_syst_err(4) );
ADhhpi0_x_err(5)                = sqrt( ADhhpi0_x_stat_err(5) * ADhhpi0_x_stat_err(5) + ADhhpi0_x_syst_err(5) * ADhhpi0_x_syst_err(5) );
ADhhpi0_x_err(6)                = sqrt( ADhhpi0_x_stat_err(6) * ADhhpi0_x_stat_err(6) + ADhhpi0_x_syst_err(6) * ADhhpi0_x_syst_err(6) );
ADhhpi0_x_err(7)                = sqrt( ADhhpi0_x_stat_err(7) * ADhhpi0_x_stat_err(7) + ADhhpi0_x_syst_err(7) * ADhhpi0_x_syst_err(7) );
ADhhpi0_x_err(8)                = sqrt( ADhhpi0_x_stat_err(8) * ADhhpi0_x_stat_err(8) + ADhhpi0_x_syst_err(8) * ADhhpi0_x_syst_err(8) );
ADhhpi0_x_err(9)                = sqrt( ADhhpi0_x_stat_err(9) * ADhhpi0_x_stat_err(9) + ADhhpi0_x_syst_err(9) * ADhhpi0_x_syst_err(9) );
ADhhpi0_x_err(10)               = sqrt( ADhhpi0_x_stat_err(10)* ADhhpi0_x_stat_err(10)+ ADhhpi0_x_syst_err(10)* ADhhpi0_x_syst_err(10));


double statCorrelationsADhhpi0[121] = {
  1.00, -0.04,  0.00,  0.00,  0.00,  0.01,  0.01,  0.13,  0.00,  0.00,  0.00,
  -0.04,  1.00,  0.00,  0.00,  0.00,  0.01,  0.01, -0.01, -0.34, -0.00,  0.00,
  0.00,  0.00,  1.00,  0.00, -0.04,  0.01,  0.01, -0.00, -0.00, -0.20, -0.01,
  0.00,  0.00,  0.00,  1.00,  0.01, -0.04,  0.02, -0.00, -0.00, -0.00, -0.04,
  0.00,  0.00, -0.04,  0.01,  1.00,  0.04,  0.04, -0.00, -0.00, -0.00,  0.00,
  0.01,  0.01,  0.01, -0.04,  0.04,  1.00,  0.08, -0.00, -0.00, -0.00, -0.00,
  0.01,  0.01,  0.01,  0.02,  0.04,  0.08,  1.00, -0.00,  0.00, -0.00, -0.00,
  0.13, -0.01, -0.00, -0.00, -0.00, -0.00, -0.00,  1.00,  0.03,  0.00,  0.01,
  0.00, -0.34, -0.00, -0.00, -0.00, -0.00,  0.00,  0.03,  1.00, -0.00, -0.00,
  0.00, -0.00, -0.20, -0.00, -0.00, -0.00, -0.00,  0.00, -0.00,  1.00,  0.02,
  0.00,  0.00, -0.01, -0.04,  0.00, -0.00, -0.00,  0.01, -0.00,  0.02,  1.00};

for (int i=0; i<11; i++) {
  for (int j=0; j<11; j++) {
    corStatADhhpi0(i,j)=statCorrelationsADhhpi0[j+i*11];}}


double systCorrelationsADhhpi0[121] = {
  1.00,  0.03,  0.07,  0.07,  0.18,  0.17, -0.16,  0.81,  0.32,  0.02,  0.13,
  0.03,  1.00,  0.28,  0.31,  0.67,  0.68, -0.63, -0.18, -0.49, -0.00, -0.04,
  0.07,  0.28,  1.00,  0.77,  0.07,  0.05,  0.05,  0.08, -0.08, -0.33, -0.18,
  0.07,  0.31,  0.77,  1.00,  0.05,  0.02, -0.06,  0.13, -0.11, -0.14, -0.25,
  0.18,  0.67,  0.07,  0.05,  1.00,  0.88, -0.82, -0.04,  0.02, -0.04,  0.02,
  0.17,  0.68,  0.05,  0.02,  0.88,  1.00, -0.87, -0.03,  0.00,  0.00,  0.01,
  -0.16, -0.63,  0.05, -0.06, -0.82, -0.87,  1.00, -0.05,  0.06,  0.04,  0.00,
  0.81, -0.18,  0.08,  0.13, -0.04, -0.03, -0.05,  1.00,  0.33, -0.03, -0.02,
  0.32, -0.49, -0.08, -0.11,  0.02,  0.00,  0.06,  0.33,  1.00,  0.02, -0.02,
  0.02, -0.00, -0.33, -0.14, -0.04,  0.00,  0.04, -0.03,  0.02,  1.00,  0.38,
  0.13, -0.04, -0.18, -0.25,  0.02,  0.01,  0.00, -0.02, -0.02,  0.38,  1.00};

for (int i=0; i<11; i++) {
  for (int j=0; j<11; j++) {
    corSystADhhpi0(i,j)=systCorrelationsADhhpi0[j+i*11];}}


//TMatrixDSym 
covStatADhhpi0 = buildCov(corStatADhhpi0,ADhhpi0_x_stat_err);
//TMatrixDSym 
covSystADhhpi0 = buildCov(corSystADhhpi0,ADhhpi0_x_syst_err);
//TMatrixDSym 
covADhhpi0     = covStatADhhpi0 + covSystADhhpi0;
//TMatrixDSym 
corADhhpi0     = buildCor(covADhhpi0);
