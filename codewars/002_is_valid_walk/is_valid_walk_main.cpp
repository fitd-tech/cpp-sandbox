#include <iostream>
#include <vector>
#include "is_valid_walk.hpp"

// https://www.codewars.com/kata/54da539698b8a2ad76000228
int main() {
    std::cout << "Reticulating splines..." << std::endl;
    bool result = IsValidWalk({'x'});
    std::cout << "Result: " << result << std::endl;
    return 0;
}