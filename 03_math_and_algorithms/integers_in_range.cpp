#include <cstdlib>
#include <iostream>
#include <limits>
#include <utility>

int main() {
    constexpr int minimum = std::numeric_limits<int>::min();
    constexpr int maximum = std::numeric_limits<int>::max();
    int first = 0;
    int second = 0;

    std::cout << "Endpoints must be strictly between " << minimum << " and " << maximum << ".\n"
              << "Enter the first endpoint: ";
    if (!(std::cin >> first)) {
        return EXIT_FAILURE;
    }
    if (first == minimum || first == maximum) {
        std::cout << "The first endpoint reaches an integer limit.\a\n";
        return EXIT_SUCCESS;
    }

    std::cout << "Enter the second endpoint: ";
    if (!(std::cin >> second)) {
        return EXIT_FAILURE;
    }
    if (second == minimum || second == maximum) {
        std::cout << "The second endpoint reaches an integer limit.\a\n";
        return EXIT_SUCCESS;
    }
    if (first == second) {
        std::cout << "The endpoints are equal.\n";
        return EXIT_SUCCESS;
    }
    if (first > second) {
        std::swap(first, second);
    }

    // Ordering the endpoints first keeps the counting loop the same for either input order.
    std::cout << "Integers in the interval:\n";
    for (int number = first; number <= second; ++number) {
        std::cout << number << '\n';
    }

    return EXIT_SUCCESS;
}
