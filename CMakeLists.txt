cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17 CACHE STRING "C++ version selection")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(Optimizing-Traffic-Flow-with-Ford-Fulkerson)

include_directories(/usr/include/python3.10)


find_package(pybind11 REQUIRED)
pybind11_add_module(_Ford_Fulkerson Ford_Fulkerson.cpp)

# instruction:
# cmake -B build
# cmake --build build
