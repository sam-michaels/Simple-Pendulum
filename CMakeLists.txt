cmake_minimum_required(VERSION 3.27)
project(Simple_Pendulum)

set(CMAKE_CXX_STANDARD 23)

add_executable(Simple_Pendulum main.cpp
        pendulum.cpp
        pendulum.h
)
