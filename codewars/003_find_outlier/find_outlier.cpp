#include <vector>
#include "find_outlier.hpp"

int FindOutlier(std::vector<int> arr) {
    int number_even = 0;
    int number_odd = 0;
    int last_even;
    int last_odd;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            number_even++;
            last_even = arr[i];
        } else {
            number_odd++;
            last_odd = arr[i];
        }
        if (number_even == 1 && number_odd > 1) {
            return last_even;
        }
        if (number_odd == 1 && number_even > 1) {
            return last_odd;
        }
    }
    return 0;
}