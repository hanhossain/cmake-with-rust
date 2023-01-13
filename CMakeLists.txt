cmake_minimum_required(VERSION 3.24)
project(cmake_with_rust)

set(CMAKE_CXX_STANDARD 23)

add_executable(cmake_with_rust main.cpp User.cpp User.h)
