#include <cstdlib>
#include <iostream>

void swap_values(int& first, int& second) {
    std::cout << "Original values: " << first << ", " << second << '\n';

    // Both references refer to variables in main, so the swap is visible there.
    const int saved = first;
    first = second;
    second = saved;
}

int main() {
    int first = 0;
    int second = 0;

    std::cout << "Enter two integers: ";
    if (!(std::cin >> first >> second)) {
        return EXIT_FAILURE;
    }

    swap_values(first, second);
    std::cout << "Swapped values: " << first << ", " << second << '\n';
    return EXIT_SUCCESS;
}
