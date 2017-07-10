/*
double C                = 0.52639;
double D_f              = -0.36963;
double D_bar_f          = -0.20369;
double S_f              = -1.08902;
double S_bar_f          = 0.35674;

double C_stat_err            = 0.24546;
double D_f_stat_err          = 0.42274;
double D_bar_f_stat_err      = 0.41397;
double S_f_stat_err          = 0.33309;
double S_bar_f_stat_err      = 0.33495;

double C_syst_err            = 0.04590;
double D_f_syst_err          = 0.19700;
double D_bar_f_syst_err      = 0.19457;
double S_f_syst_err          = 0.07794;
double S_bar_f_syst_err      = 0.07570;
*/


//TVectorD BsDsK_x_stat_err(5);
BsDsK_x_stat_err(0)                = C_stat_err;
BsDsK_x_stat_err(1)                = D_f_stat_err;
BsDsK_x_stat_err(2)                = D_bar_f_stat_err;
BsDsK_x_stat_err(3)                = S_f_stat_err;
BsDsK_x_stat_err(4)                = S_bar_f_stat_err;


//TVectorD BsDsK_x_syst_err(5);
BsDsK_x_syst_err(0)                = C_syst_err;
BsDsK_x_syst_err(1)                = D_f_syst_err;
BsDsK_x_syst_err(2)                = D_bar_f_syst_err;
BsDsK_x_syst_err(3)                = S_f_syst_err;
BsDsK_x_syst_err(4)                = S_bar_f_syst_err;


//TVectorD BsDsK_x_err(5);
BsDsK_x_err(0)                = sqrt( BsDsK_x_stat_err(0) * BsDsK_x_stat_err(0) + BsDsK_x_syst_err(0) * BsDsK_x_syst_err(0) );
BsDsK_x_err(1)                = sqrt( BsDsK_x_stat_err(1) * BsDsK_x_stat_err(1) + BsDsK_x_syst_err(1) * BsDsK_x_syst_err(1) );
BsDsK_x_err(2)                = sqrt( BsDsK_x_stat_err(2) * BsDsK_x_stat_err(2) + BsDsK_x_syst_err(2) * BsDsK_x_syst_err(2) );
BsDsK_x_err(3)                = sqrt( BsDsK_x_stat_err(3) * BsDsK_x_stat_err(3) + BsDsK_x_syst_err(3) * BsDsK_x_syst_err(3) );
BsDsK_x_err(4)                = sqrt( BsDsK_x_stat_err(4) * BsDsK_x_stat_err(4) + BsDsK_x_syst_err(4) * BsDsK_x_syst_err(4) );

/*
//TMatrixDSym corStatBsDsK(5);
//      C                               D_f                             D_bar_f                         S_f                             S_bar_f
corStatBsDsK(0,0)=1.0;                  corStatBsDsK(0,1)=-0.084;               corStatBsDsK(0,2)=-0.103;               corStatBsDsK(0,3)=-0.008;                corStatBsDsK(0,4)=0.045;
corStatBsDsK(1,0)=corStatBsDsK(0,1);    corStatBsDsK(1,1)=1.0;                  corStatBsDsK(1,2)=0.544;                corStatBsDsK(1,3)=0.117;                 corStatBsDsK(1,4)=-0.022;
corStatBsDsK(2,0)=corStatBsDsK(0,2);    corStatBsDsK(2,1)=corStatBsDsK(1,2);    corStatBsDsK(2,2)=1.0;                  corStatBsDsK(2,3)=0.067;                 corStatBsDsK(2,4)=-0.032;
corStatBsDsK(3,0)=corStatBsDsK(0,3);    corStatBsDsK(3,1)=corStatBsDsK(1,3);    corStatBsDsK(3,2)=corStatBsDsK(2,3);    corStatBsDsK(3,3)=1.0;                   corStatBsDsK(3,4)=-0.002;
corStatBsDsK(4,0)=corStatBsDsK(0,4);    corStatBsDsK(4,1)=corStatBsDsK(1,4);    corStatBsDsK(4,2)=corStatBsDsK(2,4);    corStatBsDsK(4,3)=corStatBsDsK(3,4);     corStatBsDsK(4,4)=1.0;


//TMatrixDSym corSystBsDsK(5);
//      C                               D_f                             D_bar_f                         S_f                             S_bar_f
corSystBsDsK(0,0)=1.0;                  corSystBsDsK(0,1)=-0.22;               corSystBsDsK(0,2)=-0.22;               corSystBsDsK(0,3)=-0.04;                corSystBsDsK(0,4)=0.03;
corSystBsDsK(1,0)=corSystBsDsK(0,1);    corSystBsDsK(1,1)=1.0;                  corSystBsDsK(1,2)=0.96;                corSystBsDsK(1,3)=0.17;                 corSystBsDsK(1,4)=-0.14;
corSystBsDsK(2,0)=corSystBsDsK(0,2);    corSystBsDsK(2,1)=corSystBsDsK(1,2);    corSystBsDsK(2,2)=1.0;                  corSystBsDsK(2,3)=0.17;                 corSystBsDsK(2,4)=-0.14;
corSystBsDsK(3,0)=corSystBsDsK(0,3);    corSystBsDsK(3,1)=corSystBsDsK(1,3);    corSystBsDsK(3,2)=corSystBsDsK(2,3);    corSystBsDsK(3,3)=1.0;                   corSystBsDsK(3,4)=-0.09;
corSystBsDsK(4,0)=corSystBsDsK(0,4);    corSystBsDsK(4,1)=corSystBsDsK(1,4);    corSystBsDsK(4,2)=corSystBsDsK(2,4);    corSystBsDsK(4,3)=corSystBsDsK(3,4);     corSystBsDsK(4,4)=1.0;
*/


//TMatrixDSym 
covStatBsDsK = buildCov(corStatBsDsK,BsDsK_x_stat_err);
//TMatrixDSym 
covSystBsDsK = buildCov(corSystBsDsK,BsDsK_x_syst_err);
//TMatrixDSym 
covBsDsK     = covStatBsDsK + covSystBsDsK;
//TMatrixDSym 
corBsDsK     = buildCor(covBsDsK);
