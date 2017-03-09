GAKPiPiDhh_x_stat_err(0)                = r_CP_DKPiPi_stat_err;
GAKPiPiDhh_x_stat_err(1)                = a_fav_DKPiPi_KPi_stat_err;
GAKPiPiDhh_x_stat_err(2)                = a_fav_DPiPiPi_KPi_stat_err;
GAKPiPiDhh_x_stat_err(3)                = a_CP_DKPiPi_KK_stat_err;
GAKPiPiDhh_x_stat_err(4)                = a_CP_DKPiPi_PiPi_stat_err;
GAKPiPiDhh_x_stat_err(5)                = a_CP_DPiPiPi_KK_stat_err;
GAKPiPiDhh_x_stat_err(6)                = a_CP_DPiPiPi_PiPi_stat_err;
GAKPiPiDhh_x_stat_err(7)                = r_plus_DKPiPi_KPi_stat_err;
GAKPiPiDhh_x_stat_err(8)                = r_minus_DKPiPi_KPi_stat_err;
GAKPiPiDhh_x_stat_err(9)                = r_plus_DPiPiPi_KPi_stat_err;
GAKPiPiDhh_x_stat_err(10)                = r_minus_DPiPiPi_KPi_stat_err;

//TVectorD GAKPiPiDhh_x_syst_err(6);
GAKPiPiDhh_x_syst_err(0)                = r_CP_DKPiPi_syst_err;
GAKPiPiDhh_x_syst_err(1)                = a_fav_DKPiPi_KPi_syst_err;
GAKPiPiDhh_x_syst_err(2)                = a_fav_DPiPiPi_KPi_syst_err;
GAKPiPiDhh_x_syst_err(3)                = a_CP_DKPiPi_KK_syst_err;
GAKPiPiDhh_x_syst_err(4)                = a_CP_DKPiPi_PiPi_syst_err;
GAKPiPiDhh_x_syst_err(5)                = a_CP_DPiPiPi_KK_syst_err;
GAKPiPiDhh_x_syst_err(6)                = a_CP_DPiPiPi_PiPi_syst_err;
GAKPiPiDhh_x_syst_err(7)                = r_plus_DKPiPi_KPi_syst_err;
GAKPiPiDhh_x_syst_err(8)                = r_minus_DKPiPi_KPi_syst_err;
GAKPiPiDhh_x_syst_err(9)                = r_plus_DPiPiPi_KPi_syst_err;
GAKPiPiDhh_x_syst_err(10)               = r_minus_DPiPiPi_KPi_syst_err;


//TVectorD GAKPiPiDhh_x_err(6);
GAKPiPiDhh_x_err(0)                = sqrt( GAKPiPiDhh_x_stat_err(0) * GAKPiPiDhh_x_stat_err(0) + GAKPiPiDhh_x_syst_err(0) * GAKPiPiDhh_x_syst_err(0) );
GAKPiPiDhh_x_err(1)                = sqrt( GAKPiPiDhh_x_stat_err(1) * GAKPiPiDhh_x_stat_err(1) + GAKPiPiDhh_x_syst_err(1) * GAKPiPiDhh_x_syst_err(1) );
GAKPiPiDhh_x_err(2)                = sqrt( GAKPiPiDhh_x_stat_err(2) * GAKPiPiDhh_x_stat_err(2) + GAKPiPiDhh_x_syst_err(2) * GAKPiPiDhh_x_syst_err(2) );
GAKPiPiDhh_x_err(3)                = sqrt( GAKPiPiDhh_x_stat_err(3) * GAKPiPiDhh_x_stat_err(3) + GAKPiPiDhh_x_syst_err(3) * GAKPiPiDhh_x_syst_err(3) );
GAKPiPiDhh_x_err(4)                = sqrt( GAKPiPiDhh_x_stat_err(4) * GAKPiPiDhh_x_stat_err(4) + GAKPiPiDhh_x_syst_err(4) * GAKPiPiDhh_x_syst_err(4) );
GAKPiPiDhh_x_err(5)                = sqrt( GAKPiPiDhh_x_stat_err(5) * GAKPiPiDhh_x_stat_err(5) + GAKPiPiDhh_x_syst_err(5) * GAKPiPiDhh_x_syst_err(5) );
GAKPiPiDhh_x_err(6)                = sqrt( GAKPiPiDhh_x_stat_err(6) * GAKPiPiDhh_x_stat_err(6) + GAKPiPiDhh_x_syst_err(6) * GAKPiPiDhh_x_syst_err(6) );
GAKPiPiDhh_x_err(7)                = sqrt( GAKPiPiDhh_x_stat_err(7) * GAKPiPiDhh_x_stat_err(7) + GAKPiPiDhh_x_syst_err(7) * GAKPiPiDhh_x_syst_err(7) );
GAKPiPiDhh_x_err(8)                = sqrt( GAKPiPiDhh_x_stat_err(8) * GAKPiPiDhh_x_stat_err(8) + GAKPiPiDhh_x_syst_err(8) * GAKPiPiDhh_x_syst_err(8) );
GAKPiPiDhh_x_err(9)                = sqrt( GAKPiPiDhh_x_stat_err(9) * GAKPiPiDhh_x_stat_err(9) + GAKPiPiDhh_x_syst_err(9) * GAKPiPiDhh_x_syst_err(9) );
GAKPiPiDhh_x_err(10)               = sqrt( GAKPiPiDhh_x_stat_err(10) * GAKPiPiDhh_x_stat_err(10) + GAKPiPiDhh_x_syst_err(10) * GAKPiPiDhh_x_syst_err(10));

