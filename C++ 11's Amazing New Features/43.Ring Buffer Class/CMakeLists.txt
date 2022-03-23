cmake_minimum_required(VERSION 3.21)
project(43_Ring_Buffer_Class)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(43_Ring_Buffer_Class
        "Ring Buffer.cpp"
        ring.h)
