
//TVectorD GBDstarKp_x_stat_err(6);
GBDstarKp_x_stat_err(0) = a_fav_D_gamma_stat;
GBDstarKp_x_stat_err(1) = a_fav_D_Pi0_stat;
GBDstarKp_x_stat_err(2) = a_CP_D_gamma_stat;
GBDstarKp_x_stat_err(3) = a_CP_D_Pi0_stat;
GBDstarKp_x_stat_err(4) = r_CP_D_gamma_stat;
GBDstarKp_x_stat_err(5) = r_CP_D_Pi0_stat;


//TVectorD GBDstarKp_x_syst_err(6);
GBDstarKp_x_syst_err(0) = a_fav_D_gamma_syst;
GBDstarKp_x_syst_err(1) = a_fav_D_Pi0_syst;
GBDstarKp_x_syst_err(2) = a_CP_D_gamma_syst;
GBDstarKp_x_syst_err(3) = a_CP_D_Pi0_syst;
GBDstarKp_x_syst_err(4) = r_CP_D_gamma_syst;
GBDstarKp_x_syst_err(5) = r_CP_D_Pi0_syst;



//TVectorD GBDstarK_x_err(7);
GBDstarKp_x_err(0)                = sqrt( GBDstarKp_x_stat_err(0) * GBDstarKp_x_stat_err(0) + GBDstarKp_x_syst_err(0) * GBDstarKp_x_syst_err(0) );
GBDstarKp_x_err(1)                = sqrt( GBDstarKp_x_stat_err(1) * GBDstarKp_x_stat_err(1) + GBDstarKp_x_syst_err(1) * GBDstarKp_x_syst_err(1) );
GBDstarKp_x_err(2)                = sqrt( GBDstarKp_x_stat_err(2) * GBDstarKp_x_stat_err(2) + GBDstarKp_x_syst_err(2) * GBDstarKp_x_syst_err(2) );
GBDstarKp_x_err(3)                = sqrt( GBDstarKp_x_stat_err(3) * GBDstarKp_x_stat_err(3) + GBDstarKp_x_syst_err(3) * GBDstarKp_x_syst_err(3) );
GBDstarKp_x_err(4)                = sqrt( GBDstarKp_x_stat_err(4) * GBDstarKp_x_stat_err(4) + GBDstarKp_x_syst_err(4) * GBDstarKp_x_syst_err(4) );
GBDstarKp_x_err(5)                = sqrt( GBDstarKp_x_stat_err(5) * GBDstarKp_x_stat_err(5) + GBDstarKp_x_syst_err(5) * GBDstarKp_x_syst_err(5) );
GBDstarKp_x_err(6)                = sqrt( GBDstarKp_x_stat_err(6) * GBDstarKp_x_stat_err(6) + GBDstarKp_x_syst_err(6) * GBDstarKp_x_syst_err(6) );



//TMatrixDSym 
covStatGBDstarKp = buildCov(corStatGBDstarKp,GBDstarKp_x_stat_err);
//TMatrixDSym 
covSystGBDstarKp = buildCov(corSystGBDstarKp,GBDstarKp_x_syst_err);
//TMatrixDSym 
covGBDstarKp     = covStatGBDstarKp + covSystGBDstarKp;
//TMatrixDSym 
corGBDstarKp     = buildCor(covGBDstarKp);


/*  LocalWords:  TMatrixDSym
 */
