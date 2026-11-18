#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Enter a word for the outer-character check: ";
    if (!(std::cin >> word)) {
        return EXIT_FAILURE;
    }

    // The break in the first original loop limited it to the outermost pair.
    const bool outer_characters_match = word.front() == word.back();
    std::cout << (outer_characters_match ? "The outer characters match.\n"
                                         : "The outer characters differ.\n");

    std::cout << "Enter a word for the full palindrome check: ";
    if (!(std::cin >> word)) {
        return EXIT_FAILURE;
    }

    // Move in from both ends until the positions meet or a pair differs.
    bool is_palindrome = true;
    for (std::string::size_type left = 0, right = word.size() - 1; left < right;
         ++left, --right) {
        if (word[left] != word[right]) {
            is_palindrome = false;
            break;
        }
    }
    std::cout << (is_palindrome ? "It is a palindrome.\n" : "It is not a palindrome.\n");

    return EXIT_SUCCESS;
}
