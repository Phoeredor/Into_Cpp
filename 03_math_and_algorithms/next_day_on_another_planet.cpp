#include <cstdlib>
#include <iostream>

int main() {
    constexpr int days_per_month = 45;
    constexpr int months_per_year = 18;
    int day = 0;
    int month = 0;
    int year = 0;

    std::cout << "This calendar has 18 months of 45 days each.\n"
              << "Enter a date as day month year: ";
    if (!(std::cin >> day >> month >> year)) {
        return EXIT_FAILURE;
    }
    if (day < 1 || day > days_per_month || month < 1 || month > months_per_year || year < 0) {
        std::cout << "Invalid date.\a\n";
        return EXIT_SUCCESS;
    }

    // Roll into the next month and year when their last day has passed.
    long long next_year = year;
    if (++day > days_per_month) {
        day = 1;
        ++month;
    }
    if (month > months_per_year) {
        month = 1;
        ++next_year;
    }

    std::cout << "Tomorrow: " << day << '/' << month << '/' << next_year << '\n';
    return EXIT_SUCCESS;
}
