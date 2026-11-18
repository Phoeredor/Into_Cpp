#include <cstdlib>
#include <iostream>
#include <limits>
#include <utility>

int main() {
    constexpr int minimum = std::numeric_limits<int>::min();
    constexpr int maximum = std::numeric_limits<int>::max();
    int first = 0;
    int second = 0;

    std::cout << "Enter the first endpoint: ";
    if (!(std::cin >> first)) {
        return EXIT_FAILURE;
    }
    if (first == minimum || first == maximum) {
        std::cout << "The first endpoint reaches an integer limit.\n";
        return EXIT_SUCCESS;
    }

    std::cout << "Enter the second endpoint: ";
    if (!(std::cin >> second)) {
        return EXIT_FAILURE;
    }
    if (second == minimum || second == maximum) {
        std::cout << "The second endpoint reaches an integer limit.\n";
        return EXIT_SUCCESS;
    }
    if (first == second) {
        std::cout << "The endpoints are equal.\n";
        return EXIT_SUCCESS;
    }
    if (first > second) {
        std::swap(first, second);
    }

    // Test both endpoints along with everything between them.
    std::cout << "Multiples of seven:\n";
    for (int number = first; number <= second; ++number) {
        if (number % 7 == 0) {
            std::cout << number << '\n';
        }
    }

    return EXIT_SUCCESS;
}
