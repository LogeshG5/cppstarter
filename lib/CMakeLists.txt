
# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Optionally glob, but only for CMake 3.12 or later:
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "*.hpp")
#set(HEADER_LIST "${ModernCMakeExample_SOURCE_DIR}/include/modern/lib.hpp")

# Make an automatic library - will be static or dynamic based on user setting
add_library(app_library lib.cpp ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(app_library PUBLIC .)

# This depends on (header only) boost
target_link_libraries(app_library PRIVATE Boost::boost)

# All users of this library will need at least C++11
target_compile_features(app_library PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
source_group(TREE "${PROJECT_SOURCE_DIR}/lib" PREFIX "Header Files" FILES ${HEADER_LIST})
