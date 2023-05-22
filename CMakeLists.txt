cmake_minimum_required(VERSION 3.5)

project(test1s LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(test1s main.cpp inout.h print.cpp read.cpp)
add_library(test1slib SHARED inout.h print.cpp read.cpp)
install(TARGETS test1s
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
