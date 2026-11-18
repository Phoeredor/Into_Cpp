#include <cstdlib>
#include <iostream>

int main() {
    int year = 0;

    std::cout << "Enter a year: ";
    if (!(std::cin >> year)) {
        return EXIT_FAILURE;
    }

    // Century years are leap years only when they are divisible by 400.
    if (year <= 0) {
        std::cout << "The year must be positive.\a\n";
    } else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        std::cout << "It is a leap year.\n";
    } else {
        std::cout << "It is not a leap year.\n";
    }

    return EXIT_SUCCESS;
}
