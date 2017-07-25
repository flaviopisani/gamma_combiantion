//TVectorD GABDKstarp_x_stat_err(7);
GABDKstarp_x_stat_err(0) = a_fav_DKstarp_KPi_stat;
GABDKstarp_x_stat_err(1) = a_CP_DKstarp_KK_stat;
GABDKstarp_x_stat_err(2) = a_CP_DKstarp_PiPi_stat;
GABDKstarp_x_stat_err(3) = r_CP_DKstarp_KK_stat;
GABDKstarp_x_stat_err(4) = r_CP_DKstarp_PiPi_stat;
GABDKstarp_x_stat_err(5) = r_plus_DKstarp_KPi_stat;
GABDKstarp_x_stat_err(6) = r_minus_DKstarp_KPi_stat;


//TVectorD GABDKstarp_x_syst_err(7);
GABDKstarp_x_syst_err(0) = a_fav_DKstarp_KPi_syst;
GABDKstarp_x_syst_err(1) = a_CP_DKstarp_KK_syst;
GABDKstarp_x_syst_err(2) = a_CP_DKstarp_PiPi_syst;
GABDKstarp_x_syst_err(3) = r_CP_DKstarp_KK_syst;
GABDKstarp_x_syst_err(4) = r_CP_DKstarp_PiPi_syst;
GABDKstarp_x_syst_err(5) = r_plus_DKstarp_KPi_syst;
GABDKstarp_x_syst_err(6) = r_minus_DKstarp_KPi_syst;



//TVectorD GBDstarK_x_err(7);
GABDKstarp_x_err(0)                = sqrt( GABDKstarp_x_stat_err(0) * GABDKstarp_x_stat_err(0) + GABDKstarp_x_syst_err(0) * GABDKstarp_x_syst_err(0) );
GABDKstarp_x_err(1)                = sqrt( GABDKstarp_x_stat_err(1) * GABDKstarp_x_stat_err(1) + GABDKstarp_x_syst_err(1) * GABDKstarp_x_syst_err(1) );
GABDKstarp_x_err(2)                = sqrt( GABDKstarp_x_stat_err(2) * GABDKstarp_x_stat_err(2) + GABDKstarp_x_syst_err(2) * GABDKstarp_x_syst_err(2) );
GABDKstarp_x_err(3)                = sqrt( GABDKstarp_x_stat_err(3) * GABDKstarp_x_stat_err(3) + GABDKstarp_x_syst_err(3) * GABDKstarp_x_syst_err(3) );
GABDKstarp_x_err(4)                = sqrt( GABDKstarp_x_stat_err(4) * GABDKstarp_x_stat_err(4) + GABDKstarp_x_syst_err(4) * GABDKstarp_x_syst_err(4) );
GABDKstarp_x_err(5)                = sqrt( GABDKstarp_x_stat_err(5) * GABDKstarp_x_stat_err(5) + GABDKstarp_x_syst_err(5) * GABDKstarp_x_syst_err(5) );
GABDKstarp_x_err(6)                = sqrt( GABDKstarp_x_stat_err(6) * GABDKstarp_x_stat_err(6) + GABDKstarp_x_syst_err(6) * GABDKstarp_x_syst_err(6) );


//TMatrixDSym 
covStatGABDKstarp = buildCov(corStatGABDKstarp,GABDKstarp_x_stat_err);
//TMatrixDSym 
covSystGABDKstarp = buildCov(corSystGABDKstarp,GABDKstarp_x_syst_err);
//TMatrixDSym 
covGABDKstarp     = covStatGABDKstarp + covSystGABDKstarp;
//TMatrixDSym 
corGABDKstarp     = buildCor(covGABDKstarp);
