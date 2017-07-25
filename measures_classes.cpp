// ogni classe corrisponde ad un tipo di misura
#include <measures_classes.h>



void Gahh :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["GAhh"]["GAhh_paper_0"]["a_ADS_K_KPi"]["value"].asDouble();
	v2 = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_KK"]["value"].asDouble();
	v3 = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_PiPi"]["value"].asDouble();
	v4 = obj["GAhh"]["GAhh_paper_0"]["a_fav_DK_KPi"]["value"].asDouble();
	v5 = obj["GAhh"]["GAhh_paper_0"]["r_ADS_K_KPi"]["value"].asDouble();
	v6 = obj["GAhh"]["GAhh_paper_0"]["r_CP_KK"]["value"].asDouble();
	v7 = obj["GAhh"]["GAhh_paper_0"]["r_CP_PiPi"]["value"].asDouble();

	v1_st = obj["GAhh"]["GAhh_paper_0"]["a_ADS_K_KPi"]["stat"].asDouble();
	v2_st = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_KK"]["stat"].asDouble();
	v3_st = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_PiPi"]["stat"].asDouble();
	v4_st = obj["GAhh"]["GAhh_paper_0"]["a_fav_DK_KPi"]["stat"].asDouble();
	v5_st = obj["GAhh"]["GAhh_paper_0"]["r_ADS_K_KPi"]["stat"].asDouble();
	v6_st = obj["GAhh"]["GAhh_paper_0"]["r_CP_KK"]["stat"].asDouble();
	v7_st = obj["GAhh"]["GAhh_paper_0"]["r_CP_PiPi"]["stat"].asDouble();

	v1_sy = obj["GAhh"]["GAhh_paper_0"]["a_ADS_K_KPi"]["sys"].asDouble();
	v2_sy = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_KK"]["sys"].asDouble();
	v3_sy = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_PiPi"]["sys"].asDouble();
	v4_sy = obj["GAhh"]["GAhh_paper_0"]["a_fav_DK_KPi"]["sys"].asDouble();
	v5_sy = obj["GAhh"]["GAhh_paper_0"]["r_ADS_K_KPi"]["sys"].asDouble();
	v6_sy = obj["GAhh"]["GAhh_paper_0"]["r_CP_KK"]["sys"].asDouble();
	v7_sy = obj["GAhh"]["GAhh_paper_0"]["r_CP_PiPi"]["sys"].asDouble();


	
	for (int element=0; element<49;element++) {
			corrStat[element] = obj["GAhh"]["GAhh_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<49;element++) {
			corrSyst[element] = obj["GAhh"]["GAhh_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}



void Ggsz :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["ggsz"]["ggsz_paper_0"]["X+"]["value"].asDouble();
	v2 = obj["ggsz"]["ggsz_paper_0"]["X-"]["value"].asDouble();
	v3 = obj["ggsz"]["ggsz_paper_0"]["Y+"]["value"].asDouble();
	v4 = obj["ggsz"]["ggsz_paper_0"]["Y-"]["value"].asDouble();

	v1_st = obj["ggsz"]["ggsz_paper_0"]["X+"]["stat"].asDouble();
	v2_st = obj["ggsz"]["ggsz_paper_0"]["X-"]["stat"].asDouble();
	v3_st = obj["ggsz"]["ggsz_paper_0"]["Y+"]["stat"].asDouble();
	v4_st = obj["ggsz"]["ggsz_paper_0"]["Y-"]["stat"].asDouble();

	v1_sy = obj["ggsz"]["ggsz_paper_0"]["X+"]["sys"].asDouble();
	v2_sy = obj["ggsz"]["ggsz_paper_0"]["X-"]["sys"].asDouble();
	v3_sy = obj["ggsz"]["ggsz_paper_0"]["Y+"]["sys"].asDouble();	
	v4_sy = obj["ggsz"]["ggsz_paper_0"]["Y-"]["sys"].asDouble();
	
	for (int element=0; element<16;element++) {
			corrStat[element] = obj["ggsz"]["ggsz_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<16;element++) {
			corrSyst[element] = obj["ggsz"]["ggsz_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}


void Gahhhh :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["GAhhhh"]["GAhhhh_paper_0"]["a_ADS_K_K3Pi"]["value"].asDouble();
	v2 = obj["GAhhhh"]["GAhhhh_paper_0"]["a_CP_DK_4Pi"]["value"].asDouble();
	v3 = obj["GAhhhh"]["GAhhhh_paper_0"]["a_fav_DK_K3Pi"]["value"].asDouble();
	v4 = obj["GAhhhh"]["GAhhhh_paper_0"]["r_ADS_K_K3Pi"]["value"].asDouble();
	v5 = obj["GAhhhh"]["GAhhhh_paper_0"]["r_CP_4Pi"]["value"].asDouble();

	v1_st = obj["GAhhhh"]["GAhhhh_paper_0"]["a_ADS_K_K3Pi"]["stat"].asDouble();
	v2_st = obj["GAhhhh"]["GAhhhh_paper_0"]["a_CP_DK_4Pi"]["stat"].asDouble();
	v3_st = obj["GAhhhh"]["GAhhhh_paper_0"]["a_fav_DK_K3Pi"]["stat"].asDouble();
	v4_st = obj["GAhhhh"]["GAhhhh_paper_0"]["r_ADS_K_K3Pi"]["stat"].asDouble();
	v5_st = obj["GAhhhh"]["GAhhhh_paper_0"]["r_CP_4Pi"]["stat"].asDouble();

	v1_sy = obj["GAhhhh"]["GAhhhh_paper_0"]["a_ADS_K_K3Pi"]["sys"].asDouble();
	v2_sy = obj["GAhhhh"]["GAhhhh_paper_0"]["a_CP_DK_4Pi"]["sys"].asDouble();
	v3_sy = obj["GAhhhh"]["GAhhhh_paper_0"]["a_fav_DK_K3Pi"]["sys"].asDouble();
	v4_sy = obj["GAhhhh"]["GAhhhh_paper_0"]["r_ADS_K_K3Pi"]["sys"].asDouble();
	v5_sy = obj["GAhhhh"]["GAhhhh_paper_0"]["r_CP_4Pi"]["sys"].asDouble();


	
	for (int element=0; element<25;element++) {
			corrStat[element] = obj["GAhhhh"]["GAhhhh_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<25;element++) {
			corrSyst[element] = obj["GAhhhh"]["GAhhhh_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}



void Adhhpi0 :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_ADS_DK_KPiPi0"]["value"].asDouble();
	v2 = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_CP_DK_KKPi0"]["value"].asDouble();
	v3 = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_CP_DK_PiPiPi0"]["value"].asDouble();
	v4 = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_fav_DK_KPiPi0"]["value"].asDouble();
	v5 = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_ADS_DK_KPiPi0"]["value"].asDouble();
	v6 = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_CP_KKPi0"]["value"].asDouble();
	v7 = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_CP_PiPiPi0"]["value"].asDouble();

	v1_st = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_ADS_DK_KPiPi0"]["stat"].asDouble();
	v2_st = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_CP_DK_KKPi0"]["stat"].asDouble();
	v3_st = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_CP_DK_PiPiPi0"]["stat"].asDouble();
	v4_st = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_fav_DK_KPiPi0"]["stat"].asDouble();
	v5_st = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_ADS_DK_KPiPi0"]["stat"].asDouble();
	v6_st = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_CP_KKPi0"]["stat"].asDouble();
	v7_st = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_CP_PiPiPi0"]["stat"].asDouble();

	v1_sy = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_ADS_DK_KPiPi0"]["sys"].asDouble();
	v2_sy = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_CP_DK_KKPi0"]["sys"].asDouble();
	v3_sy = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_CP_DK_PiPiPi0"]["sys"].asDouble();
	v4_sy = obj["ADhhPi0"]["ADhhPi0_paper_0"]["a_fav_DK_KPiPi0"]["sys"].asDouble();
	v5_sy = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_ADS_DK_KPiPi0"]["sys"].asDouble();
	v6_sy = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_CP_KKPi0"]["sys"].asDouble();
	v7_sy = obj["ADhhPi0"]["ADhhPi0_paper_0"]["r_CP_PiPiPi0"]["sys"].asDouble();


	
	for (int element=0; element<49;element++) {
			corrStat[element] = obj["ADhhPi0"]["ADhhPi0_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<49;element++) {
			corrSyst[element] = obj["ADhhPi0"]["ADhhPi0_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}


void Bsdsk :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["BsDsK"]["BsDsK_paper_0"]["C"]["value"].asDouble();
	v2 = obj["BsDsK"]["BsDsK_paper_0"]["D_bar_f"]["value"].asDouble();
	v3 = obj["BsDsK"]["BsDsK_paper_0"]["D_f"]["value"].asDouble();
	v4 = obj["BsDsK"]["BsDsK_paper_0"]["S_bar_f"]["value"].asDouble();
	v5 = obj["BsDsK"]["BsDsK_paper_0"]["S_f"]["value"].asDouble();

	v1_st = obj["BsDsK"]["BsDsK_paper_0"]["C"]["stat"].asDouble();
	v2_st = obj["BsDsK"]["BsDsK_paper_0"]["D_bar_f"]["stat"].asDouble();
	v3_st = obj["BsDsK"]["BsDsK_paper_0"]["D_f"]["stat"].asDouble();
	v4_st = obj["BsDsK"]["BsDsK_paper_0"]["S_bar_f"]["stat"].asDouble();
	v5_st = obj["BsDsK"]["BsDsK_paper_0"]["S_f"]["stat"].asDouble();

	v1_sy = obj["BsDsK"]["BsDsK_paper_0"]["C"]["sys"].asDouble();
	v2_sy = obj["BsDsK"]["BsDsK_paper_0"]["D_bar_f"]["sys"].asDouble();
	v3_sy = obj["BsDsK"]["BsDsK_paper_0"]["D_f"]["sys"].asDouble();
	v4_sy = obj["BsDsK"]["BsDsK_paper_0"]["S_bar_f"]["sys"].asDouble();
	v5_sy = obj["BsDsK"]["BsDsK_paper_0"]["S_f"]["sys"].asDouble();


	
	for (int element=0; element<25;element++) {
			corrStat[element] = obj["BsDsK"]["BsDsK_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<25;element++) {
			corrSyst[element] = obj["BsDsK"]["BsDsK_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}


void Ggszdkpi :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["ggszDKPi"]["ggszDKPi_paper_0"]["X+"]["value"].asDouble();
	v2 = obj["ggszDKPi"]["ggszDKPi_paper_0"]["X-"]["value"].asDouble();
	v3 = obj["ggszDKPi"]["ggszDKPi_paper_0"]["Y+"]["value"].asDouble();
	v4 = obj["ggszDKPi"]["ggszDKPi_paper_0"]["Y-"]["value"].asDouble();

	v1_st = obj["ggszDKPi"]["ggszDKPi_paper_0"]["X+"]["stat"].asDouble();
	v2_st = obj["ggszDKPi"]["ggszDKPi_paper_0"]["X-"]["stat"].asDouble();
	v3_st = obj["ggszDKPi"]["ggszDKPi_paper_0"]["Y+"]["stat"].asDouble();
	v4_st = obj["ggszDKPi"]["ggszDKPi_paper_0"]["Y-"]["stat"].asDouble();

	v1_sy = obj["ggszDKPi"]["ggszDKPi_paper_0"]["X+"]["sys"].asDouble();
	v2_sy = obj["ggszDKPi"]["ggszDKPi_paper_0"]["X-"]["sys"].asDouble();
	v3_sy = obj["ggszDKPi"]["ggszDKPi_paper_0"]["Y+"]["sys"].asDouble();	
	v4_sy = obj["ggszDKPi"]["ggszDKPi_paper_0"]["Y-"]["sys"].asDouble();
	
	for (int element=0; element<16;element++) {
			corrStat[element] = obj["ggszDKPi"]["ggszDKPi_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<16;element++) {
			corrSyst[element] = obj["ggszDKPi"]["ggszDKPi_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}

void Ggszdkstar0 :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["ggszDK*0"]["ggszDK*0_paper_0"]["X+"]["value"].asDouble();
	v2 = obj["ggszDK*0"]["ggszDK*0_paper_0"]["X-"]["value"].asDouble();
	v3 = obj["ggszDK*0"]["ggszDK*0_paper_0"]["Y+"]["value"].asDouble();
	v4 = obj["ggszDK*0"]["ggszDK*0_paper_0"]["Y-"]["value"].asDouble();

	v1_st = obj["ggszDK*0"]["ggszDK*0_paper_0"]["X+"]["stat"].asDouble();
	v2_st = obj["ggszDK*0"]["ggszDK*0_paper_0"]["X-"]["stat"].asDouble();
	v3_st = obj["ggszDK*0"]["ggszDK*0_paper_0"]["Y+"]["stat"].asDouble();
	v4_st = obj["ggszDK*0"]["ggszDK*0_paper_0"]["Y-"]["stat"].asDouble();

	v1_sy = obj["ggszDK*0"]["ggszDK*0_paper_0"]["X+"]["sys"].asDouble();
	v2_sy = obj["ggszDK*0"]["ggszDK*0_paper_0"]["X-"]["sys"].asDouble();
	v3_sy = obj["ggszDK*0"]["ggszDK*0_paper_0"]["Y+"]["sys"].asDouble();	
	v4_sy = obj["ggszDK*0"]["ggszDK*0_paper_0"]["Y-"]["sys"].asDouble();
	
	for (int element=0; element<16;element++) {
			corrStat[element] = obj["ggszDK*0"]["ggszDK*0_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<16;element++) {
			corrSyst[element] = obj["ggszDK*0"]["ggszDK*0_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}


void Gabdkstar :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["GABDK*"]["GABDK*_paper_0"]["a_fav_DK*0_KPi"]["value"].asDouble();
	v2 = obj["GABDK*"]["GABDK*_paper_0"]["r_plus_DK*0_KPi"]["value"].asDouble();
	v3 = obj["GABDK*"]["GABDK*_paper_0"]["r_minus_DK*0_KPi"]["value"].asDouble();

	v1_st = obj["GABDK*"]["GABDK*_paper_0"]["a_fav_DK*0_KPi"]["stat"].asDouble();
	v2_st = obj["GABDK*"]["GABDK*_paper_0"]["r_plus_DK*0_KPi"]["stat"].asDouble();
	v3_st = obj["GABDK*"]["GABDK*_paper_0"]["r_minus_DK*0_KPi"]["stat"].asDouble();

	v1_sy = obj["GABDK*"]["GABDK*_paper_0"]["a_fav_DK*0_KPi"]["sys"].asDouble();
	v2_sy = obj["GABDK*"]["GABDK*_paper_0"]["r_plus_DK*0_KPi"]["sys"].asDouble();
	v3_sy = obj["GABDK*"]["GABDK*_paper_0"]["r_minus_DK*0_KPi"]["sys"].asDouble();	
	
	for (int element=0; element<9;element++) {
			corrStat[element] = obj["GABDK*"]["GABDK*_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<9;element++) {
			corrSyst[element] = obj["GABDK*"]["GABDK*_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}



void Gbdstarkp :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["GBD*K+"]["GBD*K+_paper_0"]["a_fav_D_gamma"]["value"].asDouble();
	v2 = obj["GBD*K+"]["GBD*K+_paper_0"]["a_fav_D_Pi0"]["value"].asDouble();
	v3 = obj["GBD*K+"]["GBD*K+_paper_0"]["a_CP_D_gamma"]["value"].asDouble();
	v4 = obj["GBD*K+"]["GBD*K+_paper_0"]["a_CP_D_Pi0"]["value"].asDouble();
	v5 = obj["GBD*K+"]["GBD*K+_paper_0"]["r_CP_D_gamma"]["value"].asDouble();
	v6 = obj["GBD*K+"]["GBD*K+_paper_0"]["r_CP_D_Pi0"]["value"].asDouble();

	v1_st = obj["GBD*K+"]["GBD*K+_paper_0"]["a_fav_D_gamma"]["stat"].asDouble();
	v2_st = obj["GBD*K+"]["GBD*K+_paper_0"]["a_fav_D_Pi0"]["stat"].asDouble();
	v3_st = obj["GBD*K+"]["GBD*K+_paper_0"]["a_CP_D_gamma"]["stat"].asDouble();
	v4_st = obj["GBD*K+"]["GBD*K+_paper_0"]["a_CP_D_Pi0"]["stat"].asDouble();
	v5_st = obj["GBD*K+"]["GBD*K+_paper_0"]["r_CP_D_gamma"]["stat"].asDouble();
	v6_st = obj["GBD*K+"]["GBD*K+_paper_0"]["r_CP_D_Pi0"]["stat"].asDouble();

	v1_sy = obj["GBD*K+"]["GBD*K+_paper_0"]["a_fav_D_gamma"]["sys"].asDouble();
	v2_sy = obj["GBD*K+"]["GBD*K+_paper_0"]["a_fav_D_Pi0"]["sys"].asDouble();
	v3_sy = obj["GBD*K+"]["GBD*K+_paper_0"]["a_CP_D_gamma"]["sys"].asDouble();
	v4_sy = obj["GBD*K+"]["GBD*K+_paper_0"]["a_CP_D_Pi0"]["sys"].asDouble();
	v5_sy = obj["GBD*K+"]["GBD*K+_paper_0"]["r_CP_D_gamma"]["sys"].asDouble();
	v6_sy = obj["GBD*K+"]["GBD*K+_paper_0"]["r_CP_D_Pi0"]["sys"].asDouble();


	
	for (int element=0; element<36;element++) {
			corrStat[element] = obj["GBD*K+"]["GBD*K+_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<36;element++) {
			corrSyst[element] = obj["GBD*K+"]["GBD*K+_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}




void Gabdkstarp :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	v1 = obj["GABDK*+"]["GABDK*+_paper_0"]["a_fav_DKstarp_KPi"]["value"].asDouble();
	v2 = obj["GABDK*+"]["GABDK*+_paper_0"]["a_CP_DKstarp_KK"]["value"].asDouble();
	v3 = obj["GABDK*+"]["GABDK*+_paper_0"]["a_CP_DKstarp_PiPi"]["value"].asDouble();
	v4 = obj["GABDK*+"]["GABDK*+_paper_0"]["r_CP_DKstarp_KK"]["value"].asDouble();
	v5 = obj["GABDK*+"]["GABDK*+_paper_0"]["r_CP_DKstarp_PiPi"]["value"].asDouble();
	v6 = obj["GABDK*+"]["GABDK*+_paper_0"]["r_plus_DKstarp_KPi"]["value"].asDouble();
	v7 = obj["GABDK*+"]["GABDK*+_paper_0"]["r_minus_DKstarp_KPi"]["value"].asDouble();

	v1_st = obj["GABDK*+"]["GABDK*+_paper_0"]["a_fav_DKstarp_KPi"]["stat"].asDouble();
	v2_st = obj["GABDK*+"]["GABDK*+_paper_0"]["a_CP_DKstarp_KK"]["stat"].asDouble();
	v3_st = obj["GABDK*+"]["GABDK*+_paper_0"]["a_CP_DKstarp_PiPi"]["stat"].asDouble();
	v4_st = obj["GABDK*+"]["GABDK*+_paper_0"]["r_CP_DKstarp_KK"]["stat"].asDouble();
	v5_st = obj["GABDK*+"]["GABDK*+_paper_0"]["r_CP_DKstarp_PiPi"]["stat"].asDouble();
	v6_st = obj["GABDK*+"]["GABDK*+_paper_0"]["r_plus_DKstarp_KPi"]["stat"].asDouble();
	v7_st = obj["GABDK*+"]["GABDK*+_paper_0"]["r_minus_DKstarp_KPi"]["stat"].asDouble();

	v1_sy = obj["GABDK*+"]["GABDK*+_paper_0"]["a_fav_DKstarp_KPi"]["sys"].asDouble();
	v2_sy = obj["GABDK*+"]["GABDK*+_paper_0"]["a_CP_DKstarp_KK"]["sys"].asDouble();
	v3_sy = obj["GABDK*+"]["GABDK*+_paper_0"]["a_CP_DKstarp_PiPi"]["sys"].asDouble();
	v4_sy = obj["GABDK*+"]["GABDK*+_paper_0"]["r_CP_DKstarp_KK"]["sys"].asDouble();
	v5_sy = obj["GABDK*+"]["GABDK*+_paper_0"]["r_CP_DKstarp_PiPi"]["sys"].asDouble();
	v6_sy = obj["GABDK*+"]["GABDK*+_paper_0"]["r_plus_DKstarp_KPi"]["sys"].asDouble();
	v7_sy = obj["GABDK*+"]["GABDK*+_paper_0"]["r_minus_DKstarp_KPi"]["sys"].asDouble();


	
	for (int element=0; element<49;element++) {
			corrStat[element] = obj["GABDK*+"]["GABDK*+_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<49;element++) {
			corrSyst[element] = obj["GABDK*+"]["GABDK*+_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}





