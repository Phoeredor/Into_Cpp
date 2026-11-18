#include <cstdlib>
#include <iostream>

int main() {
    constexpr double pi = 3.14159265358979323846;

    // Print the same constant alongside each numbered greeting.
    for (int line_number = 1; line_number <= 100; ++line_number) {
        std::cout << line_number << "__Hello! __" << pi << '\n';
    }

    return EXIT_SUCCESS;
}
