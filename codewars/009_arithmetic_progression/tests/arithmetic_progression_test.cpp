#include <gtest/gtest.h>
#include <vector>
#include "arithmetic_progression.hpp"

TEST(ArithmeticProgression, CodewarsAssertions) {
    std::vector<long> input_1 = {1, 3, 5, 9, 11};
    std::vector<long> input_2 = {1, 5, 7, 9, 11};
    EXPECT_EQ(ArithmeticProgression(input_1), 7);
    EXPECT_EQ(ArithmeticProgression(input_2), 3);
}