cmake_minimum_required(VERSION 3.6)
project(Invoice-Maker)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Invoice.cpp Invoice.h README.md)
add_executable(Invoice-Maker ${SOURCE_FILES})