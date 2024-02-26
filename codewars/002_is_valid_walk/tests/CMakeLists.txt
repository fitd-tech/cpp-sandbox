cmake_minimum_required(VERSION 3.14)
project(is_valid_walk_test)

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
    is_valid_walk_test
    is_valid_walk_test.cpp
    ../../../utility/debug.cpp
    ../is_valid_walk.cpp
)
target_include_directories(is_valid_walk_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    is_valid_walk_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(is_valid_walk_test)