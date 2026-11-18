#include <cstdlib>
#include <iostream>
#include <new>
#include <stdexcept>
#include <utility>
#include <vector>

void bubble_sort(std::vector<int>& values) {
    // Binary search needs ascending input, so sort adjacent pairs first.
    for (std::vector<int>::size_type pass = 1; pass < values.size(); ++pass) {
        for (std::vector<int>::size_type index = 0; index + 1 < values.size(); ++index) {
            if (values[index] > values[index + 1]) {
                std::swap(values[index], values[index + 1]);
            }
        }
    }
}

int binary_search_index(const std::vector<int>& values, int target) {
    int lower = 0;
    int upper = static_cast<int>(values.size()) - 1;

    while (lower <= upper) {
        const int middle = lower + (upper - lower) / 2;
        if (values[middle] == target) {
            return middle;
        }
        if (values[middle] > target) {
            upper = middle - 1;
        } else {
            lower = middle + 1;
        }
    }

    return -1;
}

int main() {
    int size = 0;

    std::cout << "Enter the number of values: ";
    if (!(std::cin >> size) || size < 0) {
        std::cerr << "Enter a nonnegative size.\n";
        return EXIT_FAILURE;
    }

    std::vector<int> values;
    try {
        values.resize(size);
    } catch (const std::bad_alloc&) {
        std::cerr << "Unable to allocate the array.\n";
        return EXIT_FAILURE;
    } catch (const std::length_error&) {
        std::cerr << "The array size exceeds the supported range.\n";
        return EXIT_FAILURE;
    }

    std::cout << "Enter the values:\n";
    for (int& value : values) {
        if (!(std::cin >> value)) {
            return EXIT_FAILURE;
        }
    }
    bubble_sort(values);

    int target = 0;
    std::cout << "Enter the value to find: ";
    if (!(std::cin >> target)) {
        return EXIT_FAILURE;
    }

    const int index = binary_search_index(values, target);
    if (index < 0) {
        std::cout << "Value not found.\n";
    } else {
        std::cout << "Found at sorted index " << index << ".\n";
    }

    return EXIT_SUCCESS;
}
