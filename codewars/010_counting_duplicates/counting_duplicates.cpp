#include <vector>
#include <string>
#include <cmath>
#include <map>
#include "debug.hpp"
#include "counting_duplicates.hpp"

// https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/cpp
size_t CountingDuplicates(const char* in) {
    std::string character_reference = "Aa0";
    int uppercase_alpha = character_reference[0];
    int lowercase_alpha = character_reference[1];
    int alpha_offset = lowercase_alpha - uppercase_alpha;
    int zero_character = character_reference[2];
    const int NUMBER_SPAN = 9;
    std::map<int, bool> character_log;
    std::map<int, bool> duplicates;
    for (char c = *in; c; c = *++in) {
        int normalized_character_value = 0;
        if (c >= zero_character && c <= zero_character + NUMBER_SPAN) {
            normalized_character_value = c;
        }
        if (c >= lowercase_alpha && c <= (lowercase_alpha + 25)) {
            normalized_character_value = c - alpha_offset;
        }
        if (c >= uppercase_alpha && c <= (uppercase_alpha + 25)) {
            normalized_character_value = c;
        }
        if (character_log[normalized_character_value] == true) {
            duplicates[normalized_character_value] = true;
        } else if (normalized_character_value != 0) {
            character_log[normalized_character_value] = true;
        }
    }
    return duplicates.size();
}