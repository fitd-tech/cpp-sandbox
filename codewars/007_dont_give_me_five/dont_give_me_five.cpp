#include <vector>
#include <string>
#include "debug.hpp"
#include "dont_give_me_five.hpp"

int DontGiveMeFive(int start, int end) {
    int fiveless_count = 0;
    for (int i = start; i <= end; i++) {
        std::string empty_string = {};
        int current_number = i;
        bool is_fiveless = true;
        while (current_number != 0) {
            int remainder = current_number % 10;
            if (remainder == 5 || remainder == -5) {
                is_fiveless = false;
                break;
            }
            current_number = current_number / 10;
        }
        if (is_fiveless) fiveless_count++;
    }
    return fiveless_count;
}