cmake_minimum_required(VERSION 3.16.2 FATAL_ERROR)
project(MeinProject LANGUAGES CXX)

# Download and unpack googletest at configure time
#configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND "${CMAKE_COMMAND}" -G "${CMAKE_GENERATOR}" .
    WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/googletest"
)
execute_process(COMMAND "${CMAKE_COMMAND}" --build .
    WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/googletest"
)

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This adds the following targets:
# gtest, gtest_main, gmock and gmock_main
add_subdirectory("${GOOGLEPATH}/googletest"
                 "${CMAKE_BINARY_DIR}/googletest-build"
)

add_executable(testRunner HelloWorldTester.cpp)
target_link_libraries(testRunner gtest_main gmock_main)
