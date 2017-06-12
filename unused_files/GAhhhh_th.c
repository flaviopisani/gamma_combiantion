//r_D_K3Pi = sqrt( R_WS_D_K3Pi +
//		 k_D_K3Pi * r_D_K3Pi * ( yD * cos(delta_D_K3Pi/180.*M_PI) - xD * sin(delta_D_K3Pi/180.*M_PI) ) -0.5 * ( xD*xD + yD *yD ) );

double R_WS_D_K3Pi_th = r_D_K3Pi*r_D_K3Pi - k_D_K3Pi* r_D_K3Pi * ( yD * cos(delta_D_K3Pi/180.*M_PI) - xD * sin(delta_D_K3Pi/180.*M_PI) ) + 0.5 * ( xD*xD + yD *yD );

// equation (223)
double a_ADS_K_K3Pi_th       = (2. * k_D_K3Pi * r_B_DK * r_D_K3Pi * sin((delta_B_DK + delta_D_K3Pi)/180.*M_PI) * sin(gamma/180.*M_PI))/
  (r_B_DK*r_B_DK + r_D_K3Pi * r_D_K3Pi + 2. * k_D_K3Pi * r_B_DK * r_D_K3Pi * cos((delta_B_DK + delta_D_K3Pi)/180.*M_PI)*cos(gamma/180.*M_PI));

// equation (220)
double a_CP_DK_4Pi_th   = (2. * (2*F_PiPiPiPi -1) * r_B_DK * sin(delta_B_DK/180.*M_PI) * sin(gamma/180.*M_PI)) /
            (1. + r_B_DK * r_B_DK + 2. * (2*F_PiPiPiPi -1) * r_B_DK * cos(delta_B_DK/180.*M_PI)* cos(gamma/180.*M_PI));

// equation (219)
double a_fav_DK_K3Pi_th         = (2. * k_D_K3Pi * r_B_DK * r_D_K3Pi * sin((delta_B_DK - delta_D_K3Pi)/180.*M_PI)*sin(gamma/180.*M_PI))/
  (1. + r_B_DK * r_B_DK * r_D_K3Pi * r_D_K3Pi + 2. * k_D_K3Pi * r_B_DK * r_D_K3Pi * cos((delta_B_DK - delta_D_K3Pi)/180.*M_PI) * cos(gamma/180.*M_PI));

// equation (222)
double r_ADS_K_K3Pi_th       =  (r_B_DK * r_B_DK + r_D_K3Pi * r_D_K3Pi + 2. * k_D_K3Pi * r_B_DK * r_D_K3Pi * cos((delta_B_DK + delta_D_K3Pi)/180.*M_PI) * cos(gamma/180.*M_PI)) / (1. + r_B_DK * r_B_DK * r_D_K3Pi * r_D_K3Pi + 2. * k_D_K3Pi * r_B_DK * r_D_K3Pi * cos((delta_B_DK - delta_D_K3Pi)/180.*M_PI) * cos(gamma/180.*M_PI));

//equation (218)
double r_CP_4Pi_th         = (1. + r_B_DK * r_B_DK + 2. * (2. * F_PiPiPiPi - 1.) * r_B_DK * cos(delta_B_DK/180.*M_PI) * cos(gamma/180.*M_PI));

TVectorD GAhhhh_x_obs_min_x_th(5);
GAhhhh_x_obs_min_x_th(0) = a_ADS_K_K3Pi  - a_ADS_K_K3Pi_th;
GAhhhh_x_obs_min_x_th(1) = a_CP_DK_4Pi   - a_CP_DK_4Pi_th;
GAhhhh_x_obs_min_x_th(2) = a_fav_DK_K3Pi - a_fav_DK_K3Pi_th;
GAhhhh_x_obs_min_x_th(3) = r_ADS_K_K3Pi  - r_ADS_K_K3Pi_th;
GAhhhh_x_obs_min_x_th(4) = r_CP_4Pi      - r_CP_4Pi_th;

TMatrixDSym GAhhhh_x_covI(5);
for(int i=0; i<5; i++)
  {
    for(int j=0;j<5; j++)
      {
	if(i>j) continue;
	GAhhhh_x_covI(i,j) = corGAhhhh(i,j)*GAhhhh_x_err[i]*GAhhhh_x_err[j];
	if(i!=j) GAhhhh_x_covI(j,i) = corGAhhhh(i,j)*GAhhhh_x_err[i]*GAhhhh_x_err[j];
      }
  }
//
GAhhhh_x_covI.Invert();

TMatrixDSym corCharmLHCb(3);
//      r_D_K3Pi                            k_D_K3Pi*y'                    1/4*(x^2+y^2)
corCharmLHCb(0,0)=1.0;                  corCharmLHCb(0,1)=0.93;                corCharmLHCb(0,2)=0.83;
corCharmLHCb(1,0)=corCharmLHCb(0,1);    corCharmLHCb(1,1)=1.0;                 corCharmLHCb(1,2)=0.95;
corCharmLHCb(2,0)=corCharmLHCb(0,2);    corCharmLHCb(2,1)=corCharmLHCb(1,2);   corCharmLHCb(2,2)=1.0;


double charmLHCb_K3pi_b_th = k_D_K3Pi*(yD*cos(delta_D_K3Pi/180*M_PI)-xD*sin(delta_D_K3Pi/180*M_PI));
double charmLHCb_K3pi_c_th = 0.25*(xD*xD + yD*yD);

TVectorD charmLHCb_x_obs_min_x_th(3);
charmLHCb_x_obs_min_x_th(0) = charmLHCb_K3pi_a - r_D_K3Pi;
charmLHCb_x_obs_min_x_th(1) = charmLHCb_K3pi_b - charmLHCb_K3pi_b_th;
charmLHCb_x_obs_min_x_th(2) = charmLHCb_K3pi_c - charmLHCb_K3pi_c_th;

TVectorD charmLHCb_x_err(3);
charmLHCb_x_err(0)        = charmLHCb_K3pi_a_err;
charmLHCb_x_err(1)        = charmLHCb_K3pi_b_err;
charmLHCb_x_err(2)        = charmLHCb_K3pi_c_err;

TMatrixDSym charmLHCb_x_covI(3);
for(int i=0; i<3; i++)
  {
    for(int j=0;j<3; j++)
      {
	if(i>j) continue;
	charmLHCb_x_covI(i,j) = corCharmLHCb(i,j)*charmLHCb_x_err[i]*charmLHCb_x_err[j];
	if(i!=j) charmLHCb_x_covI(j,i) = corCharmLHCb(i,j)*charmLHCb_x_err[i]*charmLHCb_x_err[j];
      }
  }
//

charmLHCb_x_covI.Invert();
for(int i=0; i<3; i++) for(int j=0;j<3; j++) charmLHCb_x_covI(i,j)=charmLHCb_x_covI(i,j);
