#include <cstdlib>
#include <iostream>

int main() {
    int values[100] = {};

    // A reference writes each random value into the array element itself.
    for (int& value : values) {
        value = std::rand();
    }

    int item = 1;
    for (int value : values) {
        std::cout << item << ") " << value << '\n';
        ++item;
    }

    return EXIT_SUCCESS;
}
