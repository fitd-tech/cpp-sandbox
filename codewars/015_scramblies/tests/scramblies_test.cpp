#include <gtest/gtest.h>
#include <vector>
#include "scramblies.hpp"

TEST(Scramblies, CodewarsAssertions) {
    const std::string input_1a = "rkqodlw";
    const std::string input_1b = "world";
    const std::string input_2a = "cedewaraaossoqqyt";
    const std::string input_2b = "codewars";
    const std::string input_3a = "katas";
    const std::string input_3b = "steak";
    const std::string input_4a = "scriptjavx";
    const std::string input_4b = "javascript";
    const std::string input_5a = "scriptingjava";
    const std::string input_5b = "javascript";
    const std::string input_6a = "scriptsjava";
    const std::string input_6b = "javascript";
    const std::string input_7a = "javscripts";
    const std::string input_7b = "javascript";
    const std::string input_8a = "aabbcamaomsccdd";
    const std::string input_8b = "commas";
    const std::string input_9a = "commas";
    const std::string input_9b = "commas";
    const std::string input_10a = "sammoc";
    const std::string input_10b = "commas";
    EXPECT_EQ(Scramblies(input_1a, input_1b), true);
    EXPECT_EQ(Scramblies(input_2a, input_2b), true);
    EXPECT_EQ(Scramblies(input_3a, input_3b), false);
    EXPECT_EQ(Scramblies(input_4a, input_4b), false);
    EXPECT_EQ(Scramblies(input_5a, input_5b), true);
    EXPECT_EQ(Scramblies(input_6a, input_6b), true);
    EXPECT_EQ(Scramblies(input_7a, input_7b), false);
    EXPECT_EQ(Scramblies(input_8a, input_8b), true);
    EXPECT_EQ(Scramblies(input_9a, input_9b), true);
    EXPECT_EQ(Scramblies(input_10a, input_10b), true);
}