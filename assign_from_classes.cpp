#include <assign_from_classes.h>

void assign_from_classes (char* json_file) {

	//ggsz
	Ggsz ggsz_paper;
	ggsz_paper.assign_from_json(json_file);

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


cout << x_plus << endl;
cout << x_minus << endl;
cout << y_plus << endl;
cout << y_minus << endl;
cout << x_plus_stat_err << endl;
cout << x_minus_stat_err << endl;
cout << y_plus_stat_err << endl;
cout << y_minus_stat_err << endl;
cout << x_plus_syst_err << endl;
cout << x_minus_syst_err << endl;
cout << y_plus_syst_err << endl;
cout << y_minus_syst_err << endl;

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			cout << corrStatGGSZ(i,j) << endl;
			
		}
	}

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			cout << corrSystGGSZ(i,j) << endl;
			
		}
	}



}

