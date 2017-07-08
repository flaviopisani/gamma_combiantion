// ogni classe corrisponde ad un tipo di misura
#include <measures_classes.h>



void Gahh :: assign_from_json (char* json_file) {

	std::ifstream ifs(json_file);
	if (ifs) {
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	a1 = obj["GAhh"]["GAhh_paper_0"]["a_ADS_K_KPi"]["value"].asDouble();
	a2 = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_KK"]["value"].asDouble();
	a3 = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_PiPi"]["value"].asDouble();
	a4 = obj["GAhh"]["GAhh_paper_0"]["a_fav_DK_KPi"]["value"].asDouble();
	r1 = obj["GAhh"]["GAhh_paper_0"]["r_ADS_K_KPi"]["value"].asDouble();
	r2 = obj["GAhh"]["GAhh_paper_0"]["r_CP_KK"]["value"].asDouble();
	r3 = obj["GAhh"]["GAhh_paper_0"]["r_CP_PiPi"]["value"].asDouble();

	a1_st = obj["GAhh"]["GAhh_paper_0"]["a_ADS_K_KPi"]["stat"].asDouble();
	a2_st = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_KK"]["stat"].asDouble();
	a3_st = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_PiPi"]["stat"].asDouble();
	a4_st = obj["GAhh"]["GAhh_paper_0"]["a_fav_DK_KPi"]["stat"].asDouble();
	r1_st = obj["GAhh"]["GAhh_paper_0"]["r_ADS_K_KPi"]["stat"].asDouble();
	r2_st = obj["GAhh"]["GAhh_paper_0"]["r_CP_KK"]["stat"].asDouble();
	r3_st = obj["GAhh"]["GAhh_paper_0"]["r_CP_PiPi"]["stat"].asDouble();

	a1_sy = obj["GAhh"]["GAhh_paper_0"]["a_ADS_K_KPi"]["sys"].asDouble();
	a2_sy = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_KK"]["sys"].asDouble();
	a3_sy = obj["GAhh"]["GAhh_paper_0"]["a_CP_DK_PiPi"]["sys"].asDouble();
	a4_sy = obj["GAhh"]["GAhh_paper_0"]["a_fav_DK_KPi"]["sys"].asDouble();
	r1_sy = obj["GAhh"]["GAhh_paper_0"]["r_ADS_K_KPi"]["sys"].asDouble();
	r2_sy = obj["GAhh"]["GAhh_paper_0"]["r_CP_KK"]["sys"].asDouble();
	r3_sy = obj["GAhh"]["GAhh_paper_0"]["r_CP_PiPi"]["sys"].asDouble();


	
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

	x_plus_class = obj["ggsz"]["ggsz_paper_0"]["X+"]["value"].asDouble();
	x_minus_class = obj["ggsz"]["ggsz_paper_0"]["X-"]["value"].asDouble();
	y_plus_class = obj["ggsz"]["ggsz_paper_0"]["Y+"]["value"].asDouble();
	y_minus_class = obj["ggsz"]["ggsz_paper_0"]["Y-"]["value"].asDouble();

	x_plus_stat_err_class = obj["ggsz"]["ggsz_paper_0"]["X+"]["stat"].asDouble();
	x_minus_stat_err_class = obj["ggsz"]["ggsz_paper_0"]["X-"]["stat"].asDouble();
	y_plus_stat_err_class = obj["ggsz"]["ggsz_paper_0"]["Y+"]["stat"].asDouble();
	y_minus_stat_err_class = obj["ggsz"]["ggsz_paper_0"]["Y-"]["stat"].asDouble();

	x_plus_syst_err_class = obj["ggsz"]["ggsz_paper_0"]["X+"]["sys"].asDouble();
	x_minus_syst_err_class = obj["ggsz"]["ggsz_paper_0"]["X-"]["sys"].asDouble();
	y_plus_syst_err_class = obj["ggsz"]["ggsz_paper_0"]["Y+"]["sys"].asDouble();	
	y_minus_syst_err_class = obj["ggsz"]["ggsz_paper_0"]["Y-"]["sys"].asDouble();
	
	for (int element=0; element<16;element++) {
			corrStatGGSZ_class[element] = obj["ggsz"]["ggsz_paper_0"]["corr_Stat_paper_0"][element].asDouble();
		}

	for (int element=0; element<16;element++) {
			corrSystGGSZ_class[element] = obj["ggsz"]["ggsz_paper_0"]["corr_Sys_paper_0"][element].asDouble();
		}
	}

	else {exit(EXIT_FAILURE);}

}




