cmake_minimum_required(VERSION 3.26)
project(CryptoLib)

# GoogleTest requires at least C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

#Include the CryptoLib library
add_library(CryptoLib
        src/Caesar.cpp
        src/Substitution.cpp
        #Add other source files as you create them
)

# Include directories for CryptoLib
target_include_directories(CryptoLib PUBLIC include)

# Main Executable (if needed)
# add_executable(MyApp main.cpp)
# target_link_libraries(MyApp PRIVATE CryptoLib)

# Enable testing
enable_testing()

include(GoogleTest)

# Automatically discover and add test files
file(GLOB TEST_FILES tests/*Test.cpp)
foreach(TEST_FILE ${TEST_FILES})
    get_filename_component(TEST_NAME ${TEST_FILE} NAME_WE)
    add_executable(${TEST_NAME} ${TEST_FILE})
    target_link_libraries(${TEST_NAME} PRIVATE CryptoLib GTest::gtest_main)
    gtest_discover_tests(${TEST_NAME})
endforeach()


# Comments for add_executable section
# -----------------------------
# This section adds an executable named 'CaesarTest' for running tests.
# The source file 'tests/CaesarTest.cpp' contains the test cases.
# The executable is linked against the 'gtest_main' target, which includes the main function for running Google Test.
# GoogleTest library is used for testing.
# The 'gtest_discover_tests' function configures test discovery for 'CaesarTest'.
# -----------------------------