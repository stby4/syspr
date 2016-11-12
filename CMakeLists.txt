cmake_minimum_required(VERSION 3.6)
project(syspr_test1_prepare)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.h main.c aufgabe5.h aufgabe5.c aufgabe1.c aufgabe1.h aufgabe2.c aufgabe2.h aufgabe3.c aufgabe3.h)
add_executable(syspr_test1_prepare ${SOURCE_FILES})