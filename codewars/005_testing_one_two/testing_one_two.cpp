#include <vector>
#include <string>
#include "testing_one_two.hpp"

// https://en.wikipedia.org/wiki/Reference_%28C%2B%2B%29
std::vector<std::string> TestingOneTwo(const std::vector<std::string> &lines) {
    std::vector<std::string> result;
    for (int i = 0; i < lines.size(); i++) {
        int line_number = i + 1;
        result.push_back(std::to_string(line_number) + ": " + lines[i]);
    }
    return result;
}