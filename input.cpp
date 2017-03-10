#include "TMatrixDSym.h"
#include "TVectorD.h"
//////////////////////////////////////////////////////////////////////////////////////////
//                                         HFAG inputs
//////////////////////////////////////////////////////////////////////////////////////////
TVectorD HFAG_x_obs(6);
HFAG_x_obs[0]        = 0.00370;
HFAG_x_obs[1]        = 0.00660;
HFAG_x_obs[2]        = 191.8;
HFAG_x_obs[3]        = 0.00349;
HFAG_x_obs[4]        = 0.00100;
HFAG_x_obs[5]        =-0.00150;

TVectorD HFAG_x_err(6);
HFAG_x_err[0]        = 0.00160;
HFAG_x_err[1]        = 0.00100;
HFAG_x_err[2]        = 14.7;
HFAG_x_err[3]        = 0.00004;
HFAG_x_err[4]        = 0.00150;
HFAG_x_err[5]        = 0.00140;

TMatrixDSym HFAG_x_cor(6);

HFAG_x_cor(0,0)= 1.0;        HFAG_x_cor(0,1)=-0.36;       HFAG_x_cor(0,2)=-0.33;       HFAG_x_cor(0,3)= 0.23;       HFAG_x_cor(0,4)= 0.12;       HFAG_x_cor(0,5)= 0.15;
HFAG_x_cor(1,0)=-0.36;       HFAG_x_cor(1,1)= 1.0;        HFAG_x_cor(1,2)= 0.94;       HFAG_x_cor(1,3)= 0.23;       HFAG_x_cor(1,4)=-0.18;       HFAG_x_cor(1,5)=-0.22;
HFAG_x_cor(2,0)=-0.33;       HFAG_x_cor(2,1)= 0.94;       HFAG_x_cor(2,2)= 1.0;        HFAG_x_cor(2,3)= 0.44;       HFAG_x_cor(2,4)=-0.20;       HFAG_x_cor(2,5)=-0.24;
HFAG_x_cor(3,0)= 0.23;       HFAG_x_cor(3,1)= 0.23;       HFAG_x_cor(3,2)= 0.44;       HFAG_x_cor(3,3)= 1.0;        HFAG_x_cor(3,4)=-0.08;       HFAG_x_cor(3,5)=-0.07;
HFAG_x_cor(4,0)= 0.12;       HFAG_x_cor(4,1)=-0.18;       HFAG_x_cor(4,2)=-0.20;       HFAG_x_cor(4,3)=-0.08;       HFAG_x_cor(4,4)= 1.0;        HFAG_x_cor(4,5)= 0.73;
HFAG_x_cor(5,0)= 0.15;       HFAG_x_cor(5,1)=-0.22;       HFAG_x_cor(5,2)=-0.24;       HFAG_x_cor(5,3)=-0.07;       HFAG_x_cor(5,4)= 0.73;       HFAG_x_cor(5,5)= 1.0;
