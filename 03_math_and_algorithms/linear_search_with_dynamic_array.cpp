#include <cstdlib>
#include <iostream>
#include <memory>
#include <new>

bool contains(const int* values, int size, int target) {
    // A linear scan can stop as soon as the target appears.
    for (int index = 0; index < size; ++index) {
        if (values[index] == target) {
            return true;
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

    int target = 0;
    std::cout << "Enter the value to find: ";
    if (!(std::cin >> target)) {
        return EXIT_FAILURE;
    }

    const bool found = contains(values.get(), size, target);
    std::cout << (found ? "Value found.\n" : "Value not found.\n");
    return EXIT_SUCCESS;
}
