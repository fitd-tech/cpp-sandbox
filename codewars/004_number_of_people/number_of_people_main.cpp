#include <iostream>
#include <vector>
#include "number_of_people.hpp"

// https://www.codewars.com/kata/5648b12ce68d9daa6b000099/cpp
int main() {
    std::vector<std::pair<int, int>> input = {{1, 0}, {35, 23}, {11, 12}, {47, 23}, {23, 34}, {0, 20}, {50, 0}};
    unsigned int result = NumberOfPeople(input);
    std::cout << "Result: " << result << std::endl;
    return 0;
}