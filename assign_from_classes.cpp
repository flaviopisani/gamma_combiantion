#include <assign_from_classes.h>

void assign_from_classes (char* json_file) {


	//GAhh
	Gahh gahh_paper;
	gahh_paper.assign_from_json(json_file);

	a_ADS_K_KPi = gahh_paper.get_v1();
	a_CP_DK_KK = gahh_paper.get_v2();
	a_CP_DK_PiPi = gahh_paper.get_v3();
	a_fav_DK_KPi = gahh_paper.get_v4();
	r_ADS_K_KPi = gahh_paper.get_v5();
	r_CP_KK = gahh_paper.get_v6();
	r_CP_PiPi = gahh_paper.get_v7();

	a_ADS_K_KPi_stat_err = gahh_paper.get_v1_st();
	a_CP_DK_KK_stat_err = gahh_paper.get_v2_st();
	a_CP_DK_PiPi_stat_err = gahh_paper.get_v3_st();
	a_fav_DK_KPi_stat_err = gahh_paper.get_v4_st();
	r_ADS_K_KPi_stat_err = gahh_paper.get_v5_st();
	r_CP_KK_stat_err = gahh_paper.get_v6_st();
	r_CP_PiPi_stat_err = gahh_paper.get_v7_st();

	a_ADS_K_KPi_syst_err = gahh_paper.get_v1_sy();
	a_CP_DK_KK_syst_err = gahh_paper.get_v2_sy();
	a_CP_DK_PiPi_syst_err = gahh_paper.get_v3_sy();
	a_fav_DK_KPi_syst_err = gahh_paper.get_v4_sy();
	r_ADS_K_KPi_syst_err = gahh_paper.get_v5_sy();
	r_CP_KK_syst_err = gahh_paper.get_v6_sy();
	r_CP_PiPi_syst_err = gahh_paper.get_v7_sy();



	double* pointer_to_matrix_stat;
	double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = gahh_paper.get_corrStat();
	pointer_to_matrix_syst = gahh_paper.get_corrSyst();

	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++) {
			corStatGAhh(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++) {
			corSystGAhh(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}




	//ggsz
	Ggsz ggsz_paper;
	ggsz_paper.assign_from_json(json_file);

	x_plus = ggsz_paper.get_v1();
	x_minus = ggsz_paper.get_v2();
	y_plus = ggsz_paper.get_v3();
	y_minus = ggsz_paper.get_v4();

	x_plus_stat_err = ggsz_paper.get_v1_st();
	x_minus_stat_err = ggsz_paper.get_v2_st();
	y_plus_stat_err = ggsz_paper.get_v3_st();
	y_minus_stat_err = ggsz_paper.get_v4_st();

	x_plus_syst_err = ggsz_paper.get_v1_sy();
	x_minus_syst_err = ggsz_paper.get_v2_sy();
	y_plus_syst_err = ggsz_paper.get_v3_sy();
	y_minus_syst_err = ggsz_paper.get_v4_sy();

	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = ggsz_paper.get_corrStat();
	pointer_to_matrix_syst = ggsz_paper.get_corrSyst();

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


	//GAhhhh
	Gahhhh gahhhh_paper;
	gahhhh_paper.assign_from_json(json_file);

	a_ADS_K_K3Pi = gahhhh_paper.get_v1();
	a_CP_DK_4Pi = gahhhh_paper.get_v2();
	a_fav_DK_K3Pi = gahhhh_paper.get_v3();
	r_ADS_K_K3Pi = gahhhh_paper.get_v4();
	r_CP_4Pi = gahhhh_paper.get_v5();

	a_ADS_K_K3Pi_stat_err = gahhhh_paper.get_v1_st();
	a_CP_DK_4Pi_stat_err = gahhhh_paper.get_v2_st();
	a_fav_DK_K3Pi_stat_err = gahhhh_paper.get_v3_st();
	r_ADS_K_K3Pi_stat_err = gahhhh_paper.get_v4_st();
	r_CP_4Pi_stat_err = gahhhh_paper.get_v5_st();

	a_ADS_K_K3Pi_syst_err = gahhhh_paper.get_v1_sy();
	a_CP_DK_4Pi_syst_err = gahhhh_paper.get_v2_sy();
	a_fav_DK_K3Pi_syst_err = gahhhh_paper.get_v3_sy();
	r_ADS_K_K3Pi_syst_err = gahhhh_paper.get_v4_sy();
	r_CP_4Pi_syst_err = gahhhh_paper.get_v5_sy();



	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = gahhhh_paper.get_corrStat();
	pointer_to_matrix_syst = gahhhh_paper.get_corrSyst();

	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++) {
			corStatGAhhhh(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<5; i++){
		for (int j=0; j<7; j++) {
			corSystGAhhhh(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}

	//ADhhpi0
	Adhhpi0 adhhpi0_paper;
	adhhpi0_paper.assign_from_json(json_file);

	a_ADS_DK_KPiPi0 = adhhpi0_paper.get_v1();
	a_CP_DK_KKPi0 = adhhpi0_paper.get_v2();
	a_CP_DK_PiPiPi0 = adhhpi0_paper.get_v3();
	a_fav_DK_KPiPi0 = adhhpi0_paper.get_v4();
	r_ADS_DK_KPiPi0 = adhhpi0_paper.get_v5();
	r_CP_KKPi0 = adhhpi0_paper.get_v6();
	r_CP_PiPiPi0 = adhhpi0_paper.get_v7();

	a_ADS_DK_KPiPi0_stat_err = adhhpi0_paper.get_v1_st();
	a_CP_DK_KKPi0_stat_err = adhhpi0_paper.get_v2_st();
	a_CP_DK_PiPiPi0_stat_err = adhhpi0_paper.get_v3_st();
	a_fav_DK_KPiPi0_stat_err = adhhpi0_paper.get_v4_st();
	r_ADS_DK_KPiPi0_stat_err = adhhpi0_paper.get_v5_st();
	r_CP_KKPi0_stat_err = adhhpi0_paper.get_v6_st();
	r_CP_PiPiPi0_stat_err = adhhpi0_paper.get_v7_st();

	a_ADS_DK_KPiPi0_syst_err = adhhpi0_paper.get_v1_sy();
	a_CP_DK_KKPi0_syst_err = adhhpi0_paper.get_v2_sy();
	a_CP_DK_PiPiPi0_syst_err = adhhpi0_paper.get_v3_sy();
	a_fav_DK_KPiPi0_syst_err = adhhpi0_paper.get_v4_sy();
	r_ADS_DK_KPiPi0_syst_err = adhhpi0_paper.get_v5_sy();
	r_CP_KKPi0_syst_err = adhhpi0_paper.get_v6_sy();
	r_CP_PiPiPi0_syst_err = adhhpi0_paper.get_v7_sy();



	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = adhhpi0_paper.get_corrStat();
	pointer_to_matrix_syst = adhhpi0_paper.get_corrSyst();

	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++) {
			corStatADhhpi0(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<7; i++){
		for (int j=0; j<7; j++) {
			corSystADhhpi0(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}

	//BsDsK
	Bsdsk bsdsk_paper;
	bsdsk_paper.assign_from_json(json_file);

	C = bsdsk_paper.get_v1();
	D_bar_f = bsdsk_paper.get_v2();
	D_f = bsdsk_paper.get_v3();
	S_bar_f = bsdsk_paper.get_v4();
	S_f = bsdsk_paper.get_v5();

	C_stat_err = bsdsk_paper.get_v1_st();
	D_bar_f_stat_err = bsdsk_paper.get_v2_st();
	D_f_stat_err = bsdsk_paper.get_v3_st();
	S_bar_f_stat_err = bsdsk_paper.get_v4_st();
	S_f_stat_err = bsdsk_paper.get_v5_st();

	C_syst_err = bsdsk_paper.get_v1_sy();
	D_bar_f_syst_err = bsdsk_paper.get_v2_sy();
	D_f_syst_err = bsdsk_paper.get_v3_sy();
	S_bar_f_syst_err = bsdsk_paper.get_v4_sy();
	S_f_syst_err = bsdsk_paper.get_v5_sy();



	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = bsdsk_paper.get_corrStat();
	pointer_to_matrix_syst = bsdsk_paper.get_corrSyst();

	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++) {
			corStatBsDsK(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<5; i++){
		for (int j=0; j<7; j++) {
			corSystBsDsK(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}

	//ggszDKPi
	Ggszdkpi ggszdkpi_paper;
	ggszdkpi_paper.assign_from_json(json_file);

	x_DKPi_plus = ggszdkpi_paper.get_v1();
	x_DKPi_minus = ggszdkpi_paper.get_v2();
	y_DKPi_plus = ggszdkpi_paper.get_v3();
	y_DKPi_minus = ggszdkpi_paper.get_v4();

	x_DKPi_plus_stat_err = ggszdkpi_paper.get_v1_st();
	x_DKPi_minus_stat_err = ggszdkpi_paper.get_v2_st();
	y_DKPi_plus_stat_err = ggszdkpi_paper.get_v3_st();
	y_DKPi_minus_stat_err = ggszdkpi_paper.get_v4_st();

	x_DKPi_plus_syst_err = ggszdkpi_paper.get_v1_sy();
	x_DKPi_minus_syst_err = ggszdkpi_paper.get_v2_sy();
	y_DKPi_plus_syst_err = ggszdkpi_paper.get_v3_sy();
	y_DKPi_minus_syst_err = ggszdkpi_paper.get_v4_sy();

	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = ggszdkpi_paper.get_corrStat();
	pointer_to_matrix_syst = ggszdkpi_paper.get_corrSyst();

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrStatGGSZDKPi(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrSystGGSZDKPi(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}


	//ggszDKstar0
	Ggszdkstar0 ggszDKstar0_paper;
	ggszDKstar0_paper.assign_from_json(json_file);

	x_DKstar0_plus = ggszDKstar0_paper.get_v1();
	x_DKstar0_minus = ggszDKstar0_paper.get_v2();
	y_DKstar0_plus = ggszDKstar0_paper.get_v3();
	y_DKstar0_minus = ggszDKstar0_paper.get_v4();

	x_DKstar0_plus_stat_err = ggszDKstar0_paper.get_v1_st();
	x_DKstar0_minus_stat_err = ggszDKstar0_paper.get_v2_st();
	y_DKstar0_plus_stat_err = ggszDKstar0_paper.get_v3_st();
	y_DKstar0_minus_stat_err = ggszDKstar0_paper.get_v4_st();

	x_DKstar0_plus_syst_err = ggszDKstar0_paper.get_v1_sy();
	x_DKstar0_minus_syst_err = ggszDKstar0_paper.get_v2_sy();
	y_DKstar0_plus_syst_err = ggszDKstar0_paper.get_v3_sy();
	y_DKstar0_minus_syst_err = ggszDKstar0_paper.get_v4_sy();

	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = ggszDKstar0_paper.get_corrStat();
	pointer_to_matrix_syst = ggszDKstar0_paper.get_corrSyst();

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrStatGGSZDKstar0(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++) {
			corrSystGGSZDKstar0(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}
/*
	//GABDKstar
	Gabdkstar GABDKstar_paper;
	GABDKstar_paper.assign_from_json(json_file);

	a_fav_DKstar0_KPi = GABDKstar_paper.get_v1();
	r_plus_DKstar0_KPi = GABDKstar_paper.get_v2();
	r_minus_DKstar0_KPi = GABDKstar_paper.get_v3();

	a_fav_DKstar0_KPi_stat_err = GABDKstar_paper.get_v1_st();
	r_plus_DKstar0_KPi_stat_err = GABDKstar_paper.get_v2_st();
	r_minus_DKstar0_KPi_stat_err = GABDKstar_paper.get_v3_st();

	a_fav_DKstar0_KPi_syst_err = GABDKstar_paper.get_v1_sy();
	r_plus_DKstar0_KPi_syst_err = GABDKstar_paper.get_v2_sy();
	r_minus_DKstar0_KPi_syst_err = GABDKstar_paper.get_v3_sy();

	//double* pointer_to_matrix_stat;
	//double* pointer_to_matrix_syst;
	pointer_to_matrix_stat = GABDKstar_paper.get_corrStat();
	pointer_to_matrix_syst = GABDKstar_paper.get_corrSyst();

	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			corStatGABDKstar(i,j) = *pointer_to_matrix_stat;
			pointer_to_matrix_stat ++;
			
		}
	}

	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			corSystGABDKstar(i,j) = *pointer_to_matrix_syst;
			pointer_to_matrix_syst ++;
			
		}
	}
*/
}






