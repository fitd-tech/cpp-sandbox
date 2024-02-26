#include <gtest/gtest.h>
#include "dont_give_me_five.hpp"

TEST(DontGiveMeFiv_CodewarsAssertions_Test, CodewarsAssertions) {
    EXPECT_EQ(DontGiveMeFive(1, 9), 8);
    EXPECT_EQ(DontGiveMeFive(4, 17), 12);
    EXPECT_EQ(DontGiveMeFive(-12, 12), 23);
}