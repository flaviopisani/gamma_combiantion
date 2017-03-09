//TH1D * h_delta_D_K3Pi_prior = new TH1D("h_delta_D_K3Pi_prior","h_delta_D_K3Pi_prior",200,0,360);

TH1D * H1D[N1DPLOT];
for (int i=0; i<N1DPLOT; i++)  {
  //    for (int j=NMODE-1; j<NMODE; j++)  {
  H1D[i] = new TH1D(("h1D_"+var_to_str[i]+"_"+mode_to_str[modeNum]).Data(),("h1D_"+var_to_str[i]+"_"+mode_to_str[modeNum]).Data(),
		    NBIN,x_min[i],x_max[i]);
 }

TH1D * H1D_prior[N1DPLOT];
for (int i=0; i<N1DPLOT; i++)  {
  //    for (int j=NMODE-1; j<NMODE; j++)  {
  H1D_prior[i] = new TH1D(("h1D_prior_"+var_to_str[i]+"_"+mode_to_str[modeNum]).Data(),("h1D_prior_"+var_to_str[i]+"_"+mode_to_str[modeNum]).Data(),
		    NBIN,x_min[i],x_max[i]);
 }

TH2D * H2D[N1DPLOT][N1DPLOT];

for (int i=0; i<N1DPLOT; i++) {
  for (int j=0; j<N1DPLOT; j++) {
    if(i==j) continue;
    if(i>j) continue;
    H2D[i][j] = new TH2D(("h2D_"+var_to_str[i]+"_"+var_to_str[j]+"_"+mode_to_str[modeNum]).Data(),("h2D_"+var_to_str[i]+"_"+var_to_str[j]+"_"+mode_to_str[modeNum]).Data(),
			 NBINX,x_min[i],x_max[i],NBINY,x_min[j],x_max[j]);
  }
 }
