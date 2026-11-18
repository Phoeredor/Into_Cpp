#include <cstdlib>
#include <iostream>
#include <utility>

int main() {
    int first = 0;
    int second = 0;
    int third = 0;

    std::cout << "Enter three integers: ";
    if (!(std::cin >> first >> second >> third)) {
        return EXIT_FAILURE;
    }

    // Put the smallest value first, then order the remaining pair.
    if (first > second) {
        std::swap(first, second);
    }
    if (first > third) {
        std::swap(first, third);
    }
    if (second > third) {
        std::swap(second, third);
    }

    std::cout << first << ", " << second << ", " << third << '\n';
    return EXIT_SUCCESS;
}
