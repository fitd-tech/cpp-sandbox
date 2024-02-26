#include <gtest/gtest.h>
#include <vector>
#include "tribonacci_sequence.hpp"

TEST(TribonacciSequence, CodewarsAssertions) {
    std::vector<int> input_1 = { 1, 1, 1 };
    std::vector<int> result_1 = { 1, 1, 1, 3, 5, 9, 17, 31, 57, 105 };
    std::vector<int> input_2 = { 0, 0, 1 };
    std::vector<int> result_2 = { 0,0,1,1,2,4,7,13,24,44 };
    std::vector<int> input_3 = { 0, 1, 1 };
    std::vector<int> result_3 = { 0,1,1,2,4,7,13,24,44,81 };
    std::vector<int> input_4 = { 1, 0, 0 };
    std::vector<int> result_4 = { 1, 0, 0, 1, 1, 2, 4, 7, 13, 24 };
    std::vector<int> input_5 = { 1, 2, 3 };
    std::vector<int> result_5 = { 1,2,3,6,11,20,37,68,125,230 };
    std::vector<int> input_6 = { 1, 2, 3 };
    std::vector<int> result_6 = { 1, 2 };
    std::vector<int> input_7 = { 1, 2, 2 };
    std::vector<int> result_7 = { };
    EXPECT_EQ(TribonacciSequence(input_1, 10), result_1);
    EXPECT_EQ(TribonacciSequence(input_2, 10), result_2);
    EXPECT_EQ(TribonacciSequence(input_3, 10), result_3);
    EXPECT_EQ(TribonacciSequence(input_4, 10), result_4);
    EXPECT_EQ(TribonacciSequence(input_5, 10), result_5);
    EXPECT_EQ(TribonacciSequence(input_6, 2), result_6);
    EXPECT_EQ(TribonacciSequence(input_7, 0), result_7);
}