#include <cstdlib>
#include <iostream>

bool read_extrema(int* minimum, int* maximum) {
    // The original exercise uses zero as the starting value for both results.
    *minimum = 0;
    *maximum = 0;

    std::cout << "Enter nonnegative integers. Use a negative integer to finish.\n";
    for (unsigned long long item = 1; ; ++item) {
        int value = 0;
        std::cout << "Value " << item << ": ";
        if (!(std::cin >> value)) {
            return false;
        }
        if (value < 0) {
            return true;
        }
        if (value < *minimum) {
            *minimum = value;
        }
        if (value > *maximum) {
            *maximum = value;
        }
    }
}

int main() {
    int minimum = 0;
    int maximum = 0;
    if (!read_extrema(&minimum, &maximum)) {
        return EXIT_FAILURE;
    }

    std::cout << "Maximum: " << maximum << '\n'
              << "Minimum: " << minimum << '\n';
    return EXIT_SUCCESS;
}
