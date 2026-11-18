#include <cstdlib>
#include <iostream>
#include <utility>

int main() {
    constexpr int size = 12;
    int values[size] = {9, 8, 7, -6, 5, 4, 0, 2, -17, 0, -2, -5};

    // Move the smallest remaining value into the next unsorted position.
    for (int start = 0; start < size - 1; ++start) {
        int minimum_index = start;
        for (int index = start; index < size; ++index) {
            if (values[index] <= values[minimum_index]) {
                minimum_index = index;
            }
        }
        std::swap(values[start], values[minimum_index]);
    }

    for (int value : values) {
        std::cout << value << '\n';
    }

    return EXIT_SUCCESS;
}
