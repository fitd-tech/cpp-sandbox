#include <iostream>
#include <vector>
#include "find_outlier.hpp"

// https://www.codewars.com/kata/5526fc09a1bbd946250002dc
int main() {
    int result = FindOutlier({1, 2, 3, 5, 7, 9});
    std::cout << "Result: " << result << std::endl;
    return 0;
}