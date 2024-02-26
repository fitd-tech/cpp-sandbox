#include <gtest/gtest.h>
#include "binary_addition.hpp"

TEST(BinaryAddition, CodewarsAssertions) {
    EXPECT_EQ(BinaryAddition(1, 1), "10");
    EXPECT_EQ(BinaryAddition(0, 1), "1");
    EXPECT_EQ(BinaryAddition(1, 0), "1");
    EXPECT_EQ(BinaryAddition(2, 2), "100");
    EXPECT_EQ(BinaryAddition(51, 12), "111111");
    EXPECT_EQ(BinaryAddition(0, 0), "0");
}