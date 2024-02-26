#include <vector>
#include <string>
#include <bitset>
#include "debug.hpp"
#include "binary_addition.hpp"

std::string BinaryAddition(uint64_t a, uint64_t b) {
    uint64_t sum = a + b;
    if (sum == 0) return "0";
    std::string full_binary_result = std::bitset<64>(sum).to_string();
    int string_length = full_binary_result.length();
    std::string result = "";
    for (int i = 0; i < string_length; i++) {
        if (full_binary_result[i] == '0') continue;
        result = full_binary_result.substr(i, string_length - i);
        break;
    }
    return result;
}