//TVectorD ggsz_x_stat_err(4);
ggsz_DKPi_x_stat_err(0)                = x_DKPi_minus_stat_err;
ggsz_DKPi_x_stat_err(1)                = y_DKPi_minus_stat_err;
ggsz_DKPi_x_stat_err(2)                = x_DKPi_plus_stat_err;
ggsz_DKPi_x_stat_err(3)                = y_DKPi_plus_stat_err;

//TVectorD ggsz_x_syst_err(4);
ggsz_DKPi_x_syst_err(0)                = x_DKPi_minus_syst_err;
ggsz_DKPi_x_syst_err(1)                = y_DKPi_minus_syst_err;
ggsz_DKPi_x_syst_err(2)                = x_DKPi_plus_syst_err;
ggsz_DKPi_x_syst_err(3)                = y_DKPi_plus_syst_err;

//TVectorD ggsz_x_err(4);
ggsz_DKPi_x_err(0)                = sqrt( ggsz_DKPi_x_stat_err(0) * ggsz_DKPi_x_stat_err(0) + ggsz_DKPi_x_syst_err(0) * ggsz_DKPi_x_syst_err(0) );
ggsz_DKPi_x_err(1)                = sqrt( ggsz_DKPi_x_stat_err(1) * ggsz_DKPi_x_stat_err(1) + ggsz_DKPi_x_syst_err(1) * ggsz_DKPi_x_syst_err(1) );
ggsz_DKPi_x_err(2)                = sqrt( ggsz_DKPi_x_stat_err(2) * ggsz_DKPi_x_stat_err(2) + ggsz_DKPi_x_syst_err(2) * ggsz_DKPi_x_syst_err(2) );
ggsz_DKPi_x_err(3)                = sqrt( ggsz_DKPi_x_stat_err(3) * ggsz_DKPi_x_stat_err(3) + ggsz_DKPi_x_syst_err(3) * ggsz_DKPi_x_syst_err(3) );


/*
//TMatrixDSym corrStatGGSZ(4);
//      x_minus                         y_minus                         x_plus                          y_plus
corrStatGGSZDKPi(0,0)=1.0;                      corrStatGGSZDKPi(0,1)=0.341;                    corrStatGGSZDKPi(0,2)=0.104;                     corrStatGGSZDKPi(0,3)=0.130;
corrStatGGSZDKPi(1,0)=corrStatGGSZDKPi(0,1);    corrStatGGSZDKPi(1,1)=1.0;                      corrStatGGSZDKPi(1,2)=0.054;                     corrStatGGSZDKPi(1,3)=0.154;
corrStatGGSZDKPi(2,0)=corrStatGGSZDKPi(0,2);    corrStatGGSZDKPi(2,1)=corrStatGGSZDKPi(1,2);    corrStatGGSZDKPi(2,2)=1.0;                       corrStatGGSZDKPi(2,3)=0.501;
corrStatGGSZDKPi(3,0)=corrStatGGSZDKPi(0,3);    corrStatGGSZDKPi(3,1)=corrStatGGSZDKPi(1,3);    corrStatGGSZDKPi(3,2)=corrStatGGSZDKPi(2,3);     corrStatGGSZDKPi(3,3)=1.0;

//TMatrixDSym corrSystGGSZ(4);
//      x_minus                         y_minus                         x_plus                          y_plus
corrSystGGSZDKPi(0,0)=1.0;                      corrSystGGSZDKPi(0,1)=0.872;                    corrSystGGSZDKPi(0,2)=0.253;                     corrSystGGSZDKPi(0,3)=0.368;
corrSystGGSZDKPi(1,0)=corrSystGGSZDKPi(0,1);    corrSystGGSZDKPi(1,1)=1.0;                      corrSystGGSZDKPi(1,2)=0.293;                     corrSystGGSZDKPi(1,3)=0.414;
corrSystGGSZDKPi(2,0)=corrSystGGSZDKPi(0,2);    corrSystGGSZDKPi(2,1)=corrSystGGSZDKPi(1,2);    corrSystGGSZDKPi(2,2)=1.0;                       corrSystGGSZDKPi(2,3)=0.731;
corrSystGGSZDKPi(3,0)=corrSystGGSZDKPi(0,3);    corrSystGGSZDKPi(3,1)=corrSystGGSZDKPi(1,3);    corrSystGGSZDKPi(3,2)=corrSystGGSZDKPi(2,3);     corrSystGGSZDKPi(3,3)=1.0;
*/




//TMatrixDSym 
covStatGGSZDKPi = buildCov(corrStatGGSZDKPi,ggsz_DKPi_x_stat_err);
//TMatrixDSym 
covSystGGSZDKPi = buildCov(corrSystGGSZDKPi,ggsz_DKPi_x_syst_err);
//TMatrixDSym 
covGGSZDKPi     = covStatGGSZDKPi + covSystGGSZDKPi;
//TMatrixDSym 
corGGSZDKPi     = buildCor(covGGSZDKPi);


