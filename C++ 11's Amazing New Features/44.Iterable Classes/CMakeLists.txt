cmake_minimum_required(VERSION 3.21)
project(44_Iterable_Classes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(44_Iterable_Classes
        "Ring Buffer.cpp"
        ring.h)
