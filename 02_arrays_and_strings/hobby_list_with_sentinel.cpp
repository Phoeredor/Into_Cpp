#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    constexpr int capacity = 6;
    std::string hobbies[capacity];
    int count = 0;

    // Check capacity first so a full array is never indexed past the end.
    while (count < capacity && hobbies[count] != "F") {
        std::cout << "Enter hobby " << count + 1 << " of " << capacity << " (F to finish): ";
        if (!std::getline(std::cin, hobbies[count])) {
            break;
        }
        if (hobbies[count] != "F") {
            ++count;
        }
    }

    int index = 0;
    while (index < count) {
        std::cout << index << ": " << hobbies[index] << '\n';
        ++index;
    }

    return EXIT_SUCCESS;
}
