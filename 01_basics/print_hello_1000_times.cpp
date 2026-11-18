#include <cstdlib>
#include <iostream>

int main() {
    // Start at one so the counter doubles as a line number.
    for (int line_number = 1; line_number <= 1000; ++line_number) {
        std::cout << line_number << "__Hello!\n";
    }

    return EXIT_SUCCESS;
}
