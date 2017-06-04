#ifndef FUNCTION_H
#define FUNCTION_H 1
#include <gsl/gsl_sf_gamma.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_blas.h>
#include <gsl/gsl_linalg.h>
#include "TMatrixDSym.h"
#include "TVectorD.h"

int rmvnorm(const gsl_rng *r, const int n, const gsl_vector *mean, const gsl_matrix *var, gsl_vector *result);

double DG(double x, double y,double fX,double fY,double fXError,double fYError,double fCor);

TMatrixDSym buildCov( TMatrixDSym cor, TVectorD err);

TMatrixDSym buildCor( TMatrixDSym cov);

#endif //FUNCTION_H
