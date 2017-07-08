#ifndef MEASURES_CLASSES_H
#define MEASURES_CLASSES_H

#include <fstream>
#include "jsoncpp/dist/json/json.h"



class Gahh {

	public:
	void assign_from_json (char* json_file);
	
	double get_a1 () {return a1;};
	double get_a2 () {return a2;};
	double get_a3 () {return a3;};
	double get_a4 () {return a4;};
	double get_r1 () {return r1;};
	double get_r2 () {return r2;};
	double get_r3 () {return r3;};

	double get_a1_st () {return a1_st;};
	double get_a2_st () {return a2_st;};
	double get_a3_st () {return a3_st;};
	double get_a4_st () {return a4_st;};
	double get_r1_st () {return r1_st;};
	double get_r2_st () {return r2_st;};
	double get_r3_st () {return r3_st;};

	double get_a1_sy () {return a1_sy;};
	double get_a2_sy () {return a2_sy;};
	double get_a3_sy () {return a3_sy;};
	double get_a4_sy () {return a4_sy;};
	double get_r1_sy () {return r1_sy;};
	double get_r2_sy () {return r2_sy;};
	double get_r3_sy () {return r3_sy;};



	double* get_corrStat () {return corrStat;};
	double* get_corrSyst () {return corrSyst;};


	private:
	double a1,a2,a3,a4,r1,r2,r3;
	double a1_st,a2_st,a3_st,a4_st,r1_st,r2_st,r3_st;
	double a1_sy,a2_sy,a3_sy,a4_sy,r1_sy,r2_sy,r3_sy;

	double corrStat[49];
	double corrSyst[49];

};


class Ggsz {

	public:
	void assign_from_json (char* json_file);
	
	double get_x_plus_class () {return x_plus_class;};
	double get_x_minus_class () {return x_minus_class;};
	double get_y_plus_class () {return y_plus_class;};
	double get_y_minus_class () {return y_minus_class;};

	double get_x_plus_stat_err_class () {return x_plus_stat_err_class;};
	double get_x_minus_stat_err_class () {return x_minus_stat_err_class;};
	double get_y_plus_stat_err_class () {return y_plus_stat_err_class;};
	double get_y_minus_stat_err_class () {return y_minus_stat_err_class;};

	double get_x_plus_syst_err_class () {return x_plus_syst_err_class;};
	double get_x_minus_syst_err_class () {return x_minus_syst_err_class;};
	double get_y_plus_syst_err_class () {return y_plus_syst_err_class;};
	double get_y_minus_syst_err_class () {return y_minus_syst_err_class;};

	double* get_corrStatGGSZ_class () {return corrStatGGSZ_class;};
	double* get_corrSystGGSZ_class () {return corrSystGGSZ_class;};


	private:
	double x_plus_class,x_minus_class,y_plus_class,y_minus_class;
	double x_plus_stat_err_class,x_minus_stat_err_class,y_plus_stat_err_class,y_minus_stat_err_class;
	double x_plus_syst_err_class,x_minus_syst_err_class,y_plus_syst_err_class,y_minus_syst_err_class;

	double corrStatGGSZ_class[16];
	double corrSystGGSZ_class[16];

};









#endif
