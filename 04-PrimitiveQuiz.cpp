#include <iostream>
#include <string>
int main() {
    int score = 0;
    std::string ans;
    std::cout << "Q1: 2+2= ? " ;
    if (!(std::cin >> ans)) return 0;
    if (ans == "4" || ans == "four") ++score;
    std::cout << "Q2: Is C++ statically typed? (yes/no) ";
    if (!(std::cin >> ans)) return 0;
    if (ans == "yes" || ans == "y") ++score;
    std::cout << "Q3: Does 5%2 equal 1? (yes/no) ";
    if (!(std::cin >> ans)) return 0;
    if (ans == "yes" || ans == "y") ++score;
    std::cout << "Score: " << score << "/3" << std::endl;
    return 0;
}
