TString mode_to_str[NMODE];
TString var_to_str[N1DPLOT];
double x_min[N1DPLOT], x_max[N1DPLOT];

double gamma_range[2]             = {x_min[13]   ,x_max[13]};   //13 gamma
double delta_B_DK_range[2]        = {x_min[9]    ,x_max[9]};     //9 delta_B_DK
double r_B_DsK_range[2]           = {x_min[19]   ,x_max[19]};    //19 r_B_DsK
double delta_Bs_DsK_range[2]      = {x_min[12]   ,x_max[12]};    //12 delta_Bs_DsK
double r_B_DK_range[2]            = {x_min[25]   ,x_max[25]};    //25 r_B_DK
double r_B_DKPiPi_range[2]        = {x_min[26]   ,x_max[26]};    //26 r_B_DKPiPi
double delta_B_DKPiPi_range[2]    = {x_min[10]   ,x_max[10]};    //10 delta_B_DKPiPi
double r_B_DKstar0_range[2]       = {x_min[18]   ,x_max[18]};    //18 k_B_DKstar0
double delta_B_DKstar0_range[2]   = {x_min[11]   ,x_max[11]};   //11 delta_B_DKstar0
double k_B_DKPiPi_range[2]        = {x_min[17]   ,x_max[17]};   //17 k_B_DKPiPi


/*
double delta_B_DstarK_range[2] = {x_min[32],x_max[32]};
double r_B_DstarK_range[2] = {x_min[33],x_max[33]};
double delta_B_DKstar_range[2] = {x_min[34],x_max[34]};
double r_B_DKstar_range[2] = {x_min[35],x_max[35]};
double k_B_DKstar_range[2] = {x_min[36],x_max[36]};
*/

// unknown
double Gamma = 0, delta_B_DK = 0, delta_Bs_DsK = 0, delta_B_DKPiPi = 0, delta_B_DKstar0 = 0,
  r_B_DK =0,      r_B_DsK = 0,      r_B_DKPiPi = 0,     r_B_DKstar0 = 0,  R_B_DKstar0 = 0,  Delta_B_DKstar0 = 0;

// inputs
double delta_D_KPi = 0, r_D_KPi = 0, xD = 0, yD = 0 , a_CP_dir_KK = 0, a_CP_dir_PiPi = 0; // HFAG
double R_WS_D_K3Pi =0 , R_D_KsKPi=0, R_WS_D_KPiPi0=0;

double k_D_K3Pi =0, delta_D_K3Pi =0, r_D_K3Pi = 0;         // External inputs from CLEO-c
double delta_D_KPiPi0 = 0, k_D_KPiPi0 = 0, r_D_KPiPi0 = 0;
double delta_D_KsKPi = 0, phi_s = 0;
double k_B_DKPiPi = 0;
double k_B_DKstar0 = 0;

double r_D_KsKPi = 0, k_D_KsKPi = 0;
double F_plus_KKPi0 = 0, F_plus_PiPiPi0 = 0, F_PiPiPiPi = 0;


// random variable
int jobpid = getpid();
TDatime * now = new TDatime();
int today = now->GetDate();
int clock = now->GetTime();
int rndSeed = today+clock+jobpid;
gsl_rng_default_seed = today+clock+jobpid;
ROOT::Math::Random<ROOT::Math::GSLRngMT> * myRandom = new ROOT::Math::Random<ROOT::Math::GSLRngMT>(rndSeed);
