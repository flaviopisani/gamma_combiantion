// ogni classe corrisponde ad un tipo di misura
#include <measures_classes.h>



void Ggsz :: assign_from_json () {

	std::ifstream ifs("global_variable.json");
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



void assign_from_classes () {

	//ggsz
	ggsz ggsz_paper;
	ggsz_paper.assign_from_json();

	x_plus = ggsz_paper.get_x_plus_class();
	x_minus = ggsz_paper.get_x_minus_class();
	y_plus = ggsz_paper.get_y_plus_class();
	y_minus = ggsz_paper.get_y_minus_class();

	x_plus_stat_err = ggsz_paper.get_x_plus_stat_err_class();
	x_minus_stat_err = ggsz_paper.get_x_minus_stat_err_class();
	y_plus_stat_err = ggsz_paper.get_y_plus_stat_err_class();
	y_minus_stat_err = ggsz_paper.get_y_minus_stat_err_class();

	x_plus_syst_err = ggsz_paper.get_x_plus_syst_err_class();
	x_minus_syst_err = ggsz_paper.get_x_minus_syst_err_class();
	y_plus_syst_err = ggsz_paper.get_y_plus_syst_err_class();
	y_minus_syst_err = ggsz_paper.get_y_minus_syst_err_class();

	double* pointer_to_matrix_stat;
	double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = ggsz_paper.get_corrStatGGSZ_class();
	pointer_to_matrix_syst = ggsz_paper.get_corrSystGGSZ_class();

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrStatGGSZ(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrSystGGSZ(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}

}
