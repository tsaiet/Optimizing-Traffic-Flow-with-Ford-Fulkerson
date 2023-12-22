cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17 CACHE STRING "C++ version selection")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(Ford_Fulkerson)

include_directories(/usr/include/python3.10)
include_directories(${Ford_Fulkerson_SOURCE_DIR}/includes)

set(
    CMAKE_LIBRARY_OUTPUT_DIRECTORY
    ${Ford_Fulkerson_SOURCE_DIR}/Ford_Fulkerson
)

find_package(pybind11 REQUIRED)
pybind11_add_module(Ford_Fulkerson ${Ford_Fulkerson_SOURCE_DIR}/includes/Pybind.cpp)

# instruction:
# cmake -B build
# cmake --build build
