#include <gtest/gtest.h>
#include "testing_one_two.hpp"

TEST(TestingOneTwo, CodewarsAssertions) {
    std::vector<std::string> input_1 = {};
    std::vector<std::string> input_2 = {"a", "b", "c"};
    std::vector<std::string> output_1 = {};
    std::vector<std::string> output_2 = {"1: a", "2: b", "3: c"};
    EXPECT_EQ(TestingOneTwo(input_1), output_1);
    EXPECT_EQ(TestingOneTwo(input_2), output_2);
}