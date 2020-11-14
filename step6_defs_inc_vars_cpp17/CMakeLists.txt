cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BIN_NAME test_logger)

# set the project name
project(${BIN_NAME})

add_definitions(-DLOG_LEVEL_DEBUG)

include_directories(${CMAKE_SOURCE_DIR}/../../logs)

set(SRC_LIST
        # base
        ${CMAKE_SOURCE_DIR}/main.cpp
        ${CMAKE_SOURCE_DIR}/test1.cpp
    )

add_executable(${BIN_NAME} ${SRC_LIST})
