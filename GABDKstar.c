GABDKstar_x_stat_err(0)                = a_fav_DKstar0_KPi_stat_err;
GABDKstar_x_stat_err(1)                = r_plus_DKstar0_KPi_stat_err;
GABDKstar_x_stat_err(2)                = r_minus_DKstar0_KPi_stat_err;

GABDKstar_x_syst_err(0)                = a_fav_DKstar0_KPi_syst_err;
GABDKstar_x_syst_err(1)                = r_plus_DKstar0_KPi_syst_err;
GABDKstar_x_syst_err(2)                = r_minus_DKstar0_KPi_syst_err;

GABDKstar_x_err(0)                = sqrt( GABDKstar_x_stat_err(0) * GABDKstar_x_stat_err(0) + GABDKstar_x_syst_err(0) * GABDKstar_x_syst_err(0) );
GABDKstar_x_err(1)                = sqrt( GABDKstar_x_stat_err(1) * GABDKstar_x_stat_err(1) + GABDKstar_x_syst_err(1) * GABDKstar_x_syst_err(1) );
GABDKstar_x_err(2)                = sqrt( GABDKstar_x_stat_err(2) * GABDKstar_x_stat_err(2) + GABDKstar_x_syst_err(2) * GABDKstar_x_syst_err(2) );


corStatGABDKstar(0,0)=1.0;      corStatGABDKstar(1,0)=0.091; corStatGABDKstar(2,0)=0.083;
corStatGABDKstar(0,1)=0.091;    corStatGABDKstar(1,1)=1.0;   corStatGABDKstar(2,1)=-0.081;
corStatGABDKstar(0,2)=-0.083;   corStatGABDKstar(1,2)=-0.081; corStatGABDKstar(2,2)=1.0;


corSystGABDKstar(0,0)=1.0;      corSystGABDKstar(1,0)=0.008; corSystGABDKstar(2,0)=0.008;
corSystGABDKstar(0,1)=0.008;    corSystGABDKstar(1,1)=1.0;   corSystGABDKstar(2,1)=0.997;
corSystGABDKstar(0,2)=0.008;    corSystGABDKstar(1,2)=0.997; corSystGABDKstar(2,2)=1.0;




//TMatrixDSym 
covStatGABDKstar = buildCov(corStatGABDKstar,GABDKstar_x_stat_err);
//TMatrixDSym 
covSystGABDKstar = buildCov(corSystGABDKstar,GABDKstar_x_syst_err);
//TMatrixDSym 
covGABDKstar     = covStatGABDKstar + covSystGABDKstar;
//TMatrixDSym 
corGABDKstar     = buildCor(covGABDKstar);
