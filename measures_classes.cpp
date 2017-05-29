// ogni classe corrisponde ad un tipo di misura
#include <measures_classes.h>




void ggsz :: assign_from_json () {

	ifstream ifs("global_variable.json");
	Json::Reader reader;
	Json::Value obj;
	reader.parse(ifs,obj);

	x_plus = obj["ggsz"]["ggsz_paper_0"]["X+"]["value"].asDouble();
	x_minus = obj["ggsz"]["ggsz_paper_0"]["X-"]["value"].asDouble();
	y_plus = obj["ggsz"]["ggsz_paper_0"]["Y+"]["value"].asDouble();
	y_minus = obj["ggsz"]["ggsz_paper_0"]["Y-"]["value"].asDouble();

	x_plus_stat_err = obj["ggsz"]["ggsz_paper_0"]["X+"]["stat"].asDouble();
	x_minus_stat_err = obj["ggsz"]["ggsz_paper_0"]["X-"]["stat"].asDouble();
	y_plus_stat_err = obj["ggsz"]["ggsz_paper_0"]["Y+"]["stat"].asDouble();
	y_minus_stat_err = obj["ggsz"]["ggsz_paper_0"]["Y-"]["stat"].asDouble();

	x_plus_syst_err = obj["ggsz"]["ggsz_paper_0"]["X+"]["sys"].asDouble();
	x_minus_syst_err = obj["ggsz"]["ggsz_paper_0"]["X-"]["sys"].asDouble();
	y_plus_syst_err = obj["ggsz"]["ggsz_paper_0"]["Y+"]["sys"].asDouble();	
	y_minus_syst_err = obj["ggsz"]["ggsz_paper_0"]["Y-"]["sys"].asDouble();
	
	element=0;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrStatGGSZ(i,j) = obj["ggsz"]["ggsz_paper_0"]["corr_Stat_paper_0"][element].asDouble();
			element++;
		}
	}

	element=0;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrSystGGSZ(i,j) = obj["ggsz"]["ggsz_paper_0"]["corr_Sys_paper_0"][element].asDouble();
			element++;
		}
	}


}

