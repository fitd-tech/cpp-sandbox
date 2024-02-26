//https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp
#include <iostream>
#include <string>
#include <vector>
#include "debug.hpp"
#include "reverse_words.hpp"

// Solution function
std::string reverse_words(std::string str) {
    std::vector<char> str_copy;
    std::vector<char> word;
    for (int i = 0; i <= str.length(); i++) {
        int char_value = str[i];
        // Space is character value 32, end of string is character value 0
        if (char_value != 32 && char_value != 0) word.push_back(str[i]);
        else {
            // Pop the stored characters to reverse
            while (word.size() > 0) {
                char last_character = word.back();
                str_copy.push_back(last_character);
                word.pop_back();
            }
            // Only push a space if we're not at the end of the input
            if (char_value == 32) str_copy.push_back(32);
        }
    }
    // Allows us to convert a vector of characters to a string
    std::string str_copy_string(str_copy.begin(), str_copy.end());
    return str_copy_string;
}