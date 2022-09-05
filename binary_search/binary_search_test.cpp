#include "binary_search.hpp"

#include <gtest/gtest.h>

TEST(BinarySearchTests, Test1)
{
    const std::vector<int> v{5,3,4,1,7,2,9};
    ASSERT_EQ(BinarySearch(v, 4), 1);
}
