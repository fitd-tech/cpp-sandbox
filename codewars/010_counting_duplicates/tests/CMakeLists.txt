cmake_minimum_required(VERSION 3.14)
project(counting_duplicates_test)

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
    counting_duplicates_test
    counting_duplicates_test.cpp
    ../../../utility/debug.cpp
    ../counting_duplicates.cpp
)
target_include_directories(counting_duplicates_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    counting_duplicates_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(counting_duplicates_test)