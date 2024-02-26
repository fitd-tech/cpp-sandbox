cmake_minimum_required(VERSION 3.14)
project(scramblies_test)

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
    scramblies_test
    scramblies_test.cpp
    ../scramblies.cpp
    ../../../utility/debug.cpp
)
target_include_directories(scramblies_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    scramblies_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(scramblies_test)