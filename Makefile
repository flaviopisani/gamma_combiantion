CXX=g++48

all:
#	${CXX} -O2 -Wall -o gammaGrid -I${PWD} -I${ROOTSYS}/include -L${ROOTSYS}/lib -lNet -lCint -lThread -ldl -lMatrix -lMathMore -lHist -lTree -lRIO -lMathCore -lCore gammaGrid.C
	${CXX} -O2 -Wall -o gammaDK -I${PWD} -I/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/include -I${ROOTSYS}/include -L${ROOTSYS}/lib -L/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/lib -lNet -lCint -lThread -ldl -lMatrix -lMathMore -lHist -lTree -lRIO -lMathCore -lCore -lMinuit -lgsl -lRooFitCore -l RooFit gamma.C
	${CXX} -O2 -Wall -o gammaDh -I${PWD} -I/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/include -I${ROOTSYS}/include -L${ROOTSYS}/lib -L/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/lib -lNet -lCint -lThread -ldl -lMatrix -lMathMore -lHist -lTree -lRIO -lMathCore -lCore -lMinuit -lgsl -lRooFitCore -l RooFit gamma_Dh.C
#	${CXX} -O2 -Wall -o gammaNEW -I${PWD} -I${ROOTSYS}/include -L${ROOTSYS}/lib -lNet -lCint -lThread -ldl -lMatrix -lMathMore -lHist -lTree -lRIO -lMathCore -lCore gammaNEW.C

Dh:
	${CXX} -O2 -Wall -o gammaDh -I${PWD} -I/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/include -I${ROOTSYS}/include -L${ROOTSYS}/lib -L/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/lib -lNet -lCint -lThread -ldl -lMatrix -lMathMore -lHist -lTree -lRIO -lMathCore -lCore -lMinuit -lgsl -lRooFitCore -l RooFit gamma_Dh.C

DK:
	${CXX} -O2 -Wall -o gammaDK -I${PWD} -I/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/include -I${ROOTSYS}/include -L${ROOTSYS}/lib -L/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/lib -lNet -lCint -lThread -ldl -lMatrix -lMathMore -lHist -lTree -lRIO -lMathCore -lCore -lMinuit -lgsl -lRooFitCore -l RooFit gamma.C