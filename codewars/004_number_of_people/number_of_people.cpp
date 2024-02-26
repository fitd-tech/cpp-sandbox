#include <vector>
#include "number_of_people.hpp"

// https://en.wikipedia.org/wiki/Reference_%28C%2B%2B%29
unsigned int NumberOfPeople(std::vector<std::pair<int, int>>& busStops) {
    unsigned int riders = 0;
    for (int i = 0; i < busStops.size(); i++) {
        riders += busStops[i].first;
        riders -= busStops[i].second;
    }
    return riders;
}