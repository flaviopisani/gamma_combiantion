/*
double a_ADS_K_KPi      = -0.40267; // A_{ADS(K)}^{KPi}
double a_CP_DK_KK       = 0.08658; // A_CP^{DK,KPi}
double a_CP_DK_PiPi     = 0.12760; // A_CP^{DK,PiPi}
double a_fav_DK_KPi     = -0.01944; // A_{fav}^{DK,KPi}
double r_ADS_K_KPi      = 0.01876; // R_{ADS}^{KPi}
double r_CP_KK          = 0.96834; // R_{CP}^{KK}
double r_CP_PiPi        = 1.00220; // R_{CP}^{PiPi}


double a_ADS_K_KPi_stat_err  = 0.05620;
double a_CP_DK_KK_stat_err   = 0.02020;
double a_CP_DK_PiPi_stat_err = 0.03690;
double a_fav_DK_KPi_stat_err = 0.00718;
double r_ADS_K_KPi_stat_err  = 0.00114;
double r_CP_KK_stat_err      = 0.02170;
double r_CP_PiPi_stat_err    = 0.04000;

double a_ADS_K_KPi_syst_err  = 0.01060;
double a_CP_DK_KK_syst_err   = 0.00810;
double a_CP_DK_PiPi_syst_err = 0.01200;
double a_fav_DK_KPi_syst_err = 0.00600;
double r_ADS_K_KPi_syst_err  = 0.00100;
double r_CP_KK_syst_err      = 0.02100;
double r_CP_PiPi_syst_err    = 0.02600;
*/

//TVectorD GAhh_x_stat_err(7);
GAhh_x_stat_err(0)        = a_ADS_K_KPi_stat_err;
GAhh_x_stat_err(1)        = a_CP_DK_KK_stat_err;
GAhh_x_stat_err(2)        = a_CP_DK_PiPi_stat_err;
GAhh_x_stat_err(3)        = a_fav_DK_KPi_stat_err;
GAhh_x_stat_err(4)        = r_ADS_K_KPi_stat_err;
GAhh_x_stat_err(5)        = r_CP_KK_stat_err;
GAhh_x_stat_err(6)        = r_CP_PiPi_stat_err;


//TVectorD GAhh_x_syst_err(7);
GAhh_x_syst_err(0)        = a_ADS_K_KPi_syst_err;
GAhh_x_syst_err(1)        = a_CP_DK_KK_syst_err;
GAhh_x_syst_err(2)        = a_CP_DK_PiPi_syst_err;
GAhh_x_syst_err(3)        = a_fav_DK_KPi_syst_err;
GAhh_x_syst_err(4)        = r_ADS_K_KPi_syst_err;
GAhh_x_syst_err(5)        = r_CP_KK_syst_err;
GAhh_x_syst_err(6)        = r_CP_PiPi_syst_err;


//TVectorD GAhh_x_err(7);
GAhh_x_err(0)                = sqrt( GAhh_x_stat_err(0) * GAhh_x_stat_err(0) + GAhh_x_syst_err(0) * GAhh_x_syst_err(0) );
GAhh_x_err(1)                = sqrt( GAhh_x_stat_err(1) * GAhh_x_stat_err(1) + GAhh_x_syst_err(1) * GAhh_x_syst_err(1) );
GAhh_x_err(2)                = sqrt( GAhh_x_stat_err(2) * GAhh_x_stat_err(2) + GAhh_x_syst_err(2) * GAhh_x_syst_err(2) );
GAhh_x_err(3)                = sqrt( GAhh_x_stat_err(3) * GAhh_x_stat_err(3) + GAhh_x_syst_err(3) * GAhh_x_syst_err(3) );
GAhh_x_err(4)                = sqrt( GAhh_x_stat_err(4) * GAhh_x_stat_err(4) + GAhh_x_syst_err(4) * GAhh_x_syst_err(4) );
GAhh_x_err(5)                = sqrt( GAhh_x_stat_err(5) * GAhh_x_stat_err(5) + GAhh_x_syst_err(5) * GAhh_x_syst_err(5) );
GAhh_x_err(6)                = sqrt( GAhh_x_stat_err(6) * GAhh_x_stat_err(6) + GAhh_x_syst_err(6) * GAhh_x_syst_err(6) );

/*
TMatrixDSym corStatGAhh(7); TMatrixDSym corSystGAhh(7);
//      a_ADS_K_KPi             a_CP_DK_KK              a_CP_DK_PiPi            a_fav_DK_KPi            r_ADS_K_KPi             r_CP_KK                 r_CP_PiPi
corStatGAhh(0,0)=1.0;               corStatGAhh(0,1)=0.0023;            corStatGAhh(0,2)=0.0012;            corStatGAhh(0,3)=0.0078;            corStatGAhh(0,4)=0.1023;            corStatGAhh(0,5)=0.0006;        corStatGAhh(0,6)=0.0009;
corStatGAhh(1,0)=corStatGAhh(0,1);  corStatGAhh(1,1)=1.0;               corStatGAhh(1,2)=0.0043;            corStatGAhh(1,3)=0.0243;            corStatGAhh(1,4)=-0.003;            corStatGAhh(1,5)=-0.0144;       corStatGAhh(1,6)=-0.0001;
corStatGAhh(2,0)=corStatGAhh(0,2);  corStatGAhh(2,1)=corStatGAhh(1,2);  corStatGAhh(2,2)=1.0;               corStatGAhh(2,3)=0.0143;            corStatGAhh(2,4)=-0.0010;           corStatGAhh(2,5)=-0.0022;       corStatGAhh(2,6)=-0.0382;
corStatGAhh(3,0)=corStatGAhh(0,3);  corStatGAhh(3,1)=corStatGAhh(1,3);  corStatGAhh(3,2)=corStatGAhh(2,3);  corStatGAhh(3,3)=1.0;               corStatGAhh(3,4)=-0.0001;           corStatGAhh(3,5)=0.0002;        corStatGAhh(3,6)=0.0;
corStatGAhh(4,0)=corStatGAhh(0,4);  corStatGAhh(4,1)=corStatGAhh(1,4);  corStatGAhh(4,2)=corStatGAhh(2,4);  corStatGAhh(4,3)=corStatGAhh(3,4);  corStatGAhh(4,4)=1.0;               corStatGAhh(4,5)=0.0399;        corStatGAhh(4,6)=0.0245;
corStatGAhh(5,0)=corStatGAhh(0,5);  corStatGAhh(5,1)=corStatGAhh(1,5);  corStatGAhh(5,2)=corStatGAhh(2,5);  corStatGAhh(5,3)=corStatGAhh(3,5);  corStatGAhh(5,4)=corStatGAhh(4,5);  corStatGAhh(5,5)=1.0;            corStatGAhh(5,6)=0.0597;
corStatGAhh(6,0)=corStatGAhh(0,6);  corStatGAhh(6,1)=corStatGAhh(1,6);  corStatGAhh(6,2)=corStatGAhh(2,6);  corStatGAhh(6,3)=corStatGAhh(3,6);  corStatGAhh(6,4)=corStatGAhh(4,6);  corStatGAhh(6,5)=corStatGAhh(5,6); corStatGAhh(6,6)=1.0;


//      a_ADS_K_KPi             a_CP_DK_KK              a_CP_DK_PiPi            a_fav_DK_KPi            r_ADS_K_KPi             r_CP_KK                 r_CP_PiPi
corSystGAhh(0,0)=1.0;               corSystGAhh(0,1)=-0.06;            corSystGAhh(0,2)=0.27;            corSystGAhh(0,3)=0.09;            corSystGAhh(0,4)=0.78;            corSystGAhh(0,5)=0.23;        corSystGAhh(0,6)=-0.04;
corSystGAhh(1,0)=corSystGAhh(0,1);  corSystGAhh(1,1)=1.0;               corSystGAhh(1,2)=-0.02;            corSystGAhh(1,3)=0.09;            corSystGAhh(1,4)=-0.10;            corSystGAhh(1,5)=-0.28;       corSystGAhh(1,6)=0.03;
corSystGAhh(2,0)=corSystGAhh(0,2);  corSystGAhh(2,1)=corSystGAhh(1,2);  corSystGAhh(2,2)=1.0;               corSystGAhh(2,3)=-0.01;            corSystGAhh(2,4)=0.35;           corSystGAhh(2,5)=0.11;       corSystGAhh(2,6)=-0.22;
corSystGAhh(3,0)=corSystGAhh(0,3);  corSystGAhh(3,1)=corSystGAhh(1,3);  corSystGAhh(3,2)=corSystGAhh(2,3);  corSystGAhh(3,3)=1.0;               corSystGAhh(3,4)=-0.11;           corSystGAhh(3,5)=-0.02;        corSystGAhh(3,6)=-0.01;
corSystGAhh(4,0)=corSystGAhh(0,4);  corSystGAhh(4,1)=corSystGAhh(1,4);  corSystGAhh(4,2)=corSystGAhh(2,4);  corSystGAhh(4,3)=corSystGAhh(3,4);  corSystGAhh(4,4)=1.0;               corSystGAhh(4,5)=0.33;        corSystGAhh(4,6)=-0.14;
corSystGAhh(5,0)=corSystGAhh(0,5);  corSystGAhh(5,1)=corSystGAhh(1,5);  corSystGAhh(5,2)=corSystGAhh(2,5);  corSystGAhh(5,3)=corSystGAhh(3,5);  corSystGAhh(5,4)=corSystGAhh(4,5);  corSystGAhh(5,5)=1.0;            corSystGAhh(5,6)=0.17;
corSystGAhh(6,0)=corSystGAhh(0,6);  corSystGAhh(6,1)=corSystGAhh(1,6);  corSystGAhh(6,2)=corSystGAhh(2,6);  corSystGAhh(6,3)=corSystGAhh(3,6);  corSystGAhh(6,4)=corSystGAhh(4,6);  corSystGAhh(6,5)=corSystGAhh(5,6); corSystGAhh(6,6)=1.0;
*/

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
