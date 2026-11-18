#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    double sum = 0.0;
    std::string token;

    std::cout << "Enter numbers, then enter + to print their sum.\n";
    while (std::cin >> token) {
        // Read the sentinel as text so it never goes through numeric conversion.
        if (token == "+") {
            std::cout << "Sum: " << sum << '\n';
            return EXIT_SUCCESS;
        }

        std::istringstream input(token);
        double number = 0.0;
        if (!(input >> number) || !input.eof()) {
            std::cerr << "Enter a number or +.\n";
            return EXIT_FAILURE;
        }
        sum += number;
    }

    std::cerr << "Expected + to end the list.\n";
    return EXIT_FAILURE;
}
