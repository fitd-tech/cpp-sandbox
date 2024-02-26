#include <gtest/gtest.h>
#include <vector>
#include "bouncing_balls.hpp"

TEST(BouncingBalls, CodewarsAssertions) {
    EXPECT_EQ(BouncingBalls::bouncingBalls(3, 0.66, 1.5), 3);
    EXPECT_EQ(BouncingBalls::bouncingBalls(30, 0.66, 1.5), 15);
}