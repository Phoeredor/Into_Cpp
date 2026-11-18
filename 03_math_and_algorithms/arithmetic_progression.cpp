#include <cstdlib>
#include <iostream>

int main() {
    double first = 0.0;
    double second = 0.0;
    double third = 0.0;

    std::cout << "Enter three numbers: ";
    if (!(std::cin >> first >> second >> third)) {
        return EXIT_FAILURE;
    }

    // Compare the two steps, with a separate result for a constant sequence.
    const double first_step = second - first;
    const double second_step = third - second;
    if (first_step == 0.0 && second_step == 0.0) {
        std::cout << "It is a constant arithmetic progression.\n";
    } else if (first_step == second_step) {
        std::cout << "It is an arithmetic progression.\n";
    } else {
        std::cout << "It is not an arithmetic progression.\n";
    }

    return EXIT_SUCCESS;
}
