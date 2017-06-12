# DO NOT USE THIS MAKEFILE IS DEPRECATED USE CMAKE

CXX=g++48

root_flags:=$(shell root-config --libs --glibs --cflags --ldflags)

include_json:=$(dist/json/json/)

all: Dh DK

Dh:
	${CXX} -O2 -Wall -o gammaDK -I${PWD} -I${include_json} -Ldist-I/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/include -L/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/lib -lgsl -lRooFitCore -ljsoncpp -l RooFit ${root_flags} gamma.C

DK:
	${CXX} -O2 -Wall -o gammaDK -I${PWD} -I/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/include -L/cvmfs/lhcb.cern.ch/lib/lcg/external/GSL/1.10/x86_64-slc6-gcc48-opt/lib -lgsl -lRooFitCore -ljsoncpp -l RooFit ${root_flags} gamma.C
