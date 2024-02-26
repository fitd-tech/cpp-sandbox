cmake_minimum_required(VERSION 3.14)
project(bouncing_balls_test)

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
    bouncing_balls_test
    bouncing_balls_test.cpp
    ../../../utility/debug.cpp
    ../bouncing_balls.cpp
)
target_include_directories(bouncing_balls_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    bouncing_balls_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(bouncing_balls_test)