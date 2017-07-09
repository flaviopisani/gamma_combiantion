/*
double a_ADS_K_KPiPi0   = -0.20000; // A_{ADS(K)}^{KPi}
double a_CP_DK_KKPi0    =  0.30000; // A_CP^{DK,KPi}
double a_CP_DK_PiPiPi0  =  0.05400; // A_CP^{DK,PiPi}
double a_fav_DK_KPiPi0  =  0.01000; // A_{fav}^{DK,KPi}
double r_ADS_K_KPiPi0   =  0.01400; // R_{ADS}^{KPi}
double r_CP_KKPi0       =  0.95000; // R_{CP}^{KK}
double r_CP_PiPiPi0     =  0.98000; // R_{CP}^{PiPi}

double a_ADS_K_KPiPi0_stat_err       = 0.27000;
double a_CP_DK_KKPi0_stat_err        = 0.20000;
double a_CP_DK_PiPiPi0_stat_err      = 0.09100;
double a_fav_DK_KPiPi0_stat_err      = 0.02600;
double r_ADS_K_KPiPi0_stat_err       = 0.00470;
double r_CP_KKPi0_stat_err           = 0.22000;
double r_CP_PiPiPi0_stat_err         = 0.11000;

double a_ADS_K_KPiPi0_syst_err       = 0.04000;
double a_CP_DK_KKPi0_syst_err        = 0.02000;
double a_CP_DK_PiPiPi0_syst_err      = 0.01100;
double a_fav_DK_KPiPi0_syst_err      = 0.00500;
double r_ADS_K_KPiPi0_syst_err       = 0.00210;
double r_CP_KKPi0_syst_err           = 0.05000;
double r_CP_PiPiPi0_syst_err         = 0.05000;
*/

//TVectorD ADhhpi0_x_stat_err(7);
ADhhpi0_x_stat_err(0)                = a_ADS_DK_KPiPi0_stat_err;
ADhhpi0_x_stat_err(1)                = a_CP_DK_KKPi0_stat_err;
ADhhpi0_x_stat_err(2)                = a_CP_DK_PiPiPi0_stat_err;
ADhhpi0_x_stat_err(3)                = a_fav_DK_KPiPi0_stat_err;
ADhhpi0_x_stat_err(4)                = r_ADS_DK_KPiPi0_stat_err;
ADhhpi0_x_stat_err(5)                = r_CP_KKPi0_stat_err;
ADhhpi0_x_stat_err(6)                = r_CP_PiPiPi0_stat_err;

//TVectorD ADhhpi0_x_syst_err(7);
ADhhpi0_x_syst_err(0)                = a_ADS_DK_KPiPi0_syst_err;
ADhhpi0_x_syst_err(1)                = a_CP_DK_KKPi0_syst_err;
ADhhpi0_x_syst_err(2)                = a_CP_DK_PiPiPi0_syst_err;
ADhhpi0_x_syst_err(3)                = a_fav_DK_KPiPi0_syst_err;
ADhhpi0_x_syst_err(4)                = r_ADS_DK_KPiPi0_syst_err;
ADhhpi0_x_syst_err(5)                = r_CP_KKPi0_syst_err;
ADhhpi0_x_syst_err(6)                = r_CP_PiPiPi0_syst_err;


//TVectorD ADhhpi0_x_err(7);
ADhhpi0_x_err(0)                = sqrt( ADhhpi0_x_stat_err(0) * ADhhpi0_x_stat_err(0) + ADhhpi0_x_syst_err(0) * ADhhpi0_x_syst_err(0) );
ADhhpi0_x_err(1)                = sqrt( ADhhpi0_x_stat_err(1) * ADhhpi0_x_stat_err(1) + ADhhpi0_x_syst_err(1) * ADhhpi0_x_syst_err(1) );
ADhhpi0_x_err(2)                = sqrt( ADhhpi0_x_stat_err(2) * ADhhpi0_x_stat_err(2) + ADhhpi0_x_syst_err(2) * ADhhpi0_x_syst_err(2) );
ADhhpi0_x_err(3)                = sqrt( ADhhpi0_x_stat_err(3) * ADhhpi0_x_stat_err(3) + ADhhpi0_x_syst_err(3) * ADhhpi0_x_syst_err(3) );
ADhhpi0_x_err(4)                = sqrt( ADhhpi0_x_stat_err(4) * ADhhpi0_x_stat_err(4) + ADhhpi0_x_syst_err(4) * ADhhpi0_x_syst_err(4) );
ADhhpi0_x_err(5)                = sqrt( ADhhpi0_x_stat_err(5) * ADhhpi0_x_stat_err(5) + ADhhpi0_x_syst_err(5) * ADhhpi0_x_syst_err(5) );
ADhhpi0_x_err(6)                = sqrt( ADhhpi0_x_stat_err(6) * ADhhpi0_x_stat_err(6) + ADhhpi0_x_syst_err(6) * ADhhpi0_x_syst_err(6) );


/*

//TMatrixDSym corStatADhhpi0(7);
//      a_ADS_K_KPiPi0          a_CP_DK_KKPi0           a_CP_DK_PiPiPi0         a_fav_DK_KPiPi0         r_ADS_K_KPiPi0          r_CP_KKPi0              r_CP_PiPiPi0
corStatADhhpi0(0,0)=1.0;                  corStatADhhpi0(0,1)=0.0;                  corStatADhhpi0(0,2)=0.0;                  corStatADhhpi0(0,3)=0.01;                 corStatADhhpi0(0,4)=0.13;                 corStatADhhpi0(0,5)=0.0;                 corStatADhhpi0(0,6)=0.00;
corStatADhhpi0(1,0)=corStatADhhpi0(0,1);  corStatADhhpi0(1,1)=1.0;                  corStatADhhpi0(1,2)=0.00;                 corStatADhhpi0(1,3)=0.01;                 corStatADhhpi0(1,4)=0.00;                 corStatADhhpi0(1,5)=-0.20;               corStatADhhpi0(1,6)=-0.01;
corStatADhhpi0(2,0)=corStatADhhpi0(0,2);  corStatADhhpi0(2,1)=corStatADhhpi0(1,2);  corStatADhhpi0(2,2)=1.0;                  corStatADhhpi0(2,3)=0.02;                 corStatADhhpi0(2,4)=0.0;                  corStatADhhpi0(2,5)=0.0;                 corStatADhhpi0(2,6)=-0.04;
corStatADhhpi0(3,0)=corStatADhhpi0(0,3);  corStatADhhpi0(3,1)=corStatADhhpi0(1,3);  corStatADhhpi0(3,2)=corStatADhhpi0(2,3);  corStatADhhpi0(3,3)=1.0;                  corStatADhhpi0(3,4)=0.0;                  corStatADhhpi0(3,5)=0.0;                 corStatADhhpi0(3,6)=0.0;
corStatADhhpi0(4,0)=corStatADhhpi0(0,4);  corStatADhhpi0(4,1)=corStatADhhpi0(1,4);  corStatADhhpi0(4,2)=corStatADhhpi0(2,4);  corStatADhhpi0(4,3)=corStatADhhpi0(3,4);  corStatADhhpi0(4,4)=1.0;                  corStatADhhpi0(4,5)=0.0;                 corStatADhhpi0(4,6)=0.01;
corStatADhhpi0(5,0)=corStatADhhpi0(0,5);  corStatADhhpi0(5,1)=corStatADhhpi0(1,5);  corStatADhhpi0(5,2)=corStatADhhpi0(2,5);  corStatADhhpi0(5,3)=corStatADhhpi0(3,5);  corStatADhhpi0(5,4)=corStatADhhpi0(4,5);  corStatADhhpi0(5,5)=1.0;                 corStatADhhpi0(5,6)=0.02;
corStatADhhpi0(6,0)=corStatADhhpi0(0,6);  corStatADhhpi0(6,1)=corStatADhhpi0(1,6);  corStatADhhpi0(6,2)=corStatADhhpi0(2,6);  corStatADhhpi0(6,3)=corStatADhhpi0(3,6);  corStatADhhpi0(6,4)=corStatADhhpi0(4,6);  corStatADhhpi0(6,5)=corStatADhhpi0(5,6); corStatADhhpi0(6,6)=1.0;


//TMatrixDSym corSystADhhpi0(7);
//      a_ADS_K_KPiPi0          a_CP_DK_KKPi0           a_CP_DK_PiPiPi0         a_fav_DK_KPiPi0         r_ADS_K_KPiPi0          r_CP_KKPi0              r_CP_PiPiPi0
corSystADhhpi0(0,0)=1.0;                  corSystADhhpi0(0,1)=0.07;                 corSystADhhpi0(0,2)=0.07;                 corSystADhhpi0(0,3)=0-.16;                corSystADhhpi0(0,4)=0.81;                 corSystADhhpi0(0,5)=0.02;                corSystADhhpi0(0,6)=0.13;
corSystADhhpi0(1,0)=corSystADhhpi0(0,1);  corSystADhhpi0(1,1)=1.0;                  corSystADhhpi0(1,2)=0.77;                 corSystADhhpi0(1,3)=0.05;                 corSystADhhpi0(1,4)=0.08;                 corSystADhhpi0(1,5)=-0.33;               corSystADhhpi0(1,6)=-0.18;
corSystADhhpi0(2,0)=corSystADhhpi0(0,2);  corSystADhhpi0(2,1)=corSystADhhpi0(1,2);  corSystADhhpi0(2,2)=1.0;                  corSystADhhpi0(2,3)=-0.06;                corSystADhhpi0(2,4)=0.13;                 corSystADhhpi0(2,5)=-0.14;               corSystADhhpi0(2,6)=-0.25;
corSystADhhpi0(3,0)=corSystADhhpi0(0,3);  corSystADhhpi0(3,1)=corSystADhhpi0(1,3);  corSystADhhpi0(3,2)=corSystADhhpi0(2,3);  corSystADhhpi0(3,3)=1.0;                  corSystADhhpi0(3,4)=-0.05;                corSystADhhpi0(3,5)=0.04;                corSystADhhpi0(3,6)=0.0;
corSystADhhpi0(4,0)=corSystADhhpi0(0,4);  corSystADhhpi0(4,1)=corSystADhhpi0(1,4);  corSystADhhpi0(4,2)=corSystADhhpi0(2,4);  corSystADhhpi0(4,3)=corSystADhhpi0(3,4);  corSystADhhpi0(4,4)=1.0;                  corSystADhhpi0(4,5)=-0.03;               corSystADhhpi0(4,6)=-0.02;
corSystADhhpi0(5,0)=corSystADhhpi0(0,5);  corSystADhhpi0(5,1)=corSystADhhpi0(1,5);  corSystADhhpi0(5,2)=corSystADhhpi0(2,5);  corSystADhhpi0(5,3)=corSystADhhpi0(3,5);  corSystADhhpi0(5,4)=corSystADhhpi0(4,5);  corSystADhhpi0(5,5)=1.0;                 corSystADhhpi0(5,6)=0.38;
corSystADhhpi0(6,0)=corSystADhhpi0(0,6);  corSystADhhpi0(6,1)=corSystADhhpi0(1,6);  corSystADhhpi0(6,2)=corSystADhhpi0(2,6);  corSystADhhpi0(6,3)=corSystADhhpi0(3,6);  corSystADhhpi0(6,4)=corSystADhhpi0(4,6);  corSystADhhpi0(6,5)=corSystADhhpi0(5,6); corSystADhhpi0(6,6)=1.0;
*/

//TMatrixDSym 
covStatADhhpi0 = buildCov(corStatADhhpi0,ADhhpi0_x_stat_err);
//TMatrixDSym 
covSystADhhpi0 = buildCov(corSystADhhpi0,ADhhpi0_x_syst_err);
//TMatrixDSym 
covADhhpi0     = covStatADhhpi0 + covSystADhhpi0;
//TMatrixDSym 
corADhhpi0     = buildCor(covADhhpi0);
