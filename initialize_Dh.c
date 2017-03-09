double param[N1DPLOT] = { -0.00156435, 0.0011733, 0.737337, 0.972415, 0.744751, 0.0786506, 1.02381, 190.575, 188.037, 172.065, 19.849, 140.029, 355.394, 175.137, 349.531, 354.752, 348.514, 0.0146388, 71.8685, 0.355499, 0.819011, 0.965082, 0.957561, 0.958081, 1.49322, 0.511225, -0.00811618, 0.0553708, 0.0590227, 0.0437435, 0.606816, 0.0995611, 0.0791408, 0.19633, 0.0311344, 0.0637563, 0.003864, 0.00635571};

double param_GAhh[12] = { -0.00139528, 0.00131439, 0.0780194, 185.763, 55.5172, 353.609, 27.4416, 0.0590048, 0.152663, 0.107689, 0.00401568, 0.00620116};
  //-0.00166746,0.00107329,0.0779833,184.778,146.821,165.707,76.1521,0.0589739,0.106493,-0.0143756,0.00402954,0.00613597};



TString mode_to_str[NMODE];
mode_to_str[0]  =  "GAhh";
mode_to_str[1]  =  "ggsz";
mode_to_str[2]  =  "GAhhhh";
mode_to_str[3]  =  "ADhhpi0";
mode_to_str[4]  =  "GLS";
mode_to_str[5]  =  "GAKPiPiDhh";
mode_to_str[6]  =  "BsDsK";
mode_to_str[7]  =  "GABDKstar";
mode_to_str[8]  =  "ggszDKPi";
mode_to_str[9]  =  "ggszDKstar0";
mode_to_str[10]  =  "tot";

if(mode ==  mode_to_str[0])   modeNum=0;
if(mode ==  mode_to_str[1])   modeNum=1;
if(mode ==  mode_to_str[2])   modeNum=2;
if(mode ==  mode_to_str[3])   modeNum=3;
if(mode ==  mode_to_str[4])   modeNum=4;
if(mode ==  mode_to_str[5])   modeNum=5;
if(mode ==  mode_to_str[6])   modeNum=6;
if(mode ==  mode_to_str[7])   modeNum=7;
if(mode ==  mode_to_str[8])   modeNum=8;
if(mode ==  mode_to_str[9])   modeNum=9;
if(mode ==  mode_to_str[10])   modeNum=10;

/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////// Plot definition //////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
TString var_to_str[N1DPLOT];
var_to_str[0]  = "a_CP_dir_KK";
var_to_str[1]  = "a_CP_dir_PiPi";
var_to_str[2]  = "F_plus_KKPi0";
var_to_str[3]  = "F_plus_PiPiPi0";
var_to_str[4]  = "F_PiPiPiPi";
var_to_str[5]  = "RBR_DKDPi";
var_to_str[6]  = "R_B_DKstar0";
var_to_str[7]  = "delta_D_K3Pi";
var_to_str[8]  = "delta_D_KPi";
var_to_str[9]  = "delta_D_KPiPi0";
var_to_str[10] = "delta_D_KsKPi";
var_to_str[11] = "delta_B_DK";
var_to_str[12] = "delta_B_DKPiPi";
var_to_str[13] = "delta_B_DKstar0";
var_to_str[14] = "delta_B_DPi";
var_to_str[15] = "delta_B_DPiPiPi";
var_to_str[16] = "delta_Bs_DsK";
var_to_str[17] = "Delta_B_DKstar0";
var_to_str[18] = "gamma";
var_to_str[19] = "k_D_K3Pi";
var_to_str[20] = "k_D_KPiPi0";
var_to_str[21] = "k_D_KsKPi";
var_to_str[22] = "k_B_DKPiPi";
var_to_str[23] = "k_B_DKstar0";
var_to_str[24] = "k_B_DPiPiPi";
var_to_str[25] = "r_B_DsK";
var_to_str[26] = "phi_s";
var_to_str[27] = "r_D_K3Pi";
var_to_str[28] = "r_D_KPi";
var_to_str[29] = "r_D_KPiPi0";
var_to_str[30] = "r_D_KsKPi";
var_to_str[31] = "r_B_DK";
var_to_str[32] = "r_B_DKPiPi";
var_to_str[33] = "r_B_DKstar0";
var_to_str[34] = "r_B_DPi";
var_to_str[35] = "r_B_DPiPiPi";
var_to_str[36] = "xD";
var_to_str[37] = "yD";



TString var_to_str_GAhh[12];
var_to_str_GAhh[0]  = "a_CP_dir_KK";
var_to_str_GAhh[1]  = "a_CP_dir_PiPi";
var_to_str_GAhh[2]  = "RBR_DKDPi";
var_to_str_GAhh[3]  = "delta_D_KPi";
var_to_str_GAhh[4] = "delta_B_DK";
var_to_str_GAhh[5] = "delta_B_DPi";
var_to_str_GAhh[6] = "gamma";
var_to_str_GAhh[7] = "r_D_KPi";
var_to_str_GAhh[8] = "r_B_DK";
var_to_str_GAhh[9] = "r_B_DPi";
var_to_str_GAhh[10] = "xD";
var_to_str_GAhh[11] = "yD";


//var_to_str[30] = "R_WS_D_K3Pi";
//var_to_str[31] = "R_D_KsKPi";
//var_to_str[32] = "R_WS_D_KPiPi0";

//double x_min[N1DPLOT], x_max[N1DPLOT];
x_min[ 0 ]  = -0.012;    x_max[ 0 ]  = 0.010;
x_min[ 1 ]  = -0.010;    x_max[ 1 ]  = 0.013;
x_min[ 2 ]  =    0.3;    x_max[ 2 ]  =  1.17;
x_min[ 3 ]  =   0.84;    x_max[ 3 ]  =  1.10;
x_min[ 4 ]  =   0.55;    x_max[ 4 ]  =  0.93;
x_min[ 5 ]  =   0.07;    x_max[ 5 ]  =  0.083;
x_min[ 6 ]  =    0.5;    x_max[ 6 ]  =  1.5;
x_min[ 7 ]  =      0;    x_max[ 7 ]  =  360;
x_min[ 8 ]  =      0;    x_max[ 8 ]  =  360;
x_min[ 9 ]  =      0;    x_max[ 9 ]  =  360;
x_min[ 10 ] =   -180;    x_max[ 10]  =  180;
//x_min[ 11 ] =   -180;    x_max[ 11 ] =  180;
x_min[ 11 ] =     80;    x_max[ 11 ] =  170;
x_min[ 12 ] =      0;    x_max[ 12 ] =  360;
x_min[ 13 ] =      0;    x_max[ 13 ] =  360;
x_min[ 14 ] =    220;    x_max[ 14 ] =  360;
x_min[ 15 ] =      0;    x_max[ 15 ] =  360;
x_min[ 16 ] =      0;    x_max[ 16 ] =  360;
x_min[ 17 ] =   -50;     x_max[ 17 ] =   53;
//x_min[ 18 ] =   -180;    x_max[ 18 ] =  180;
x_min[ 18 ] =     20;    x_max[ 18 ] =  100;
x_min[ 19 ] =      0;    x_max[ 19 ] = 1.05;
x_min[ 20 ] =    0.3;    x_max[ 20 ] =  1.3;
x_min[ 21 ] =   0.36;    x_max[ 21 ] = 1.64;
x_min[ 22 ] =      0;    x_max[ 22 ] =  5.0;
x_min[ 23 ] =   0.76;    x_max[ 23 ] = 1.16;
x_min[ 24 ] =      0;    x_max[ 24 ] =  5.0;
x_min[ 25 ] =      0;    x_max[ 25 ] =  1.6;
x_min[ 26 ] =    -18;    x_max[ 26 ] =   17;
x_min[ 27 ] =   0.05;    x_max[ 27 ] = 0.06;
x_min[ 28 ] =  0.056;    x_max[ 28 ] =0.062;
x_min[ 29 ] =  0.036;    x_max[ 29 ] =0.052;
x_min[ 30 ] =   0.54;    x_max[ 30 ] = 0.66;
x_min[ 31 ] =   0.06;    x_max[ 31 ] = 0.14;
if(modeNum==0) x_max[ 31 ] = 0.2;

x_min[ 32 ]      = 0;    x_max[ 32 ] = 0.17;
x_min[ 33 ]      = 0;    x_max[ 33 ] = 0.45;
x_min[ 34 ]      = 0;    x_max[ 34 ] = 0.06;
x_min[ 35 ]      = 0;    x_max[ 35 ] = 0.13;
x_min[ 36 ] = -0.008;    x_max[ 36 ] =0.016;
x_min[ 37 ] =-0.0006;    x_max[ 37 ] =0.014;


gamma_range[0]             = x_min[18]; gamma_range[1]           = x_max[18];   //13 gamma
r_B_DsK_range[0]           = x_min[25]; r_B_DsK_range[1]         = x_max[25];    //19 r_B_DsK
delta_Bs_DsK_range[0]      = x_min[16]; delta_Bs_DsK_range[1]    = x_max[16];    //12 delta_Bs_DsK
r_B_DK_range[0]            = x_min[31]; r_B_DK_range[1]          = x_max[31];    //25 r_B_DK
delta_B_DK_range[0]        = x_min[11]; delta_B_DK_range[1]      = x_max[11];     //9 delta_B_DK
r_B_DKPiPi_range[0]        = x_min[32]; r_B_DKPiPi_range[1]      = x_max[32];    //26 r_B_DKPiPi
delta_B_DKPiPi_range[0]    = x_min[12]; delta_B_DKPiPi_range[1]  = x_max[12];    //10 delta_B_DKPiPi
r_B_DKstar0_range[0]       = x_min[33]; r_B_DKstar0_range[1]     = x_max[33];    //18 k_B_DKstar0
delta_B_DKstar0_range[0]   = x_min[13]; delta_B_DKstar0_range[1] = x_max[13];   //11 delta_B_DKstar0
k_B_DKPiPi_range[0]        = x_min[22]; k_B_DKPiPi_range[1]      = x_max[22];   //17 k_B_DKPiPi
r_B_DPi_range[0]           = x_min[34]; r_B_DPi_range[1]         = x_max[34];    //25 r_B_DPi
delta_B_DPi_range[0]       = x_min[14]; delta_B_DPi_range[1]     = x_max[14];    //9 delta_B_DPi
r_B_DPiPiPi_range[0]       = x_min[35]; r_B_DPiPiPi_range[1]     = x_max[35];    //25 r_B_DPi
delta_B_DPiPiPi_range[0]   = x_min[15]; delta_B_DPiPiPi_range[1] = x_max[15];    //9 delta_B_DPi
RBR_DKDPi_range[0]         = x_min[5];  RBR_DKDPi_range[1]       = x_max[5];  
k_B_DPiPiPi_range[0]       = x_min[24]; k_B_DPiPiPi_range[1]     = x_max[24];   //17 k_B_DKPiPi
r_D_KsKPi_range[0]         = x_min[30]; r_D_KsKPi_range[1]       = x_max[30];   
