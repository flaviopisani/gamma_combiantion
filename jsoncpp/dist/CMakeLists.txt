include_directories(${CMAKE_SOURCE_SOURCE_DIR}/jsoncpp/dist)
link_directories(${CMAKE_SOURCE_SOURCE_DIR}/jsoncpp/dist)

add_library(libjsoncpp jsoncpp.cpp)
