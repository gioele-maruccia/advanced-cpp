cmake_minimum_required(VERSION 3.21)
project(Overloading_Comparison_Operator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Overloading_Comparison_Operator
        Complex.cpp
        Complex.h
        "Overloading Comparison Operators.cpp")
