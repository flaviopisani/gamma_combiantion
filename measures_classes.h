#ifndef MEASURES_CLASSES_H
#define MEASURES_CLASSES_H

#include <fstream>
#include "jsoncpp/dist/json/json.h"



//parent class

class Measures {

	public:
	
	double get_v1 () {return v1;};
	double get_v2 () {return v2;};
	double get_v3 () {return v3;};
	double get_v4 () {return v4;};
	double get_v5 () {return v5;};
	double get_v6 () {return v6;};
	double get_v7 () {return v7;};

	double get_v1_st () {return v1_st;};
	double get_v2_st () {return v2_st;};
	double get_v3_st () {return v3_st;};
	double get_v4_st () {return v4_st;};
	double get_v5_st () {return v5_st;};
	double get_v6_st () {return v6_st;};
	double get_v7_st () {return v7_st;};

	double get_v1_sy () {return v1_sy;};
	double get_v2_sy () {return v2_sy;};
	double get_v3_sy () {return v3_sy;};
	double get_v4_sy () {return v4_sy;};
	double get_v5_sy () {return v5_sy;};
	double get_v6_sy () {return v6_sy;};
	double get_v7_sy () {return v7_sy;};

	double* get_corrStat () {return corrStat;};
	double* get_corrSyst () {return corrSyst;};


	protected:
	double v1,v2,v3,v4,v5,v6,v7;
	double v1_st,v2_st,v3_st,v4_st,v5_st,v6_st,v7_st;
	double v1_sy,v2_sy,v3_sy,v4_sy,v5_sy,v6_sy,v7_sy;

	double corrStat[49];
	double corrSyst[49];
	

};



class Gahh : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Ggsz : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Gahhhh : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Adhhpi0 : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Bsdsk : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Ggszdkpi : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Ggszdkstar0 : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Gabdkstar : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Gbdstarkp : public Measures{
	public:
	void assign_from_json (char* json_file);
};

class Gabdkstarp : public Measures{
	public:
	void assign_from_json (char* json_file);
};


#endif
