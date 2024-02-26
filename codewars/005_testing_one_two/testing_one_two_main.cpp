#include <iostream>
#include <vector>
#include "testing_one_two.hpp"

// https://www.codewars.com/kata/54bf85e3d5b56c7a05000cf9/cpp
int main() {
    std::vector<std::string> input = {"thing", "and", "another one"};
    std::vector<std::string> result = TestingOneTwo(input);
    std::cout << "Result: " << std::endl;
    for (int i = 0; i < input.size(); i++) {
        std::cout << input[i] << std::endl;
    }
    return 0;
}