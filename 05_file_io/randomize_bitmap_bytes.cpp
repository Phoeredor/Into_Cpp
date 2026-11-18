#include <cstdlib>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <system_error>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <input.bmp> <new-output.bmp>\n";
        return EXIT_FAILURE;
    }

    // Keep the starting byte and the number of three-byte writes from the exercise.
    constexpr std::streamoff start = 50'000;
    constexpr int block_count = 30'000;
    constexpr int block_size = 3;

    std::ifstream input(argv[1], std::ios::binary | std::ios::ate);
    const std::streamoff size = input.tellg();
    if (size < start + block_count * block_size) {
        std::cerr << "Could not read a bitmap large enough for the byte range.\n";
        return EXIT_FAILURE;
    }

    input.seekg(0);
    char signature[2] = {};
    if (!input.read(signature, sizeof(signature)) || signature[0] != 'B' || signature[1] != 'M') {
        std::cerr << "The input must have a BMP signature.\n";
        return EXIT_FAILURE;
    }
    input.close();

    std::error_code file_error;
    if (!std::filesystem::copy_file(argv[1], argv[2], file_error)) {
        std::cerr << "Could not create the output copy: " << file_error.message() << '\n';
        return EXIT_FAILURE;
    }

    std::fstream output(argv[2], std::ios::in | std::ios::out | std::ios::binary);
    output.seekp(start);
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int block = 0; block < block_count && output; ++block) {
        unsigned char bytes[block_size];
        for (unsigned char& byte : bytes) {
            byte = static_cast<unsigned char>(std::rand() % 256);
        }
        output.write(reinterpret_cast<const char*>(bytes), sizeof(bytes));
    }
    output.close();
    if (!output) {
        std::filesystem::remove(argv[2], file_error);
        std::cerr << "Could not write the full byte range.\n";
        return EXIT_FAILURE;
    }

    std::cout << "File size: " << size << " bytes\n"
              << "File signature: " << signature[0] << signature[1] << '\n'
              << "Modified copy: " << argv[2] << '\n';
    return EXIT_SUCCESS;
}
