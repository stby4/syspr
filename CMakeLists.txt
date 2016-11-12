cmake_minimum_required(VERSION 3.6)
project(syspr_test1_prepare)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c aufgabe5.h aufgabe5.c main.h aufgabe1.c aufgabe1.h)
add_executable(syspr_test1_prepare ${SOURCE_FILES})