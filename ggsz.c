/*
double x_minus          = 0.025;
double y_minus          = 0.075;
double x_plus           =-0.077;
double y_plus           =-0.022;

double x_minus_stat_err      = 0.025;  double x_minus_syst_err      = 0.01118;
double y_minus_stat_err      = 0.029;  double y_minus_syst_err      = 0.01487;
double x_plus_stat_err       = 0.024;  double x_plus_syst_err       = 0.01077;
double y_plus_stat_err       = 0.025;  double y_plus_syst_err       = 0.01077;
*/


//TVectorD ggsz_x_stat_err(4);
ggsz_x_stat_err(0)                = x_minus_stat_err;
ggsz_x_stat_err(1)                = y_minus_stat_err;
ggsz_x_stat_err(2)                = x_plus_stat_err;
ggsz_x_stat_err(3)                = y_plus_stat_err;

//TVectorD ggsz_x_syst_err(4);
ggsz_x_syst_err(0)                = x_minus_syst_err;
ggsz_x_syst_err(1)                = y_minus_syst_err;
ggsz_x_syst_err(2)                = x_plus_syst_err;
ggsz_x_syst_err(3)                = y_plus_syst_err;

//TVectorD ggsz_x_err(4);
ggsz_x_err(0)                = sqrt( ggsz_x_stat_err(0) * ggsz_x_stat_err(0) + ggsz_x_syst_err(0) * ggsz_x_syst_err(0) );
ggsz_x_err(1)                = sqrt( ggsz_x_stat_err(1) * ggsz_x_stat_err(1) + ggsz_x_syst_err(1) * ggsz_x_syst_err(1) );
ggsz_x_err(2)                = sqrt( ggsz_x_stat_err(2) * ggsz_x_stat_err(2) + ggsz_x_syst_err(2) * ggsz_x_syst_err(2) );
ggsz_x_err(3)                = sqrt( ggsz_x_stat_err(3) * ggsz_x_stat_err(3) + ggsz_x_syst_err(3) * ggsz_x_syst_err(3) );

//TMatrixDSym corrStatGGSZ(4);
//      x_minus                         y_minus                         x_plus                          y_plus
corrStatGGSZ(0,0)=1.0;                  corrStatGGSZ(0,1)=-0.247;               corrStatGGSZ(0,2)=0.038;                 corrStatGGSZ(0,3)=-0.003;
corrStatGGSZ(1,0)=corrStatGGSZ(0,1);    corrStatGGSZ(1,1)=1.0;                  corrStatGGSZ(1,2)=-0.011;                corrStatGGSZ(1,3)=0.012;
corrStatGGSZ(2,0)=corrStatGGSZ(0,2);    corrStatGGSZ(2,1)=corrStatGGSZ(1,2);    corrStatGGSZ(2,2)=1.0;                   corrStatGGSZ(2,3)=0.002;
corrStatGGSZ(3,0)=corrStatGGSZ(0,3);    corrStatGGSZ(3,1)=corrStatGGSZ(1,3);    corrStatGGSZ(3,2)=corrStatGGSZ(2,3);     corrStatGGSZ(3,3)=1.0;

//TMatrixDSym corrSystGGSZ(4);
//      x_minus                         y_minus                         x_plus                          y_plus
corrSystGGSZ(0,0)=1.0;                  corrSystGGSZ(0,1)=0.005;                corrSystGGSZ(0,2)=-0.025;                corrSystGGSZ(0,3)=0.070;
corrSystGGSZ(1,0)=corrSystGGSZ(0,1);    corrSystGGSZ(1,1)=1.0;                  corrSystGGSZ(1,2)=0.009;                 corrSystGGSZ(1,3)=-0.141;
corrSystGGSZ(2,0)=corrSystGGSZ(0,2);    corrSystGGSZ(2,1)=corrSystGGSZ(1,2);    corrSystGGSZ(2,2)=1.0;                   corrSystGGSZ(2,3)=0.008;
corrSystGGSZ(3,0)=corrSystGGSZ(0,3);    corrSystGGSZ(3,1)=corrSystGGSZ(1,3);    corrSystGGSZ(3,2)=corrSystGGSZ(2,3);     corrSystGGSZ(3,3)=1.0;

//TMatrixDSym 
covStatGGSZ = buildCov(corrStatGGSZ,ggsz_x_stat_err);
//TMatrixDSym 
covSystGGSZ = buildCov(corrSystGGSZ,ggsz_x_syst_err);
//TMatrixDSym 
covGGSZ     = covStatGGSZ + covSystGGSZ;
//TMatrixDSym 
corGGSZ     = buildCor(covGGSZ);


