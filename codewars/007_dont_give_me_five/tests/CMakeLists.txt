cmake_minimum_required(VERSION 3.14)
project(dont_give_me_five_test)

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
    dont_give_me_five_test
    dont_give_me_five_test.cpp
    ../../../utility/debug.cpp
    ../dont_give_me_five.cpp
)
target_include_directories(dont_give_me_five_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    dont_give_me_five_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(dont_give_me_five_test)