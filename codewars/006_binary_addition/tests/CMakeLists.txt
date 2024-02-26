cmake_minimum_required(VERSION 3.14)
project(binary_addition_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    binary_addition_test
    binary_addition_test.cpp
    ../../../utility/debug.cpp
    ../binary_addition.cpp
)
target_include_directories(binary_addition_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    binary_addition_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(binary_addition_test)