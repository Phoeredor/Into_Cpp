#include <cstdlib>
#include <iostream>

int main() {
    int number = 0;

    std::cout << "Enter an integer: ";
    if (!(std::cin >> number)) {
        return EXIT_FAILURE;
    }

    // The original exercise asks for a new input when it receives zero.
    if (number == 0) {
        std::cout << "Zero was excluded by this exercise. Try another number.\a\n";
    } else if (number % 2 == 0) {
        std::cout << "It is even.\a\n";
    } else {
        std::cout << "It is odd.\a\n";
    }

    return EXIT_SUCCESS;
}
