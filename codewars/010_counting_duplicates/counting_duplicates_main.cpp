#include <iostream>
#include <vector>
#include "counting_duplicates.hpp"

int main() {
    const char* input = "mississippi";
    size_t result = CountingDuplicates(input);
    std::cout << "Result: " << result << std::endl;
    return 0;
}