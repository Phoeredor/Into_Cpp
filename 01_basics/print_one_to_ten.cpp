#include <cstdlib>
#include <iostream>

int main() {
    // The inclusive upper bound prints ten as the final number.
    for (int number = 1; number <= 10; ++number) {
        std::cout << number << '\n';
    }

    return EXIT_SUCCESS;
}
