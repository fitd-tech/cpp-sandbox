#include <gtest/gtest.h>
#include "number_of_people.hpp"

TEST(NumberOfPeople, CodewarsAssertions) {
    std::vector<std::pair<int, int>> input_1 = {{10, 0}, {3, 5}, {5, 8}};
    std::vector<std::pair<int, int>> input_2 = {{3, 0}, {9, 1}, {4, 10}, {12, 2}, {6, 1}, {7, 10}};
    std::vector<std::pair<int, int>> input_3 = {{3, 0}, {9, 1}, {4, 8}, {12, 2}, {6, 1}, {7, 8}};
    std::vector<std::pair<int, int>> input_4 = {{0, 0}};
    std::vector<std::pair<int, int>> input_5 = {{10, 0}, {13, 0}, {17, 40}};
    EXPECT_EQ(NumberOfPeople(input_1), 5);
    EXPECT_EQ(NumberOfPeople(input_2), 17);
    EXPECT_EQ(NumberOfPeople(input_3), 21);
    EXPECT_EQ(NumberOfPeople(input_4), 0);
    EXPECT_EQ(NumberOfPeople(input_5), 0);
}