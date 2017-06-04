#include "functions_dmix_th.h"
#include <cmath>

double IPlus_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f)
{
    double c = r_B_h * r_B_h +  r_f *  r_f + 2. * k_B_h * r_B_h * k_f * r_f * cos((delta_B_h + delta_f - gamma)/180.*M_PI);
    return c;
}

double IMinus_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f)
{
    double c = 1. + r_B_h * r_B_h *  r_f *  r_f + 2. * k_B_h * r_B_h * k_f * r_f * cos((delta_B_h + delta_f - gamma)/180.*M_PI);
    return c;
}

double Iy_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f)
{
    double c = 2.* ( k_f * r_f *(r_B_h * r_B_h + 1.) * cos((delta_f)/180.*M_PI) + k_B_h * r_B_h * ( 1. + r_f * r_f) * cos((delta_B_h - gamma)/180.*M_PI));
    return c;
}

double Ix_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f)
{
    double c = 2.* ( k_f * r_f *(r_B_h * r_B_h - 1.) * sin((-delta_f)/180.*M_PI) + k_B_h * r_B_h * ( -1. +r_f * r_f) * sin((delta_B_h - gamma)/180.*M_PI));
    return c;
}

double IPlus_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f)
{
    double c = 1. + r_B_h * r_B_h *  r_f *  r_f + 2. * k_B_h * r_B_h * k_f * r_f * cos((delta_B_h - delta_f - gamma)/180.*M_PI);
    return c;
}

double IMinus_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f)
{
    double c = r_B_h * r_B_h +  r_f *  r_f + 2. * k_B_h * r_B_h * k_f * r_f * cos((delta_B_h - delta_f - gamma)/180.*M_PI);
    return c;
}

double Iy_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f)
{
    double c = 2.* ( k_f * r_f *(r_B_h * r_B_h + 1.) * cos((delta_f)/180.*M_PI) + k_B_h * r_B_h * ( 1. + r_f * r_f) * cos((delta_B_h - gamma)/180.*M_PI));
    return c;
}

double Ix_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f)
{
    double c = 2.* ( k_f * r_f *(r_B_h * r_B_h - 1.) * sin((delta_f)/180.*M_PI) + k_B_h * r_B_h * ( 1. - r_f * r_f) * sin((delta_B_h - gamma)/180.*M_PI));
    return c;
}

double Gamma_BMinus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f, double xD, double yD, double Mxy)
{
    double amplitude = 0.;
    double Integral_y = -Mxy*yD;
    double Integral_x =  Mxy*xD;
    amplitude += IPlus_BMinus_favored (r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f) * functions_dmix_th::Integral_plus;
    amplitude += IMinus_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f) * functions_dmix_th::Integral_minus;
    amplitude += Iy_BMinus_favored    (r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f) * Integral_y;
    amplitude += Ix_BMinus_favored    (r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f) * Integral_x;
    return amplitude;
}

double Gamma_BMinus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f, double xD, double yD, double Mxy)
{
    double amplitude = 0.;
    double Integral_y = -Mxy*yD;
    double Integral_x =  Mxy*xD;
    amplitude += IPlus_BMinus_suppressed (r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f) * functions_dmix_th::Integral_plus;
    amplitude += IMinus_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f) * functions_dmix_th::Integral_minus;
    amplitude += Iy_BMinus_suppressed    (r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f) * Integral_y;
    amplitude += Ix_BMinus_suppressed    (r_B_h, r_f, delta_B_h, delta_f, gamma, k_B_h, k_f) * Integral_x;
    return amplitude;
}

double Gamma_BPlus_suppressed
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f, double xD, double yD, double Mxy)
{
    return Gamma_BMinus_suppressed(r_B_h, r_f, delta_B_h, delta_f, (-1.) * gamma, k_B_h, k_f, xD, yD, Mxy);
}


double Gamma_BPlus_favored
(double r_B_h, double r_f, double delta_B_h, double delta_f, double gamma, double k_B_h, double k_f, double xD, double yD, double Mxy)
{
    return Gamma_BMinus_favored(r_B_h, r_f, delta_B_h, delta_f, (-1.) * gamma, k_B_h, k_f, xD, yD, Mxy);
}
