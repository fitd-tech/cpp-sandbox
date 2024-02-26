#include <vector>
#include <string>
#include <cmath>
#include <map>
#include "debug.hpp"
#include "tribonacci_sequence.hpp"

// https://www.codewars.com/kata/55c04b4cc56a697bb0000048/cpp

std::vector<int> TribonacciSequence(std::vector<int> signature, int n) {
    std::vector<int> result = {};
    if (n == 0) return result;
    for (int i = 0; i < n; i++) {
        if (i < 3) {
            result.push_back(signature[i]);
        } else {
            int sum = result[i - 1] + result [i - 2] + result [i - 3];
            result.push_back(sum);
        }
    }
    return result;
};