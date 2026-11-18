#include <cstdlib>
#include <iostream>

int main() {
    std::cout << "ASCII and byte values\n\n";

    // Write all 256 byte values, including control bytes and values above ASCII.
    for (int byte_value = 0; byte_value < 256; ++byte_value) {
        std::cout << '#' << byte_value << '_' << static_cast<unsigned char>(byte_value) << '\n';
    }

    return EXIT_SUCCESS;
}
