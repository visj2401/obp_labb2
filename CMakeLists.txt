cmake_minimum_required(VERSION 3.29)
project(obp_labb2)

set(CMAKE_CXX_STANDARD 20)

add_executable(obp_labb2 ptr_test.cpp
        linked_list.cpp
        linked_list.h
        pekare.cpp
        main.cpp)
