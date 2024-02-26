#include <gtest/gtest.h>
#include <vector>
#include "equal_sides.hpp"

TEST(EqualSides, CodewarsAssertions) {
    const std::vector<int> input_1 = { 1,2,3,4,3,2,1 };
    const std::vector<int> input_2 = { 1,100,50,-51,1,1 };
    const std::vector<int> input_3 = { 1,2,3,4,5,6 };
    const std::vector<int> input_4 = { 20,10,30,10,10,15,35 };
    const std::vector<int> input_5 = { 20,10,-80,10,10,15,35 };
    const std::vector<int> input_6 = { 10,-80,10,10,15,35,20 };
    const std::vector<int> input_7 = { 0,0,0,0,0 };
    const std::vector<int> input_8 = { -1,-2,-3,-4,-3,-2,-1 };
    EXPECT_EQ(EqualSides(input_1), 3);
    EXPECT_EQ(EqualSides(input_2), 1);
    EXPECT_EQ(EqualSides(input_3), -1);
    EXPECT_EQ(EqualSides(input_4), 3);
    EXPECT_EQ(EqualSides(input_5), 0);
    EXPECT_EQ(EqualSides(input_6), 6);
    EXPECT_EQ(EqualSides(input_7), 0);
    EXPECT_EQ(EqualSides(input_8), 3);
}