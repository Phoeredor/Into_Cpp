#include <cstdlib>
#include <iostream>

int main() {
    int euros = 0;
    int exchange_rate = 0;

    std::cout << "Enter a whole number of euros: ";
    if (!(std::cin >> euros)) {
        return EXIT_FAILURE;
    }
    if (euros <= 0) {
        std::cout << "The euro amount must be positive.\a\n";
        return EXIT_SUCCESS;
    }

    // This exercise takes a whole-number rate from the user.
    std::cout << "Enter a whole-number exchange rate: ";
    if (!(std::cin >> exchange_rate)) {
        return EXIT_FAILURE;
    }
    if (exchange_rate > 0) {
        std::cout << "Dollar amount: " << static_cast<long long>(euros) * exchange_rate << '\n';
    } else {
        std::cout << "The exchange rate must be positive.\a\n";
    }

    return EXIT_SUCCESS;
}
