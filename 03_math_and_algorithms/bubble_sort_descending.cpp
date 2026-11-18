#include <cstdlib>
#include <iostream>
#include <memory>
#include <new>
#include <utility>

void bubble_sort_descending(double* values, int size) {
    // Swap adjacent values when the larger one is on the right.
    for (int pass = 0; pass < size - 1; ++pass) {
        for (int index = 0; index < size - 1; ++index) {
            if (values[index] < values[index + 1]) {
                std::swap(values[index], values[index + 1]);
            }
        }
    }
}

int main() {
    int size = 0;

    std::cout << "Enter the number of values: ";
    if (!(std::cin >> size) || size < 0) {
        std::cerr << "Enter a nonnegative size.\n";
        return EXIT_FAILURE;
    }

    std::unique_ptr<double[]> values(new (std::nothrow) double[size]);
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

    bubble_sort_descending(values.get(), size);

    std::cout << "Values in descending order:\n";
    for (int index = 0; index < size; ++index) {
        std::cout << values[index] << '\n';
    }

    return EXIT_SUCCESS;
}
