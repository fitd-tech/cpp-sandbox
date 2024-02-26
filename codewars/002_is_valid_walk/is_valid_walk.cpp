#include <iostream>
#include <vector>
#include "is_valid_walk.hpp"

bool IsValidWalk(std::vector<char> walk) {
    bool is_ten_steps = walk.size() == 10;
    if (is_ten_steps == false) return false;
    int north_steps = 0;
    int south_steps = 0;
    int west_steps = 0;
    int east_steps = 0;
    for (int i = 0; i < static_cast<int>(walk.size()); i++) {
        if (walk[i] == 'n') {
            north_steps++;
        }
        if (walk[i] == 's') {
            south_steps++;
        }
        if (walk[i] == 'w') {
            west_steps++;
        }
        if (walk[i] == 'e') {
            east_steps++;
        }
    }
    bool zero_sum_vertical = north_steps - south_steps == 0;
    bool zero_sum_horizontal = west_steps - east_steps == 0;
    return zero_sum_vertical && zero_sum_horizontal;
}