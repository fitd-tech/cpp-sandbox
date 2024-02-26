#include <vector>
#include <string>
#include <cmath>
#include <map>
#include "debug.hpp"
#include "bouncing_balls.hpp"

// https://www.codewars.com/kata/5544c7a5cb454edb3c000047/cpp
int BouncingBalls::bouncingBalls(double h, double bounce, double window) {
    bool invalid_height = h <= 0;
    bool invalid_bounce = bounce <= 0 || bounce >= 1;
    bool invaild_window = window >= h;
    bool invalid_terms = invalid_height || invalid_bounce || invaild_window;
    if (invalid_terms) return -1;

    // Initial drop
    int ball_passes = 1;
    for (double i = h * bounce; i > window; i *= bounce) {
        ball_passes += 2;
    }
    return ball_passes;
};