#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <weekly-schedule.csv>\n";
        return EXIT_FAILURE;
    }

    std::ifstream schedule(argv[1]);
    if (!schedule) {
        std::cerr << "Could not open the schedule.\n";
        return EXIT_FAILURE;
    }

    const std::string subjects[] = {
        "Mathematical Methods", "Quantum Mechanics", "Calculus II",
        "Theoretical Physics", "Computer Science", "Relativity"
    };
    constexpr int subject_count = sizeof(subjects) / sizeof(subjects[0]);

    std::cout << "Subjects:\n";
    for (int index = 0; index < subject_count; ++index) {
        std::cout << index + 1 << ". " << subjects[index] << '\n';
    }

    int choice = 0;
    std::cout << "Choose a subject number: ";
    if (!(std::cin >> choice) || choice < 1 || choice > subject_count) {
        std::cerr << "Enter a valid subject number.\n";
        return EXIT_FAILURE;
    }

    const std::string& subject = subjects[choice - 1];
    std::size_t matches = 0;
    std::string line;

    // Look for every occurrence on each line, advancing one byte from each match.
    while (std::getline(schedule, line)) {
        auto position = line.find(subject);
        while (position != std::string::npos) {
            ++matches;
            position = line.find(subject, position + 1);
        }
    }
    if (!schedule.eof()) {
        std::cerr << "Could not read the full schedule.\n";
        return EXIT_FAILURE;
    }

    std::cout << "Total entries for " << subject << ": " << matches << '\n';
    return EXIT_SUCCESS;
}
