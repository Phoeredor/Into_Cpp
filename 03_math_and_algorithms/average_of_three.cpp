#include <cstdlib>
#include <iostream>

int main() {
    int first = 0;
    int second = 0;
    int third = 0;

    std::cout << "Enter three integers: ";
    if (!(std::cin >> first >> second >> third)) {
        return EXIT_FAILURE;
    }

    // Show the difference between integer division and floating-point division.
    const long long sum = static_cast<long long>(first) + second + third;
    const double average = sum / 3.0;
    std::cout << "Integer average: " << sum / 3 << '\n';
    std::cout << "Floating-point average: " << average << '\n';

    const bool first_matches = average == first;
    const bool second_matches = average == second;
    const bool third_matches = average == third;

    // Preserve which message wins when the original independent checks overlap.
    std::cout << "Values matching the average: ";
    if (first_matches && second_matches) {
        std::cout << "First and second\n";
    } else if (first_matches && third_matches) {
        std::cout << "First and third\n";
    } else if (third_matches) {
        std::cout << "Third\n";
    } else if (second_matches) {
        std::cout << "Second\n";
    } else if (first_matches) {
        std::cout << "First\n";
    } else {
        std::cout << "None\n";
    }

    return EXIT_SUCCESS;
}
