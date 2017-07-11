//TVectorD ggsz_x_stat_err(4);
ggsz_DKstar0_x_stat_err(0)                = x_DKstar0_minus_stat_err;
ggsz_DKstar0_x_stat_err(1)                = y_DKstar0_minus_stat_err;
ggsz_DKstar0_x_stat_err(2)                = x_DKstar0_plus_stat_err;
ggsz_DKstar0_x_stat_err(3)                = y_DKstar0_plus_stat_err;

//TVectorD ggsz_x_syst_err(4);
ggsz_DKstar0_x_syst_err(0)                = x_DKstar0_minus_syst_err;
ggsz_DKstar0_x_syst_err(1)                = y_DKstar0_minus_syst_err;
ggsz_DKstar0_x_syst_err(2)                = x_DKstar0_plus_syst_err;
ggsz_DKstar0_x_syst_err(3)                = y_DKstar0_plus_syst_err;

//TVectorD ggsz_x_err(4);
ggsz_DKstar0_x_err(0)                = sqrt( ggsz_DKstar0_x_stat_err(0) * ggsz_DKstar0_x_stat_err(0) + ggsz_DKstar0_x_syst_err(0) * ggsz_DKstar0_x_syst_err(0) );
ggsz_DKstar0_x_err(1)                = sqrt( ggsz_DKstar0_x_stat_err(1) * ggsz_DKstar0_x_stat_err(1) + ggsz_DKstar0_x_syst_err(1) * ggsz_DKstar0_x_syst_err(1) );
ggsz_DKstar0_x_err(2)                = sqrt( ggsz_DKstar0_x_stat_err(2) * ggsz_DKstar0_x_stat_err(2) + ggsz_DKstar0_x_syst_err(2) * ggsz_DKstar0_x_syst_err(2) );
ggsz_DKstar0_x_err(3)                = sqrt( ggsz_DKstar0_x_stat_err(3) * ggsz_DKstar0_x_stat_err(3) + ggsz_DKstar0_x_syst_err(3) * ggsz_DKstar0_x_syst_err(3) );




/*
//TMatrixDSym corrStatGGSZ(4);
//      x_minus                         y_minus                         x_plus                          y_plus
corrStatGGSZDKstar0(0,0)=1.0;                      corrStatGGSZDKstar0(0,1)=0.143;                    corrStatGGSZDKstar0(0,2)=0.0;                     corrStatGGSZDKstar0(0,3)=0.0;
corrStatGGSZDKstar0(1,0)=corrStatGGSZDKstar0(0,1);    corrStatGGSZDKstar0(1,1)=1.0;                      corrStatGGSZDKstar0(1,2)=0.0;                     corrStatGGSZDKstar0(1,3)=0.0;
corrStatGGSZDKstar0(2,0)=corrStatGGSZDKstar0(0,2);    corrStatGGSZDKstar0(2,1)=corrStatGGSZDKstar0(1,2);    corrStatGGSZDKstar0(2,2)=1.0;                       corrStatGGSZDKstar0(2,3)=0.143;
corrStatGGSZDKstar0(3,0)=corrStatGGSZDKstar0(0,3);    corrStatGGSZDKstar0(3,1)=corrStatGGSZDKstar0(1,3);    corrStatGGSZDKstar0(3,2)=corrStatGGSZDKstar0(2,3);     corrStatGGSZDKstar0(3,3)=1.0;

//TMatrixDSym corrSystGGSZ(4);
//      x_minus                         y_minus                         x_plus                          y_plus
corrSystGGSZDKstar0(0,0)=1.0;                      corrSystGGSZDKstar0(0,1)=0.0;                    corrSystGGSZDKstar0(0,2)=0.0;                     corrSystGGSZDKstar0(0,3)=0.0;
corrSystGGSZDKstar0(1,0)=corrSystGGSZDKstar0(0,1);    corrSystGGSZDKstar0(1,1)=1.0;                      corrSystGGSZDKstar0(1,2)=0.0;                     corrSystGGSZDKstar0(1,3)=0.0;
corrSystGGSZDKstar0(2,0)=corrSystGGSZDKstar0(0,2);    corrSystGGSZDKstar0(2,1)=corrSystGGSZDKstar0(1,2);    corrSystGGSZDKstar0(2,2)=1.0;                       corrSystGGSZDKstar0(2,3)=0.0;
corrSystGGSZDKstar0(3,0)=corrSystGGSZDKstar0(0,3);    corrSystGGSZDKstar0(3,1)=corrSystGGSZDKstar0(1,3);    corrSystGGSZDKstar0(3,2)=corrSystGGSZDKstar0(2,3);     corrSystGGSZDKstar0(3,3)=1.0;
*/


//TMatrixDSym 
covStatGGSZDKstar0 = buildCov(corrStatGGSZDKstar0,ggsz_DKstar0_x_stat_err);
//TMatrixDSym 
covSystGGSZDKstar0 = buildCov(corrSystGGSZDKstar0,ggsz_DKstar0_x_syst_err);
//TMatrixDSym 
covGGSZDKstar0     = covStatGGSZDKstar0 + covSystGGSZDKstar0;
//TMatrixDSym 
corGGSZDKstar0     = buildCor(covGGSZDKstar0);


