#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    constexpr int reference_x = -3;
    std::string input;

    std::cout << "Reference point: P(-3, 0)\nEnter an integer x-coordinate for S: ";
    if (!(std::cin >> input)) {
        return EXIT_FAILURE;
    }

    int x = 0;
    try {
        // stoi accepts a leading integer and throws if it cannot fit in an int.
        x = std::stoi(input);
    } catch (const std::logic_error&) {
        std::cout << "Enter a number within the integer range.\a\n";
        return EXIT_SUCCESS;
    }

    if (x > reference_x) {
        std::cout << "S(" << x << ", 0) is to the right of P.\a\n";
    } else if (x < reference_x) {
        std::cout << "S(" << x << ", 0) is to the left of P.\a\n";
    } else {
        std::cout << "S is the same point as P.\n";
    }

    return EXIT_SUCCESS;
}
