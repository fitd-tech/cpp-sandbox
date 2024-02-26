cmake_minimum_required(VERSION 3.14)
project(find_unique_test)

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
    find_unique_test
    find_unique_test.cpp
    ../../../utility/debug.cpp
    ../find_unique.cpp
)
target_include_directories(find_unique_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    find_unique_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(find_unique_test)