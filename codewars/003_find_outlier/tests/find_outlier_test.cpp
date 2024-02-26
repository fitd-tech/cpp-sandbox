#include <gtest/gtest.h>
#include "find_outlier.hpp"

TEST(FindOutlier, CodewarsAssertions) {
    EXPECT_EQ(FindOutlier({2, 3, 4}), 3);
    EXPECT_EQ(FindOutlier({1, 2, 3}), 2);
    EXPECT_EQ(FindOutlier({4, 1, 3, 5, 9}), 4);
}