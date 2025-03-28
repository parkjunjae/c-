# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.30)

project(c++_pra)

set(CMAKE_CXX_STANDARD 20)

add_executable(c++_pra
        point_hiding/main.cpp
        point_hiding/main.h
        encap/main.h
        encap/main.cpp
)

# Add tasks subprojects
