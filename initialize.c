double param[N1DPLOT] = { -0.00156132, 0.00096233, 0.736551, 0.972317, 0.746927,
			  162.185, 188.364, 183.634, 21.1297, 137.15,
			  174.149, 333.227, 346.149, 64.7467, 0.338405,
			  0.801764, 0.975202, 0.962516, 0.957607, 0.517778,
			  -0.00778575, 0.0550268, 0.0590432, 0.0441666, 0.606793,
			  0.0977873, 0.077757, 0.241639, 0.00390364, 0.00637248,
			  1.86628,1.02227};



TString mode_to_str[NMODE];
mode_to_str[0]   =  "GAhh";
mode_to_str[1]   =  "ggsz";
mode_to_str[2]   =  "GAhhhh";
mode_to_str[3]   =  "ADhhpi0";
mode_to_str[4]   =  "GLS";
mode_to_str[5]   =  "GAKPiPiDhh";
mode_to_str[6]   =  "BsDsK";
mode_to_str[7]   =  "GABDKstar";
mode_to_str[8]   =  "ggszDKPi";
mode_to_str[9]   =  "ggszDKstar0";
mode_to_str[10]  =  "GBDstarKp";
mode_to_str[11]  =  "GABDKstarp";
mode_to_str[12]  =  "tot";

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
if(mode ==  mode_to_str[11])   modeNum=11;
if(mode ==  mode_to_str[12])   modeNum=12;

/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////// Plot definition //////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
TString var_to_str[N1DPLOT];
var_to_str[0]  = "a_CP_dir_KK";
var_to_str[1]  = "a_CP_dir_PiPi";
var_to_str[2]  = "F_plus_KKPi0";
var_to_str[3]  = "F_plus_PiPiPi0";
var_to_str[4]  = "F_PiPiPiPi";
var_to_str[5]  = "delta_D_K3Pi";
var_to_str[6]  = "delta_D_KPi";
var_to_str[7]  = "delta_D_KPiPi0";
var_to_str[8]  = "delta_D_KsKPi";
var_to_str[9]  = "delta_B_DK";
var_to_str[10] = "delta_B_DKPiPi";
var_to_str[11] = "delta_B_DKstar0";
var_to_str[12] = "delta_Bs_DsK";
var_to_str[13] = "gamma";
var_to_str[14] = "k_D_K3Pi";
var_to_str[15] = "k_D_KPiPi0";
var_to_str[16] = "k_D_KsKPi";
var_to_str[17] = "k_B_DKPiPi";
var_to_str[18] = "k_B_DKstar0";
var_to_str[19] = "r_B_DsK";
var_to_str[20] = "phi_s";
var_to_str[21] = "r_D_K3Pi";
var_to_str[22] = "r_D_KPi";
var_to_str[23] = "r_D_KPiPi0";
var_to_str[24] = "r_D_KsKPi";
var_to_str[25] = "r_B_DK";
var_to_str[26] = "r_B_DKPiPi";
var_to_str[27] = "r_B_DKstar0";
var_to_str[28] = "xD";
var_to_str[29] = "yD";
var_to_str[30] = "Delta_B_DKstar0";
var_to_str[31] = "R_B_DKstar0";

var_to_str[32] = "delta_B_DstarK";
var_to_str[33] = "r_B_DstarK";

var_to_str[34] = "delta_B_DKstar";
var_to_str[35] = "r_B_DKstar";
var_to_str[36] = "k_B_DKstar";


//var_to_str[30] = "R_WS_D_K3Pi";
//var_to_str[31] = "R_D_KsKPi";
//var_to_str[32] = "R_WS_D_KPiPi0";

//double x_min[N1DPLOT], x_max[N1DPLOT];
x_min[ 0 ]  = -0.012;    x_max[ 0 ] = 0.010;
x_min[ 1 ]  = -0.010;    x_max[ 1 ] = 0.013;
x_min[ 2 ]  =    0.3;    x_max[ 2 ] =  1.17;
x_min[ 3 ]  =   0.84;    x_max[ 3 ] =  1.10;
x_min[ 4 ]  =   0.55;    x_max[ 4 ] =  0.93;
x_min[ 5 ]  =      0;    x_max[ 5 ] =   360;
x_min[ 6 ]  =      0;    x_max[ 6 ] =   360;
x_min[ 7 ]  =      0;    x_max[ 7 ] =   360;
x_min[ 8 ]  =   -180;    x_max[ 8 ] =   180;
x_min[ 9 ]  =   -180;    x_max[ 9 ] =   180;
x_min[ 10 ] =      0;    x_max[ 10 ] =  360;
x_min[ 11 ] =    200;    x_max[ 11 ] =  580;
x_min[ 12 ] =    200;    x_max[ 12 ] =  580;
x_min[ 13 ] =   -180;    x_max[ 13 ] =  180;
x_min[ 14 ] =   -0.4;    x_max[ 14 ] = 1.05;
x_min[ 15 ] =    0.3;    x_max[ 15 ] =  1.3;
x_min[ 16 ] =      0;    x_max[ 16 ] =  2.0;
x_min[ 17 ] =      0;    x_max[ 17 ] = 10.0;
x_min[ 18 ] =   0.76;    x_max[ 18 ] = 1.16;
x_min[ 19 ] =      0;    x_max[ 19 ] =  2.0;
x_min[ 20 ] =    -18;    x_max[ 20 ] =   17;
x_min[ 21 ] =   0.05;    x_max[ 21 ] = 0.06;
x_min[ 22 ] =  0.056;    x_max[ 22 ] =0.062;
x_min[ 23 ] =  0.036;    x_max[ 23 ] =0.052;
x_min[ 24 ] =    0.5;    x_max[ 24 ] =  0.7;
x_min[ 25 ] =   0.05;    x_max[ 25 ] = 0.16;
if(mode != mode_to_str[8])
  { x_min[ 25 ] = 0.0;      x_max[ 25 ] = 0.2;}
if(mode == mode_to_str[4])
  { x_min[ 25 ] = 0.0;      x_max[ 25 ] = 1.0;}
x_min[ 26 ]      = 0;    x_max[ 26 ] = 0.34;
x_min[ 27 ]      = 0;    x_max[ 27 ] =  0.7;
x_min[ 28 ] = -0.008;    x_max[ 28 ] =0.016;
x_min[ 29 ] =-0.0006;    x_max[ 29 ] =0.014;
x_min[ 30 ] =   -50;     x_max[ 30 ] =   53;
x_min[ 31 ] =   0.0;     x_max[ 31 ] =  2.0;

//x_min[ 30 ] =  0.001;    x_max[ 30 ] = 0.005;
//x_min[ 31 ] =  0.0;      x_max[ 31 ] = 1.0;
//x_min[ 32 ] =  0.001;    x_max[ 32 ] = 0.0035;


gamma_range[0]             = x_min[13]; gamma_range[1]           = x_max[13];   //13 gamma
delta_B_DK_range[0]        = x_min[9] ; delta_B_DK_range[1]      = x_max[9];     //9 delta_B_DK
r_B_DsK_range[0]           = x_min[19]; r_B_DsK_range[1]         = x_max[19];    //19 r_B_DsK
delta_Bs_DsK_range[0]      = x_min[12]; delta_Bs_DsK_range[1]    = x_max[12];    //12 delta_Bs_DsK
r_B_DK_range[0]            = x_min[25]; r_B_DK_range[1]          = x_max[25];    //25 r_B_DK
r_B_DKPiPi_range[0]        = x_min[26]; r_B_DKPiPi_range[1]      = x_max[26];    //26 r_B_DKPiPi
delta_B_DKPiPi_range[0]    = x_min[10]; delta_B_DKPiPi_range[1]  = x_max[10];    //10 delta_B_DKPiPi
r_B_DKstar0_range[0]       = x_min[27]; r_B_DKstar0_range[1]     = x_max[27];    //18 k_B_DKstar0
delta_B_DKstar0_range[0]   = x_min[11]; delta_B_DKstar0_range[1] = x_max[11];   //11 delta_B_DKstar0
k_B_DKPiPi_range[0]        = x_min[17]; k_B_DKPiPi_range[1]      = x_max[17];   //17 k_B_DKPiPi

/*
// unknown
double gamma = 0, delta_B_DK = 0, delta_Bs_DsK = 0, delta_B_DKPiPi = 0, delta_B_DKstar0 = 0,
  r_B_DK =0,      r_B_DsK = 0,      r_B_DKPiPi = 0,     r_B_DKstar0 = 0;

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
*/

//0 a_CP_dir_KK
//1 a_CP_dir_PiPi
//2 F_plus_KKPi0
//3 F_plus_PiPiPi0
//4 F_PiPiPiPi
//5 delta_D_K3Pi
//6 delta_D_KPi
//7 delta_D_KPiPi0
//8 delta_D_KsKPi
//9 delta_B_DK
//10 delta_B_DKPiPi
//11 delta_B_DKstar0
//12 delta_Bs_DsK
//13 gamma
//14 k_D_K3Pi
//15 k_D_KPiPi0
//16 k_D_KsKPi
//17 k_B_DKPiPi
//18 k_B_DKstar0
//19 r_B_DsK
//20 phi_s
//21 r_D_K3Pi
//22 r_D_KPi
//23 r_D_KPiPi0
//24 r_D_KsKPi
//25 r_B_DK
//26 r_B_DKPiPi
//27 r_B_DKstar0
//28 xD
//29 yD

