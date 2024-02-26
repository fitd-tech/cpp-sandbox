#include <vector>
#include <string>
#include "debug.hpp"
#include "find_unique.hpp"

float FindUnique(std::vector<float> &v) {
    const std::vector<float> &input = v;
    float first_value = input[0];
    int first_value_count = 0;
    float second_value = 0;
    int second_value_count = 0;
    float result = 0;
    for (int i = 0; i < input.size(); i++) {
        bool both_values_present = first_value_count > 0 && second_value_count > 0;
        if (input[i] != first_value) {
            if (both_values_present) {
                result = first_value;
                break;
            }
            else if (first_value_count > 1) {
                result = input[i];
                break;
            }
            else second_value = input[i];
            second_value_count++;
        } else {
            if (both_values_present) {
                result = second_value;
                break;
            }
            first_value_count++;
        }
    }
    return result;
}