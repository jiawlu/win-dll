cmake_minimum_required(VERSION 3.25)
project(hello VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(hello SHARED main.cpp)
# add_executable(hello main.cpp)
