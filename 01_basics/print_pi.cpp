#include <cstdlib>
#include <iostream>

int main() {
    constexpr double pi = 3.14159265358979323846;

    // Pair each copy of pi with its line number.
    for (int line_number = 1; line_number <= 100; ++line_number) {
        std::cout << line_number << "__" << pi << '\n';
    }

    return EXIT_SUCCESS;
}
