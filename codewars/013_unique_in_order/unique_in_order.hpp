#ifndef UNIQUE_IN_ORDER
#define UNIQUE_IN_ORDER

#include <vector>

template <typename T> std::vector<T> UniqueInOrder(const std::vector<T>& iterable) {
    std::vector<T> result = {};
    if (iterable.size() == 0) return result;
    result.push_back(iterable[0]);
    for (size_t i = 1; i < iterable.size(); i++) {
        if (result[result.size() - 1] != iterable[i]) {
            result.push_back(iterable[i]);
        }
    }
    return result;
};

std::vector<char> UniqueInOrder(const std::string& iterable);

#endif