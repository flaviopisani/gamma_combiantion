//TVectorD CLEO_x_obs(6);
CLEO_x_obs[0]        = 0.32;
CLEO_x_obs[1]        = 170;
CLEO_x_obs[2]        = 0.81;
CLEO_x_obs[3]        = 180.;
CLEO_x_obs[4]        = 5.52e-2;
CLEO_x_obs[5]        = 4.40e-2;

//TVectorD CLEO_x_err(6);
CLEO_x_err[0]        = 0.10;
CLEO_x_err[1]        = 38;
CLEO_x_err[2]        = 0.065;
CLEO_x_err[3]        = 17.;
CLEO_x_err[4]        = 0.07e-2;
CLEO_x_err[5]        = 0.12e-2;

//TMatrixDSym CLEO_x_cor(6);

CLEO_x_cor(0,0)=1.0;          CLEO_x_cor(0,1)=0.40 ;        CLEO_x_cor(0,2)=0.;           CLEO_x_cor(0,3)=-0.14;      CLEO_x_cor(0,4)=-0.33;          CLEO_x_cor(0,5)=0.05;
CLEO_x_cor(1,0)=0.40;         CLEO_x_cor(1,1)=1.0;          CLEO_x_cor(1,2)=0.13;         CLEO_x_cor(1,3)=-0.29;       CLEO_x_cor(1,4)=0.43;           CLEO_x_cor(1,5)=-0.20;
CLEO_x_cor(2,0)=0.;           CLEO_x_cor(2,1)=0.13;         CLEO_x_cor(2,2)=1.0;          CLEO_x_cor(2,3)=-0.29;       CLEO_x_cor(2,4)=0.07;           CLEO_x_cor(2,5)=-0.33;
CLEO_x_cor(3,0)=-0.14;        CLEO_x_cor(3,1)=-0.29;        CLEO_x_cor(3,2)=-0.29;        CLEO_x_cor(3,3)=1.0;         CLEO_x_cor(3,4)=-0.18;          CLEO_x_cor(3,5)=0.37;
CLEO_x_cor(4,0)=-0.33;        CLEO_x_cor(4,1)=0.43;         CLEO_x_cor(4,2)=0.07;         CLEO_x_cor(4,3)=-0.18;       CLEO_x_cor(4,4)=1.0;            CLEO_x_cor(4,5)=-0.11;
CLEO_x_cor(5,0)=0.05;         CLEO_x_cor(5,1)=-0.20;        CLEO_x_cor(5,2)=-0.33;        CLEO_x_cor(5,3)=0.37;        CLEO_x_cor(5,4)=-0.11;          CLEO_x_cor(5,5)=1.0;


//TMatrixDSym CLEO_x_covI(6);
for(int i=0; i<6; i++)  {
  for(int j=0;j<6; j++) {
    if(i>j) continue;
    CLEO_x_covI(i,j) = CLEO_x_cor(i,j)*CLEO_x_err[i]*CLEO_x_err[j];
    if(i!=j) CLEO_x_covI(j,i) = CLEO_x_cor(i,j)*CLEO_x_err[i]*CLEO_x_err[j];
  }
 }
CLEO_x_covI.Invert();
