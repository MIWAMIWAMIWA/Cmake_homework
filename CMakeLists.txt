cmake_minimum_required(VERSION 3.10)

#adding C and C++ languages
project(LibraryAdd C CXX)

#static library
add_library(math_static STATIC math_lib.c)

#dynamic library
add_library(math_dynamic SHARED math_lib.c)

#program with static lib
add_executable(test_app_static main.cpp)

target_link_libraries(test_app_static math_static)

#program with dynamic lib
add_executable(test_app_dynamic main.cpp)

target_link_libraries(test_app_dynamic math_dynamic)