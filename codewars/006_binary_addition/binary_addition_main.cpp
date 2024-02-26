#include <iostream>
#include <vector>
#include "binary_addition.hpp"

// https://www.codewars.com/kata/551f37452ff852b7bd000139/cpp
int main() {
    uint64_t a = 1287329949086178712;
    uint64_t b = 10609053940357564664;
    uint64_t c = 2;
    uint64_t d = 2;
    std::string result = BinaryAddition(a, b);
    std::cout << "Result: " << result << std::endl;
    std::string result2 = BinaryAddition(c, d);
    std::cout << "Result2: " << result2 << std::endl;
    return 0;
}