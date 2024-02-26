cmake_minimum_required(VERSION 3.14)
project(unique_in_order_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/837f2229a905f44678fd6dc9af83f9a9f08e4a8f.zip
    DOWNLOAD_EXTRACT_TIMESTAMP true
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    unique_in_order_test
    unique_in_order_test.cpp
    ../../../utility/debug.cpp
    ../unique_in_order.cpp
)
target_include_directories(unique_in_order_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    unique_in_order_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unique_in_order_test)