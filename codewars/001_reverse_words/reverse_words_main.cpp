#include <iostream>
#include "reverse_words.hpp"

// https://www.codewars.com/kata/5259b20d6021e9e14c0010d4
int main() {
    std::string input = "Every single word in this input will be reversed when I run this program.";
    std::string result = reverse_words(input);
    std::cout << "Result: " << result << std::endl;

    return 0;
}