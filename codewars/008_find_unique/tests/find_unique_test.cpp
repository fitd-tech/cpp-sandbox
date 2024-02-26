#include <gtest/gtest.h>
#include <vector>
#include "find_unique.hpp"

TEST(FindUniqueTest, CodewarsAssertions) {
    std::vector<float> input_1 = {1, 1, 1, 2, 1, 1};
    std::vector<float> input_2 = {0, 0, 0.55, 0, 0};
    std::vector<float> input_3 = {999.666,  999.666, 999.666, 999.666, 999.666, 999.666, 999.666, 999, 999.666};
    std::vector<float> input_4 = {1, 1, 1, 1, 1, 5};
    EXPECT_EQ(FindUnique(input_1), 2.f);
    EXPECT_EQ(FindUnique(input_2), 0.55f);
    EXPECT_EQ(FindUnique(input_3), 999.f);
    EXPECT_EQ(FindUnique(input_4), 5.f);
}