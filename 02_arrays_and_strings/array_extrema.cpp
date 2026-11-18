#include <cstdlib>
#include <iostream>

int main() {
    constexpr int size = 10;
    const int values[size] = {-50, -50, 45, 17, -41, 0, 45, 19, -26, 45};
    int minimum_index = 0;
    int maximum_index = 0;

    // The inclusive comparisons keep the last index when an extreme repeats.
    for (int index = 1; index < size; ++index) {
        if (values[index] <= values[minimum_index]) {
            minimum_index = index;
        }
    }
    for (int index = 1; index < size; ++index) {
        if (values[index] >= values[maximum_index]) {
            maximum_index = index;
        }
    }

    std::cout << "Maximum: " << values[maximum_index] << '\n';
    std::cout << "Minimum: " << values[minimum_index] << '\n';

    // Scan again to report every occurrence, including repeated values.
    int minimum_count = 0;
    for (int index = 0; index < size; ++index) {
        if (values[index] == values[minimum_index]) {
            std::cout << "Minimum at index " << index << '\n';
            ++minimum_count;
        }
    }
    std::cout << "Minimum occurrences: " << minimum_count << '\n';

    int maximum_count = 0;
    for (int index = 0; index < size; ++index) {
        if (values[index] == values[maximum_index]) {
            std::cout << "Maximum at index " << index << '\n';
            ++maximum_count;
        }
    }
    std::cout << "Maximum occurrences: " << maximum_count << '\n';

    return EXIT_SUCCESS;
}
