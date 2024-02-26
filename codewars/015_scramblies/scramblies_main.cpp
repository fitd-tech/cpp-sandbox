#include <iostream>
#include <vector>
#include "scramblies.hpp"

int main() {
    const std::string input_1 = "rkqodlw";
    const std::string input_2 = "world";
    bool result = Scramblies(input_1, input_2);
    std::cout << "result " << std::to_string(result) << std::endl;
    return 0;
}