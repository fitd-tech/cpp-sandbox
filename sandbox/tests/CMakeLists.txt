cmake_minimum_required(VERSION 3.14)
project(sandbox_test)

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
    sandbox_test
    sandbox_test.cpp
    ../../utility/debug.cpp
    ../sandbox.cpp
)
target_include_directories(sandbox_test PRIVATE
    ../
    ../../utility
)
target_link_libraries(
    sandbox_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(sandbox_test)