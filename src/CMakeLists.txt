cmake_minimum_required(VERSION 3.22.1)

project(OfbToiletPaper)


set(SOURCES google/googleMapsApi.cpp main.cpp)

add_executable(OfbToiletPaper ${SOURCES})

target_include_directories(OfbToiletPaper PRIVATE ${SOURCES})

#install(TARGETS OfbToiletPaper DESTINATION bin)