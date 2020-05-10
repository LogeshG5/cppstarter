cmake_minimum_required(VERSION 3.11...3.16)

project(ProjectSingleTestable)

add_executable(ProjectSingleTestable project.cpp)
target_compile_features(ProjectSingleTestable PRIVATE cxx_std_17)

add_subdirectory(tests)