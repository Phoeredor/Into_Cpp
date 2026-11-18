#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    constexpr int capacity = 6;
    std::string hobbies[capacity];
    int count = 0;
    bool stopped = false;

    while (count < capacity && !stopped) {
        std::cout << "Enter hobby " << count + 1 << " of " << capacity << " (F to finish): ";
        if (!std::getline(std::cin, hobbies[count])) {
            break;
        }

        // The flag ends input without adding the sentinel to the list.
        if (hobbies[count] == "F") {
            stopped = true;
        } else {
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
