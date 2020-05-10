# Tests need to be added as executables first
add_executable(testlib testmain.cpp testlib.cpp)

# Prepare "Catch" library for other executables
add_library(Catch2::Catch IMPORTED INTERFACE)
target_include_directories(Catch2::Catch INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/extern)

# To add catch2/catch.hpp
target_link_libraries(testlib PRIVATE Catch2::Catch)


# I'm using C++17 in the test
target_compile_features(testlib PRIVATE cxx_std_17)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(testlib PRIVATE app_library)


# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
add_test(NAME testlibtest COMMAND testlib)  # Command can be a target
