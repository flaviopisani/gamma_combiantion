#ifndef MEASURES_CLASSES_H
#define MEASURES_CLASSES_H



class ggsz {

	public:
	void assign_from_json ();

	private:
	double x_plus,x_minus,y_plus,y_minus;
	double x_plus_stat_err,x_minus_stat_err,y_plus_stat_err,y_minus_stat_err;
	double x_plus_syst_err,x_minus_syst_err,y_plus_syst_err,y_minus_syst_err;

	TMatrixDSym corrStatGGSZ(4);
	TMatrixDSym corrSystGGSZ(4);

}




#endif
