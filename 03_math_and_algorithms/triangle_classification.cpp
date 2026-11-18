#include <cstdlib>
#include <iostream>

int main() {
    double first_side = 0.0;
    double second_side = 0.0;
    double third_side = 0.0;

    std::cout << "Enter three side lengths: ";
    if (!(std::cin >> first_side >> second_side >> third_side)) {
        return EXIT_FAILURE;
    }

    // The original condition accepts the lengths when any one inequality passes.
    const bool passes_original_check = first_side < second_side + third_side ||
                                       second_side < first_side + third_side ||
                                       third_side < first_side + second_side;
    if (!passes_original_check) {
        std::cout << "The lengths cannot form a triangle.\n";
    } else if (first_side == second_side && second_side == third_side) {
        std::cout << "The triangle is equilateral.\n";
    } else if (first_side == second_side || second_side == third_side ||
               first_side == third_side) {
        std::cout << "The triangle is isosceles.\n";
    } else {
        std::cout << "The triangle is scalene.\n";
    }

    return EXIT_SUCCESS;
}
