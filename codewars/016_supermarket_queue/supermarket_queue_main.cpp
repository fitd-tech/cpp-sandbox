#include <iostream>
#include <vector>
#include "supermarket_queue.hpp"

int main() {
    std::vector<int> input_1 = { 2, 2, 3, 3, 4, 4 };
    int input_2 = 3;
    long result = SupermarketQueue(input_1, input_2);
    std::cout << "result " << std::to_string(result) << std::endl;
    return 0;
}
