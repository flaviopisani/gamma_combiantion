#ifndef MEASURES_CLASSES_H
#define MEASURES_CLASSES_H

#include <fstream>
#include "jsoncpp/dist/json/json.h"

class ggsz {

	public:
	void assign_from_json ();
	
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
