

// ogni classe corrisponde ad un tipo di misura
#include <fstream>
#include <jsoncpp/json/json.h>
#include <measures_classes.h>
using namespace std;




void ggsz :: assign_from_json () {

	ifstream ifs("global_variable.json");
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

