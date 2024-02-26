#include <vector>
#include <string>
#include <cmath>
#include <map>
#include "debug.hpp"
#include "unique_in_order.hpp"

// https://www.codewars.com/kata/54e6533c92449cc251001667

std::vector<char> UniqueInOrder(const std::string& iterable) {
    std::vector<char> result = {};
    if (iterable.size() == 0) return result;
    result.push_back(iterable[0]);
    for (size_t i = 1; i < iterable.size(); i++) {
        if (result[result.size() - 1] != iterable[i]) {
            result.push_back(iterable[i]);
        }
    }
    return result;
};