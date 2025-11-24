#include <iostream>
int main() {
    long long x;
    if (!(std::cin >> x)) return 0;
    if (x % 2 == 0) std::cout << "Even" << std::endl;
    else std::cout << "Odd" << std::endl;
    return 0;
}
