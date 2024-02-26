#include <iostream>
#include <vector>
#include "bouncing_balls.hpp"

int main() {
    int result = BouncingBalls::bouncingBalls(30, 0.66, 1.5);
    std::cout << "Result: " << result << std::endl;
    return 0;
}