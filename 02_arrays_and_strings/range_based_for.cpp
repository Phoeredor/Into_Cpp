#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    int integers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Explicit type by value:\n";
    for (int number : integers) {
        std::cout << number << ' ';
    }

    std::cout << "\nDeduced type by value:\n";
    for (auto number : integers) {
        std::cout << number << ' ';
    }

    // A reference binds to the original element. A const reference prevents edits.
    std::cout << "\nBy reference:\n";
    for (auto& number : integers) {
        std::cout << number << ' ';
    }

    std::cout << "\nBy const reference:\n";
    for (const auto& number : integers) {
        std::cout << number << ' ';
    }

    std::vector<double> decimals;
    for (int index = 0; index < 10; ++index) {
        decimals.push_back(index + 0.14159);
    }

    std::cout << "\nVector by const reference:\n";
    for (const auto& number : decimals) {
        std::cout << number << ' ';
    }
    std::cout << '\n';

    return EXIT_SUCCESS;
}
