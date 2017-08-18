list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -g")

# Cint Reflex genmap Cintex Rint Thread New rootcint rlibmap Core rmkdepend MathCore MathMore Matrix Minuit Minuit2 Fumili Physics MLP Quadp Foam Smatrix SPlot GenVector Genetic Unuran Hist HistPainter Spectrum SpectrumPainter Hbook Tree TreePlayer TreeViewer RIO SQLIO XMLIO XMLParser Net RootAuth Krb5Auth Netx SrvAuth RDAVIX NetxNG RHTTP Gpad Graf Postscript mathtext GX11 GX11TTF ASImage ASImageGui FITSIO Graf3d X3d Eve RGL GLEW FTGL Gviz3d Gui Ged FitPanel GuiBld GuiHtml Recorder SessionViewer Proof ProofPlayer ProofDraw ProofBench proofd xproofd XrdProofd Proofx Html EG VMC Geom GeomBuilder GeomPainter Gdml root minicern MemStat Table rootn.exe roots.exe ssh2rpd root.exe proofserv.exe hadd g2root h2root PyROOT TMVA RooFitCore RooFit RooStats HistFactory hist2workspace
find_package(ROOT REQUIRED Minuit MathMore RooFitCore RooFit)
find_package(GSL REQUIRED)

add_subdirectory(jsoncpp/dist)

include_directories(${ROOT_INCLUDE_DIRS})
include_directories(${GSL_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(gamma_lib STATIC function.cpp functions_dmix_th.cpp measures_classes.cpp assign_from_classes.cpp)
target_link_libraries(gamma_lib ${ROOT_LIBRARIES} libjsoncpp)

add_executable(gamma gamma.C)
add_executable(gamma_tot gamma_tot.C)

target_link_libraries(gamma gamma_lib ${GSL_LIBRARIES})
target_link_libraries(gamma_tot gamma_lib ${GSL_LIBRARIES})


