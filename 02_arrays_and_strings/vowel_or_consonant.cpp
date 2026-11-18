#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    char letter = ' ';
    std::cout << "Enter a letter: ";
    if (!(std::cin >> letter)) {
        return EXIT_FAILURE;
    }

    // Cast through unsigned char before passing a byte to the cctype functions.
    const int uppercase = std::toupper(static_cast<unsigned char>(letter));
    const bool is_letter = std::isalpha(uppercase) != 0;
    if (!is_letter) {
        std::cout << "1. Enter a single letter.\a\n"
                  << "2. Enter a single letter.\n";
        return EXIT_SUCCESS;
    }

    // The first approach compares the letter to each vowel.
    if (uppercase == 'A' || uppercase == 'E' || uppercase == 'I' ||
        uppercase == 'O' || uppercase == 'U') {
        std::cout << "1. It is a vowel.\n";
    } else {
        std::cout << "1. It is a consonant.\n";
    }

    // The second approach looks up the letter in two strings.
    const std::string vowels = "AEIOU";
    const std::string consonants = "BCDFGHJKLMNPQRSTUVWXYZ";
    const auto character = static_cast<char>(uppercase);
    if (vowels.find(character) != std::string::npos) {
        std::cout << "2. It is a vowel.\n";
    } else if (consonants.find(character) != std::string::npos) {
        std::cout << "2. It is a consonant.\n";
    }

    return EXIT_SUCCESS;
}
