#include <cstdlib>
#include <iostream>

int main() {
    double first = 0.0;
    double second = 0.0;
    double third = 0.0;

    std::cout << "Enter the values of A, B, and C: ";
    if (!(std::cin >> first >> second >> third)) {
        return EXIT_FAILURE;
    }

    // The first approach identifies which inputs share the maximum.
    if (first == second && second == third) {
        std::cout << "All three numbers are equal.\a\n";
    } else if (first == second && first > third) {
        std::cout << "A and B share the maximum.\n";
    } else if (first == third && first > second) {
        std::cout << "A and C share the maximum.\n";
    } else if (second == third && second > first) {
        std::cout << "B and C share the maximum.\n";
    } else if (first > second && first > third) {
        std::cout << "A is the largest.\n";
    } else if (second > third) {
        std::cout << "B is the largest.\n";
    } else {
        std::cout << "C is the largest.\n";
    }

    // The second approach prints the value using its own comparisons.
    std::cout << "Maximum value: ";
    if (first >= second && first >= third) {
        std::cout << first << '\n';
    } else if (second >= third) {
        std::cout << second << '\n';
    } else {
        std::cout << third << '\n';
    }

    return EXIT_SUCCESS;
}
