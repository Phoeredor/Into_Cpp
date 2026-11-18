#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    const std::string first_word = "painter";
    const std::string second_word = "painting";

    // Compare three characters starting at different offsets in the two words.
    const int comparison = first_word.compare(1, 3, second_word, 2, 3);
    if (comparison == 0) {
        // Keep the original message associated with this branch.
        std::cout << "Different\n";
    } else {
        std::cout << "Hello\n";
    }

    return EXIT_SUCCESS;
}
