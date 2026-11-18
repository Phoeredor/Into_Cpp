#include <cstdlib>
#include <iostream>

int main() {
    const int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << ' ';
        }
        std::cout << '\n';
    }

    // Show the middle row again, masking each even entry.
    std::cout << "______________________________\n";
    for (int value : matrix[1]) {
        if (value % 2 == 1) {
            std::cout << value << ' ';
        } else {
            std::cout << "* ";
        }
    }
    std::cout << '\n';

    return EXIT_SUCCESS;
}
