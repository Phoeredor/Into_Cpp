#include <cstdlib>
#include <iostream>
#include <utility>

int main() {
    double lower_bound = 0.0;
    double upper_bound = 0.0;
    double number = 0.0;

    std::cout << "Enter two endpoints: ";
    if (!(std::cin >> lower_bound >> upper_bound)) {
        return EXIT_FAILURE;
    }
    if (lower_bound == upper_bound) {
        std::cout << "Enter two different endpoints.\a\n";
        return EXIT_SUCCESS;
    }
    if (lower_bound > upper_bound) {
        std::swap(lower_bound, upper_bound);
    }

    std::cout << "Interval: [" << lower_bound << ", " << upper_bound << "]\n"
              << "Enter a number to check: ";
    if (!(std::cin >> number)) {
        return EXIT_FAILURE;
    }

    // Both endpoints are included in the interval.
    if (number < lower_bound) {
        std::cout << "The number is below " << lower_bound << ".\n";
    } else if (number > upper_bound) {
        std::cout << "The number is above " << upper_bound << ".\a\n";
    } else {
        std::cout << "The number is inside the interval.\n";
    }

    return EXIT_SUCCESS;
}
