#include <iostream>
#include <string>
int main() {
    std::string name;
    int age;
    std::string course;
    std::getline(std::cin, name);
    if (name.size() == 0) return 0;
    if (!(std::cin >> age)) return 0;
    std::cin.ignore();
    std::getline(std::cin, course);
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Course: " << course << std::endl;
    return 0;
}
