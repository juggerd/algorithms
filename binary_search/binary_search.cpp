#include "binary_search.hpp"

std::size_t BinarySearch(const std::vector<int>& v, const int n) {
    for (std::size_t i = 0; i < v.size(); ++i) {
        if (v[i] == n) {
            return i;
        }
    }
    return -1;
}
