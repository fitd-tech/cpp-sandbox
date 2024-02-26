#include <iostream>
#include <vector>
#include "unique_in_order.hpp"

int main() {
    const std::string input_1 = "AAAABBBCCDAABBB";
    std::vector<char> result = UniqueInOrder(input_1);
    const std::vector<int> input_2 = {1, 2, 3, 3};
    std::vector<int> result_2 = UniqueInOrder<int>(input_2);
    const std::string input_3 = "";
    std::vector<char> result_3 = UniqueInOrder(input_3);
    const std::string input_4 = "AA";
    std::vector<char> result_4 = UniqueInOrder(input_4);
    std::cout << "result ";
    for (auto const& element : result) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    std::cout << "result_2 ";
    for (auto const& element : result_2) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    std::cout << "result_3 ";
    for (auto const& element : result_3) {
       std::cout << element << " ";
    }
    std::cout << std::endl;
    std::cout << "result_4 ";
    for (auto const& element : result_4) {
       std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}