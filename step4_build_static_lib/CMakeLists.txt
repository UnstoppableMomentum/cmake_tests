cmake_minimum_required(VERSION 3.10)

# set the project name
project(my_lib)

# add the executable
add_library(my_lib SHARED mylib.cpp)

install(TARGETS my_lib DESTINATION bin)
