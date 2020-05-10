cmake_minimum_required(VERSION 3.11...3.16)

project(ProjectSingle)

add_executable(ProjectSingle main.cpp)
target_compile_features(ProjectSingle PRIVATE cxx_std_17)

