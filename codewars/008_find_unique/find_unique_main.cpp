#include <iostream>
#include <vector>
#include "find_unique.hpp"

// https://www.codewars.com/kata/585d7d5adb20cf33cb000235/cpp
int main() {
    std::vector<float> input = {0, 0, 0, 5};
    float result = FindUnique(input);
    std::cout << "Result: " << result << std::endl;
    return 0;
}