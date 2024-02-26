cmake_minimum_required(VERSION 3.14)
project(testing_one_two_test)

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
    testing_one_two_test
    testing_one_two_test.cpp
    ../../../utility/debug.cpp
    ../testing_one_two.cpp
)
target_include_directories(testing_one_two_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    testing_one_two_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(testing_one_two_test)