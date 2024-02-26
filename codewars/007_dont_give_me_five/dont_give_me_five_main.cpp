#include <iostream>
#include <vector>
#include "dont_give_me_five.hpp"

// https://www.codewars.com/kata/5813d19765d81c592200001a/cpp
int main() {
    int start = -12;
    int end = 12;
    int result = DontGiveMeFive(start, end);
    std::cout << "Result: " << result << std::endl;
    return 0;
}