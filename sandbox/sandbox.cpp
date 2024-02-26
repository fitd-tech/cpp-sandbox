#include <vector>
#include <string>
#include <cmath>
#include "debug.hpp"
#include "sandbox.hpp"

int Sandbox(int input) {
    int x = 4;
    int * pX = &x;
    int y = *pX;

    return input;
}