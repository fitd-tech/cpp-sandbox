cmake_minimum_required(VERSION 3.14)
project(arithmetic_progression_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/837f2229a905f44678fd6dc9af83f9a9f08e4a8f.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    arithmetic_progression_test
    arithmetic_progression_test.cpp
    ../../../utility/debug.cpp
    ../arithmetic_progression.cpp
)
target_include_directories(arithmetic_progression_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    arithmetic_progression_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(arithmetic_progression_test)