#include <cstdlib>
#include <iostream>

int main() {
    char answer = ' ';

    std::cout << "Choose a, b, or c: ";
    if (!(std::cin >> answer)) {
        return EXIT_FAILURE;
    }

    // The original switch accepts the lowercase keys.
    switch (answer) {
        case 'a':
            std::cout << "Case 1\n";
            break;
        case 'b':
            std::cout << "Case 2\n";
            break;
        case 'c':
            std::cout << "Case 3\n";
            break;
        default:
            std::cout << "Try again.\n";
            break;
    }

    return EXIT_SUCCESS;
}
