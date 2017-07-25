//TVectorD CLEO_x_obs(6);
CLEO_x_obs[0]        = 0.43;
CLEO_x_obs[1]        = 128;
CLEO_x_obs[2]        = 0.81;
CLEO_x_obs[3]        = 190.;
CLEO_x_obs[4]        = 5.49e-2;
CLEO_x_obs[5]        = 4.47e-2;

//TVectorD CLEO_x_err(6);
CLEO_x_err[0]        = 0.15;
CLEO_x_err[1]        = 22.5;
CLEO_x_err[2]        = 0.06;
CLEO_x_err[3]        = 14.5;
CLEO_x_err[4]        = 0.06e-2;
CLEO_x_err[5]        = 0.12e-2;

//TMatrixDSym CLEO_x_cor(6);

CLEO_x_cor(0,0)=1.0;          CLEO_x_cor(0,1)=0.67 ;        CLEO_x_cor(0,2)=0.04;           CLEO_x_cor(0,3)=-0.05;      CLEO_x_cor(0,4)=-0.48;          CLEO_x_cor(0,5)=-0.04;
CLEO_x_cor(1,0)=-0.67;         CLEO_x_cor(1,1)=1.0;          CLEO_x_cor(1,2)=0.02;         CLEO_x_cor(1,3)=0.15;       CLEO_x_cor(1,4)=0.12;           CLEO_x_cor(1,5)=-0.08;
CLEO_x_cor(2,0)=0.04;           CLEO_x_cor(2,1)=0.02;         CLEO_x_cor(2,2)=1.0;          CLEO_x_cor(2,3)=0.23;       CLEO_x_cor(2,4)=-0.04;           CLEO_x_cor(2,5)=-0.04;
CLEO_x_cor(3,0)=-0.05;        CLEO_x_cor(3,1)=-0.15;        CLEO_x_cor(3,2)=0.23;        CLEO_x_cor(3,3)=1.0;         CLEO_x_cor(3,4)=-0.02;          CLEO_x_cor(3,5)=0.36;
CLEO_x_cor(4,0)=-0.48;        CLEO_x_cor(4,1)=0.12;         CLEO_x_cor(4,2)=-0.04;         CLEO_x_cor(4,3)=-0.02;       CLEO_x_cor(4,4)=1.0;            CLEO_x_cor(4,5)=-0.03;
CLEO_x_cor(5,0)=-0.04;         CLEO_x_cor(5,1)=0.08;        CLEO_x_cor(5,2)=-0.04;        CLEO_x_cor(5,3)=0.36;        CLEO_x_cor(5,4)=-0.03;          CLEO_x_cor(5,5)=1.0;


//TMatrixDSym CLEO_x_covI(6);
for(int i=0; i<6; i++)  {
  for(int j=0;j<6; j++) {
    if(i>j) continue;
    CLEO_x_covI(i,j) = CLEO_x_cor(i,j)*CLEO_x_err[i]*CLEO_x_err[j];
    if(i!=j) CLEO_x_covI(j,i) = CLEO_x_cor(i,j)*CLEO_x_err[i]*CLEO_x_err[j];
  }
 }
CLEO_x_covI.Invert();
