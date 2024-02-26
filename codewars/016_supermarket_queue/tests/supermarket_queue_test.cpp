#include <gtest/gtest.h>
#include <vector>
#include "supermarket_queue.hpp"

TEST(SupermarketQueue, CodewarsAssertions) {
    std::vector<int> input_1a = {};
    int input_1b = 1;
    std::vector<int> input_2a = { 1, 2, 3, 4 };
    int input_2b = 1;
    std::vector<int> input_3a = { 2, 2, 3, 3, 4, 4 };
    int input_3b = 2;
    std::vector<int> input_4a = { 1, 2, 3, 4, 5 };
    int input_4b =  100;
    EXPECT_EQ(SupermarketQueue(input_1a, input_1b), 0);
    EXPECT_EQ(SupermarketQueue(input_1a, input_1b), 10);
    EXPECT_EQ(SupermarketQueue(input_1a, input_1b), 9);
    EXPECT_EQ(SupermarketQueue(input_1a, input_1b), 5);
}
