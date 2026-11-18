#include <cstdlib>
#include <iostream>

int main() {
    double mass = 0.0;

    std::cout << "Mass categories in kilograms\n"
              << "1. 0 to 50\n"
              << "2. Over 50 through 125\n"
              << "3. Over 125 through 200\n"
              << "4. Over 200\n"
              << "Enter a mass: ";
    if (!(std::cin >> mass)) {
        return EXIT_FAILURE;
    }

    // Each upper boundary belongs to the category that ends there.
    if (mass < 0) {
        std::cout << "Enter a nonnegative mass.\n";
    } else if (mass <= 50.0) {
        std::cout << "The mass is in category 1.\n";
    } else if (mass <= 125.0) {
        std::cout << "The mass is in category 2.\n";
    } else if (mass <= 200.0) {
        std::cout << "The mass is in category 3.\n";
    } else if (mass > 200.0) {
        std::cout << "The mass is in category 4.\n";
    }

    return EXIT_SUCCESS;
}
