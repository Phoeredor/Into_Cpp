#include <cstdlib>
#include <iostream>
#include <limits>

int main() {
    int number = -18;

    // Keep counting until interrupted, wrapping explicitly at the integer limit.
    while (true) {
        std::cout << number << '\n';
        if (number == std::numeric_limits<int>::max()) {
            number = std::numeric_limits<int>::min();
        } else {
            ++number;
        }
    }
}
