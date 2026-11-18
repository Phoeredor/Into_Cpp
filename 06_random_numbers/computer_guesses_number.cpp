#include <cstdlib>
#include <ctime>
#include <iostream>

bool read_secret(int& secret) {
    std::cout << "Player 1, enter a secret number from 0 to 100: ";
    while (std::cin >> secret) {
        if (secret >= 0 && secret <= 100) {
            return true;
        }
        std::cout << "Enter a number from 0 to 100: ";
    }
    return false;
}

bool computer_plays(int secret) {
    int lower = 0;
    int upper = 100;

    std::cout << "Player 2\n";
    for (int attempt = 0; attempt < 10; ++attempt) {
        // The draw uses a half-open interval and retains the lower bound after a low guess.
        const int guess = lower + std::rand() % (upper - lower);
        std::cout << "Attempt " << attempt << '\n'
                  << "Interval: [" << lower << ", " << upper << ")\n"
                  << "Guess: " << guess << '\n';

        if (guess == secret) {
            std::cout << "The computer guessed correctly.\n";
            return true;
        }
        if (guess > secret) {
            upper = guess;
            std::cout << "Too high.\n";
        } else {
            lower = guess;
            std::cout << "Too low.\n";
        }
    }

    return false;
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int secret = 0;
    if (!read_secret(secret)) {
        return EXIT_FAILURE;
    }
    if (!computer_plays(secret)) {
        std::cout << "The computer is out of guesses.\n";
    }

    return EXIT_SUCCESS;
}
