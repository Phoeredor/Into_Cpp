#include <cstdlib>
#include <iostream>
#include <limits>

int main() {
    int term_count = 0;

    std::cout << "Which Fibonacci term do you want? Enter an index of at least 3: ";
    while (term_count < 3) {
        if (!(std::cin >> term_count)) {
            return EXIT_FAILURE;
        }
    }

    int previous = 1;
    int current = 1;
    std::cout << previous << '\n' << current << '\n';

    // Each new term takes the sum of the two terms just printed.
    for (int index = 2; index < term_count; ++index) {
        if (previous > std::numeric_limits<int>::max() - current) {
            std::cerr << "The next term exceeds the integer range.\n";
            return EXIT_FAILURE;
        }
        const int next = previous + current;
        previous = current;
        current = next;
        std::cout << current << '\n';
    }

    std::cout << "Requested term: " << current << '\n';
    return EXIT_SUCCESS;
}
