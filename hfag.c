//TVectorD HFAG_x_obs(6);
HFAG_x_obs[0]        = 0.00370;
HFAG_x_obs[1]        = 0.00660;
HFAG_x_obs[2]        = 191.8;
//  HFAG_x_obs[2]        = 182.6;
HFAG_x_obs[3]        = 0.00349;
HFAG_x_obs[4]        = 0.00100;
HFAG_x_obs[5]        =-0.00150;

//TVectorD HFAG_x_err(6);
HFAG_x_err[0]        = 0.00160;
HFAG_x_err[1]        = 0.00085;
HFAG_x_err[2]        = 12.1;
HFAG_x_err[3]        = 0.00004;
HFAG_x_err[4]        = 0.00150;
HFAG_x_err[5]        = 0.00140;

//TMatrixDSym HFAG_x_cor(6);

HFAG_x_cor(0,0)= 1.0;         HFAG_x_cor(0,1)=-0.361;       HFAG_x_cor(0,2)=-0.332;       HFAG_x_cor(0,3)= 0.234;       HFAG_x_cor(0,4)= 0.117;       HFAG_x_cor(0,5)= 0.146;
HFAG_x_cor(1,0)=-0.361;       HFAG_x_cor(1,1)= 1.0;        HFAG_x_cor(1,2)= 0.941;       HFAG_x_cor(1,3)= 0.234;       HFAG_x_cor(1,4)=-0.180;       HFAG_x_cor(1,5)=-0.221;
HFAG_x_cor(2,0)=-0.332;       HFAG_x_cor(2,1)= 0.941;       HFAG_x_cor(2,2)= 1.0;        HFAG_x_cor(2,3)= 0.439;       HFAG_x_cor(2,4)=-0.200;       HFAG_x_cor(2,5)=-0.237;
HFAG_x_cor(3,0)= 0.234;       HFAG_x_cor(3,1)= 0.234;       HFAG_x_cor(3,2)= 0.439;       HFAG_x_cor(3,3)= 1.0;        HFAG_x_cor(3,4)=-0.078;       HFAG_x_cor(3,5)=-0.067;
HFAG_x_cor(4,0)= 0.117;       HFAG_x_cor(4,1)=-0.180;       HFAG_x_cor(4,2)=-0.200;       HFAG_x_cor(4,3)=-0.078;       HFAG_x_cor(4,4)= 1.0;        HFAG_x_cor(4,5)= 0.726;
HFAG_x_cor(5,0)= 0.146;       HFAG_x_cor(5,1)=-0.221;       HFAG_x_cor(5,2)=-0.237;       HFAG_x_cor(5,3)=-0.067;       HFAG_x_cor(5,4)= 0.726;       HFAG_x_cor(5,5)= 1.0;

//TMatrixDSym HFAG_x_covI(6);
for(int i=0; i<6; i++)  {
  for(int j=0;j<6; j++) {
    if(i>j) continue;
    HFAG_x_covI(i,j) = HFAG_x_cor(i,j)*HFAG_x_err[i]*HFAG_x_err[j];
    if(i!=j) HFAG_x_covI(j,i) = HFAG_x_cor(i,j)*HFAG_x_err[i]*HFAG_x_err[j];
  }
 }
HFAG_x_covI.Invert();

