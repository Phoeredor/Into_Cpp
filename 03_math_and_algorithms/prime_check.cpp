#include <cstdlib>
#include <iostream>

bool passes_prime_check(const int* number) {
    // Preserve the original divisor loop, including its empty range for inputs below two.
    for (int divisor = 2; divisor + 1 < *number; ++divisor) {
        if (*number % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number = 0;

    std::cout << "Enter an integer: ";
    if (!(std::cin >> number)) {
        return EXIT_FAILURE;
    }

    if (passes_prime_check(&number)) {
        std::cout << number << " passes the prime check.\n";
    } else {
        std::cout << number << " fails the prime check.\n";
    }

    return EXIT_SUCCESS;
}
