#include <cstdlib>
#include <ctime>
#include <iostream>
#include <utility>

int random_integer(int minimum, int maximum) {
    // Normalize the inputs before drawing from the inclusive interval.
    if (minimum > maximum) {
        std::swap(minimum, maximum);
    }
    return minimum + std::rand() % (maximum - minimum + 1);
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    const int target = random_integer(99'999'999, 9'999'999);
    int guess = 0;

    do {
        // The original exercise reveals the generated value on every attempt.
        std::cout << "Generated number: " << target << "\nYour guess: ";
        if (!(std::cin >> guess)) {
            return EXIT_FAILURE;
        }
        if (guess != target) {
            std::cout << "Try again.\n";
        }
    } while (guess != target);

    std::cout << "Correct!\n";
    return EXIT_SUCCESS;
}
