#include <gtest/gtest.h>
#include <vector>
#include "sandbox.hpp"

TEST(Sandbox, CodewarsAssertions) {
    EXPECT_EQ(Sandbox(1), 1);
}