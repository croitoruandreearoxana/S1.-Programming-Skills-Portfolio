#include <iostream>
int main() {
    int month, year;
    if (!(std::cin >> month >> year)) return 0;
    if (month < 1 || month > 12) {
        std::cout << "Invalid month" << std::endl;
        return 0;
    }
    int days = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11) days = 30;
    else if (month == 2) {
        bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        days = leap ? 29 : 28;
    }
    std::cout << days << std::endl;
    return 0;
}
