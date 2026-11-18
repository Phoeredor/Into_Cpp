#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    constexpr int river_count = 5;
    std::string river_names[river_count + 1] = {"Po", "Adige", "Tiber", "Volturno", "Tirso", ""};
    const int river_lengths[river_count] = {652, 410, 405, 175, 153};
    std::string target;

    std::cout << "Enter a river name: ";
    if (!(std::cin >> target)) {
        return EXIT_FAILURE;
    }

    // The extra slot guarantees a match and marks an unsuccessful lookup.
    river_names[river_count] = target;
    int index = 0;
    while (river_names[index] != target) {
        ++index;
    }

    if (index == river_count) {
        std::cout << "River not found.\n";
    } else {
        std::cout << "The river is " << river_lengths[index] << " km long.\n";
    }

    return EXIT_SUCCESS;
}
