cmake_minimum_required(VERSION 3.14)
project(number_of_people_test)

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
    number_of_people_test
    number_of_people_test.cpp
    ../../../utility/debug.cpp
    ../number_of_people.cpp
)
target_include_directories(number_of_people_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    number_of_people_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(number_of_people_test)