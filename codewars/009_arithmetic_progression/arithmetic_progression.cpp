#include <vector>
#include <string>
#include <cmath>
#include "debug.hpp"
#include "arithmetic_progression.hpp"

long ArithmeticProgression(std::vector<long> list) {
    long last_difference = 0;
    long missing_value;
    for (size_t i = 0; i < list.size(); i++) {
        long next_difference = list[i + 1] - list[i];
        if (last_difference != 0 && std::abs(next_difference) > std::abs(last_difference)) {
            missing_value = list[i] + last_difference;
            break;
        }
        else if (last_difference != 0 && std::abs(next_difference) < std::abs(last_difference)) {
            missing_value = list[i] - next_difference;
            break;
        }
        else last_difference = next_difference;
    }
    return missing_value;
}