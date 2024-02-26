cmake_minimum_required(VERSION 3.14)
project(equal_sides_test)

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
    equal_sides_test
    equal_sides_test.cpp
    ../../../utility/debug.cpp
    ../equal_sides.cpp
)
target_include_directories(equal_sides_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    equal_sides_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(equal_sides_test)