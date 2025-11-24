#include <iostream>
#include <string>
int main() {
    std::string name;
    std::getline(std::cin, name);
    if (name.size() == 0) return 0;
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
