#include <algorithm>
#include <cstdlib>
#include <iostream>

int main() {
    int first_bound = 0;
    int second_bound = 0;

    std::cout << "Enter the first integer: ";
    if (!(std::cin >> first_bound)) {
        return EXIT_FAILURE;
    }
    std::cout << "Enter the second integer: ";
    if (!(std::cin >> second_bound)) {
        return EXIT_FAILURE;
    }

    if (first_bound == second_bound) {
        // The original exercise displayed this warning for nonzero bounds.
        if (first_bound != 0) {
            std::cout << "Enter two different bounds.\a\n";
        }
        return EXIT_SUCCESS;
    }

    // The original loop starts at zero and uses the larger input as its limit.
    const int upper_bound = std::max(first_bound, second_bound);
    for (long long number = 0; number <= upper_bound; ++number) {
        std::cout << number << "__Hello\n";
    }

    return EXIT_SUCCESS;
}
