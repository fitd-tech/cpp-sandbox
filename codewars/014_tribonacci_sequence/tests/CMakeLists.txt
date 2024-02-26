cmake_minimum_required(VERSION 3.14)
project(tribonacci_sequence_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/fa87209829d47f3fd7c6faf4e99d7d8799e3563d.zip
    DOWNLOAD_EXTRACT_TIMESTAMP true
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    tribonacci_sequence_test
    tribonacci_sequence_test.cpp
    ../tribonacci_sequence.cpp
    ../../../utility/debug.cpp
)
target_include_directories(tribonacci_sequence_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    tribonacci_sequence_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tribonacci_sequence_test)