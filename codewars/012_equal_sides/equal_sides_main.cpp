#include <iostream>
#include <vector>
#include "equal_sides.hpp"

int main() {
    const std::vector<int> input_1 = { 1,2,3,4,3,2,1 };
    int result = EqualSides(input_1);
    std::cout << "Result: " << result << std::endl;
    return 0;
}