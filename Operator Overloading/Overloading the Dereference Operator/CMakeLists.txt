cmake_minimum_required(VERSION 3.21)
project(Overloading_the_Dereference_Operator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Overloading_the_Dereference_Operator
        Complex.cpp
        Complex.h
        "Overloading the Dereference Operator.cpp")
