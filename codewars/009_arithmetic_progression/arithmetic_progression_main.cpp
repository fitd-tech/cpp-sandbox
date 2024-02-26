#include <iostream>
#include <vector>
#include "arithmetic_progression.hpp"

// https://www.codewars.com/kata/52de553ebb55d1fca3000371/cpp
int main() {
    std::vector<long> input = {-3, -8, -18};
    long result = ArithmeticProgression(input);
    std::cout << "Result: " << result << std::endl;
    return 0;
}