#include <vector>
#include <string>
#include <cmath>
#include <map>
#include "debug.hpp"
#include "equal_sides.hpp"

// https://www.codewars.com/kata/54e6533c92449cc251001667/cpp
int EqualSides(const std::vector<int> numbers) {
    int equal_sides = -1;
    int array_sum = 0;
    for (size_t i = 0; i < numbers.size(); i++) {
        array_sum += numbers[i];
    }
    int left_sum = 0;
    int right_sum = array_sum;
    // We can just adjust by the index element
    for (size_t i = 0; i < numbers.size(); i++) {
        right_sum -= numbers[i];
        if (left_sum == right_sum) {
            equal_sides = i;
            break;
        }
        // We need to adjust the left by this index element value before we iterate to the next
        left_sum += numbers[i];
    }
    return equal_sides;
};