#include <cstdlib>
#include <iostream>

int main() {
    int age = 0;

    std::cout << "How old are you? ";
    if (!(std::cin >> age)) {
        return EXIT_FAILURE;
    }

    // The original exercise has no message for an age of exactly 18.
    if (age < 0 || age > 120) {
        std::cout << "Enter an age from 0 to 120.\n";
    } else if (age < 18) {
        std::cout << "You are too young to drink alcohol.\n";
    } else if (age > 18) {
        std::cout << "You are an adult.\n";
    }

    return EXIT_SUCCESS;
}
