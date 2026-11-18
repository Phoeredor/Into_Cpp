#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
    constexpr double exchange_rate = 1.35;
    constexpr double tolerance = 1e-5;
    double euros = 0.0;
    double dollars = 0.0;

    std::cout << "Exchange rate: 1 EUR = 1.35 USD\n"
              << "Enter an amount in euros: ";
    if (!(std::cin >> euros)) {
        return EXIT_FAILURE;
    }
    std::cout << "Enter an amount in dollars: ";
    if (!(std::cin >> dollars)) {
        return EXIT_FAILURE;
    }

    // Compare magnitudes in dollars and allow for small rounding differences.
    const double difference = std::abs(euros) * exchange_rate - std::abs(dollars);
    if (std::abs(difference) < tolerance) {
        std::cout << "The amounts are equal.\n";
    } else if (difference < 0.0) {
        std::cout << "The dollar amount is larger.\n";
    } else if (difference > 0.0) {
        std::cout << "The euro amount is larger.\n";
    }

    return EXIT_SUCCESS;
}
