cmake_minimum_required(VERSION 2.8)

project(1d_schroedinger C)

# c standard
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# include dir
include_directories(${PROJECT_SOURCE_DIR}/include)

# Set source
add_subdirectory(src)
