#include <cstdlib>
#include <iostream>
#include <memory>
#include <new>
#include <utility>

void bubble_sort(int* values, int size) {
    for (int pass = 0; pass < size - 1; ++pass) {
        for (int index = 0; index < size - 1; ++index) {
            if (values[index] > values[index + 1]) {
                std::swap(values[index], values[index + 1]);
            }
        }
    }
}

bool contains(const int* values, int size, int target) {
    int lower = 0;
    int upper = size - 1;

    // Reject an empty interval before accessing its midpoint.
    while (lower <= upper) {
        const int middle = lower + (upper - lower) / 2;
        if (values[middle] == target) {
            return true;
        }
        if (values[middle] > target) {
            upper = middle - 1;
        } else {
            lower = middle + 1;
        }
    }

    return false;
}

int main() {
    int size = 0;

    std::cout << "Enter the number of values: ";
    if (!(std::cin >> size) || size < 0) {
        std::cerr << "Enter a nonnegative size.\n";
        return EXIT_FAILURE;
    }

    std::unique_ptr<int[]> values(new (std::nothrow) int[size]);
    if (!values) {
        std::cerr << "Unable to allocate the array.\n";
        return EXIT_FAILURE;
    }

    std::cout << "Enter the values:\n";
    for (int index = 0; index < size; ++index) {
        if (!(std::cin >> values[index])) {
            return EXIT_FAILURE;
        }
    }
    bubble_sort(values.get(), size);

    int target = 0;
    std::cout << "Enter the value to find: ";
    if (!(std::cin >> target)) {
        return EXIT_FAILURE;
    }

    const bool found = contains(values.get(), size, target);
    std::cout << (found ? "Value found.\n" : "Value not found.\n");
    return EXIT_SUCCESS;
}
