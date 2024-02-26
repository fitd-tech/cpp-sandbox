#include <gtest/gtest.h>
#include <vector>
#include "counting_duplicates.hpp"

TEST(CountingDuplicates, CodewarsAssertions) {
    const char * input_1 = " ";
    const char * input_2 = "";
    const char * input_3 = "aabbcde";
    const char * input_4 = "aabBcde";
    const char * input_5 = "Indivisibility";
    const char * input_6 = "Indivisibilities";
    const char * input_7 = "ABBA";
    const char * input_8 = "mississippi";
    EXPECT_EQ(CountingDuplicates(input_1), 0);
    EXPECT_EQ(CountingDuplicates(input_2), 0);
    EXPECT_EQ(CountingDuplicates(input_3), 2);
    EXPECT_EQ(CountingDuplicates(input_4), 2);
    EXPECT_EQ(CountingDuplicates(input_5), 1);
    EXPECT_EQ(CountingDuplicates(input_6), 2);
    EXPECT_EQ(CountingDuplicates(input_7), 2);
    EXPECT_EQ(CountingDuplicates(input_8), 3);
}