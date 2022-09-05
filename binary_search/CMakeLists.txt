cmake_minimum_required(VERSION 3.14)
project(binary_search)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

set(Headers
    binary_search.hpp
)
set(Sources
    binary_search.cpp
    binary_search_test.cpp
)

enable_testing()

add_executable(
    binary_search_test
    ${Sources}
    ${Headers}
)
target_link_libraries(
    binary_search_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(binary_search_test)
