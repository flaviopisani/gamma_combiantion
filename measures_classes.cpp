// ogni classe corrisponde ad un tipo di misura
#include <measures_classes.h>



void Gahh :: assign_from_json_gahh (char* json_file) {

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






