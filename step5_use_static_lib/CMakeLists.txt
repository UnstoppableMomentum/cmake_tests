cmake_minimum_required(VERSION 3.10)

# set the project name
project(qqq)
include_directories("../step4_build_static_lib")
link_directories("${CMAKE_SOURCE_DIR}/../step4_build_static_lib")
# add the executable
add_executable(qqq main.cpp)

target_link_libraries(qqq my_lib)
