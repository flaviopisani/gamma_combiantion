#ifndef FUNCTIONS_DMIX_TH_H
#define FUNCTIONS_DMIX_TH_H 1


// Setting corresponding to D mixing set to zero.
namespace functions_dmix_th{
    const double Integral_plus = 1.;
    const double Integral_minus = 0.;
}
//double Integral_x = 0.;
//double Integral_y = 0.;
//

double IPlus_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f);

double IMinus_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f);

double Iy_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f);

double Ix_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f);

double IPlus_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f);

double IMinus_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f);

double Iy_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f);

double Ix_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f);

double Gamma_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f, double xD, double yD, double Mxy);

double Gamma_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f, double xD, double yD, double Mxy);

double Gamma_BPlus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f, double xD, double yD, double Mxy);


double Gamma_BPlus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f, double xD, double yD, double Mxy);

#endif //FUNCTIONS_DMIX_TH_H
