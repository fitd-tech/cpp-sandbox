cmake_minimum_required(VERSION 3.14)
project(supermarket_queue_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/974e18ee6f146a2418f9cea83170c640e7d622d6.zip
    DOWNLOAD_EXTRACT_TIMESTAMP true
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    supermarket_queue_test
    supermarket_queue_test.cpp
    ../supermarket_queue.cpp
    ../../../utility/debug.cpp
)
target_include_directories(supermarket_queue_test PRIVATE
    ../
    ../../../utility
)
target_link_libraries(
    supermarket_queue_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(supermarket_queue_test)