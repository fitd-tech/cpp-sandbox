#include <gtest/gtest.h>
#include <vector>
#include "unique_in_order.hpp"

TEST(UniqueInOrder, CodewarsAssertions) {
    const std::string& input_1 = "AAAABBBCCDAABBB";
    std::vector<char> result_1 = {'A', 'B', 'C', 'D', 'A', 'B'};
    const std::vector<int> input_2 = {1, 2, 3, 3};
    std::vector<int> result_2 = {1, 2, 3};
    EXPECT_EQ(UniqueInOrder(input_1), result_1);
    EXPECT_EQ(UniqueInOrder(input_2), result_2);
}