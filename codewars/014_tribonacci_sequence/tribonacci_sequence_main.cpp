#include <iostream>
#include <vector>
#include "tribonacci_sequence.hpp"

int main() {
    std::vector<int> input_1 = { 1, 1, 1 };
    std::vector<int> result = TribonacciSequence(input_1, 10);
    std::cout << "result ";
    for (auto const& element : result) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}