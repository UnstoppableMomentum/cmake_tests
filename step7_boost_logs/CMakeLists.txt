cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set the project name
project(qqq)

find_package(Boost 1.54 COMPONENTS log REQUIRED)

# add the executable
add_executable(qqq main.cpp)
target_link_libraries(qqq ${Boost_LIBRARIES})
