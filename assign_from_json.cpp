
//funzione che assegna ai TVectors relativi ad ogni tipo di misura i valori del paper

void assign_from_json () {

	ifstream ifs("global_variable.json");

	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs, obj)

	// GAhh

	double a_ADS_K_KPi = obj["GAhh"]["GAhh_paper_0"]["a_ADS_K_KPi"]["value"].asDouble();
	double a_CP_DK_KK        = 0.08658; // A_CP^{DK,KPi}
	double a_CP_DK_PiPi      = 0.12760; // A_CP^{DK,PiPi}
	double a_fav_DK_KPi      = -0.01944; // A_{fav}^{DK,KPi}
	double r_ADS_K_KPi       = 0.01876; // R_{ADS}^{KPi}
	double r_CP_KK           = 0.96834; // R_{CP}^{KK}	
	double r_CP_PiPi         = 1.00220; // R_{CP}^{PiPi}

	double a_ADS_K_KPi_stat_err   = 0.05620;
	double a_CP_DK_KK_stat_err    = 0.02020;
	double a_CP_DK_PiPi_stat_err  = 0.03690;
	double a_fav_DK_KPi_stat_err = 0.00718;
	double r_ADS_K_KPi_stat_err   = 0.00114;
	double r_CP_KK_stat_err      = 0.02170;
	double r_CP_PiPi_stat_err    = 0.04000;

	double a_ADS_K_KPi_syst_err    = 0.01060;
	double a_CP_DK_KK_syst_err     = 0.00810;
	double a_CP_DK_PiPi_syst_err   = 0.01200;
	double a_fav_DK_KPi_syst_err   = 0.00600;
	double r_ADS_K_KPi_syst_err    = 0.00100;
	double r_CP_KK_syst_err        = 0.02100;
	double r_CP_PiPi_syst_err      = 0.02600;














return 0;
}
