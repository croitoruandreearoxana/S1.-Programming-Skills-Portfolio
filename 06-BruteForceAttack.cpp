#include <iostream>
#include <string>
#include <iomanip>
int main() {
    std::string secret;
    if (!(std::cin >> secret)) return 0;
    int attempts = 0;
    for (int i = 0; i <= 999; ++i) {
        std::ostringstream ss;
        ss << std::setw(3) << std::setfill('0') << i;
        ++attempts;
        if (ss.str() == secret) {
            std::cout << "Found: " << ss.str() << " in " << attempts << " attempts" << std::endl;
            return 0;
        }
    }
    std::cout << "Not found" << std::endl;
    return 0;
}
