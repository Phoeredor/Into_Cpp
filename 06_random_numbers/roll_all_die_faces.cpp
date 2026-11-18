#include <cstdlib>
#include <iostream>

int main() {
    constexpr int face_count = 6;
    bool seen[face_count] = {};
    int distinct_faces = 0;
    int face = 0;

    // Stop once every face has appeared. The default seed keeps the run repeatable.
    while (distinct_faces < face_count) {
        face = std::rand() % face_count + 1;
        std::cout << face << '\n';

        if (!seen[face - 1]) {
            seen[face - 1] = true;
            ++distinct_faces;
        }
    }

    std::cout << "All faces have appeared.\n"
              << "Last roll: " << face << '\n';
    return EXIT_SUCCESS;
}
