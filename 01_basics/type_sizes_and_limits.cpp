#include <cstdlib>
#include <iostream>
#include <limits>

int main() {
    // sizeof reports the byte sizes used by the current compiler and platform.
    std::cout << "Bytes in short: " << sizeof(short)
              << "\nBytes in int: " << sizeof(int)
              << "\nBytes in long: " << sizeof(long)
              << "\nBytes in long long: " << sizeof(long long)
              << "\n\nBytes in float: " << sizeof(float)
              << "\nBytes in double: " << sizeof(double)
              << "\nBytes in long double: " << sizeof(long double) << "\n\n";

    std::cout << "Signed integer ranges:\n"
              << "short: " << std::numeric_limits<short>::min() << " to "
              << std::numeric_limits<short>::max() << '\n'
              << "int: " << std::numeric_limits<int>::min() << " to "
              << std::numeric_limits<int>::max() << '\n'
              << "long: " << std::numeric_limits<long>::min() << " to "
              << std::numeric_limits<long>::max() << '\n'
              << "long long: " << std::numeric_limits<long long>::min() << " to "
              << std::numeric_limits<long long>::max() << "\n\n";

    // lowest() gives the negative bound of each floating-point type.
    std::cout << "Floating-point ranges:\n"
              << "float: " << std::numeric_limits<float>::lowest() << " to "
              << std::numeric_limits<float>::max() << '\n'
              << "double: " << std::numeric_limits<double>::lowest() << " to "
              << std::numeric_limits<double>::max() << '\n'
              << "long double: " << std::numeric_limits<long double>::lowest() << " to "
              << std::numeric_limits<long double>::max() << "\n\n";

    std::cout << "Unsigned integer maxima:\n"
              << "short: " << std::numeric_limits<unsigned short>::max() << '\n'
              << "int: " << std::numeric_limits<unsigned int>::max() << '\n'
              << "long: " << std::numeric_limits<unsigned long>::max() << '\n'
              << "long long: " << std::numeric_limits<unsigned long long>::max() << '\n';

    return EXIT_SUCCESS;
}
