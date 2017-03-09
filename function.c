int rmvnorm(const gsl_rng *r, const int n, const gsl_vector *mean, const gsl_matrix *var, gsl_vector *result){
  /* multivariate normal distribution random number generator */
  /*
   *    n       dimension of the random vetor
   *    mean    vector of means of size n
   *    var     variance matrix of dimension n x n
   *    result  output variable with a sigle random vector normal distribution generation
   */
  gsl_matrix *work = gsl_matrix_alloc(n,n);
  gsl_matrix_memcpy(work,var);
  gsl_linalg_cholesky_decomp(work);

  for (int k=0; k<n; k++)
    gsl_vector_set( result, k, gsl_ran_ugaussian(r) );

  gsl_blas_dtrmv(CblasLower, CblasNoTrans, CblasNonUnit, work, result);
  gsl_vector_add(result,mean);

  gsl_matrix_free(work);
  return 0;
}

double DG(double x, double y,double fX,double fY,double fXError,double fYError,double fCor) {


  double z = (x - fX)*(x - fX)/(fXError*fXError) - (2*fCor*(x - fX)*(y-fY))/(fXError*fYError) + (y - fY)*(y - fY)/(fYError*fYError);

  double result = (-z/(2*(1-fCor*fCor)));// - log(2*M_PI*fXError*fYError);

  return result;

}

TMatrixDSym buildCov( TMatrixDSym cor, TVectorD err) {
  TMatrixDSym cov(cor.GetNcols());
  for(int i=0; i<cor.GetNcols(); i++) { 
    for (int j=0; j<cor.GetNcols();j++) {  
      cov(i,j)  = err[i]  * cor(i,j) * err[j]; 
    } 
  }
  return cov;
}

TMatrixDSym buildCor( TMatrixDSym cov) {
  TMatrixDSym cor(cov.GetNcols());
  for(int i=0; i<cov.GetNcols(); i++) { 
    for (int j=0; j<cov.GetNcols();j++) {  
      cor(i,j)  = cov(i,j)/sqrt(cov(i,i))/sqrt(cov(j,j));
    } 
  }
  return cor;
}
