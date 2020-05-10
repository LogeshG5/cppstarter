# Tests need to be added as executables first
add_executable(test_project test_main.cpp test_project.cpp)

# Prepare "Catch" library for other executables
add_library(Catch2::Catch IMPORTED INTERFACE)
target_include_directories(Catch2::Catch INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/extern)

# To add source inclues
target_include_directories(test_project PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)

# To add catch2/catch.hpp
target_link_libraries(test_project PRIVATE Catch2::Catch)


# I'm using C++17 in the test
target_compile_features(test_project PRIVATE cxx_std_17)


# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
add_test(NAME test_projecttest COMMAND test_project)  # Command can be a target
