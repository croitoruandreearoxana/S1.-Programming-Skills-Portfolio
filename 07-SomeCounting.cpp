#include <iostream>
int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int positives = 0, negatives = 0, zeros = 0;
    for (int i = 0; i < n; ++i) {
        long long x;
        std::cin >> x;
        if (x > 0) ++positives;
        else if (x < 0) ++negatives;
        else ++zeros;
    }
    std::cout << "Positives: " << positives << std::endl;
    std::cout << "Negatives: " << negatives << std::endl;
    std::cout << "Zeros: " << zeros << std::endl;
    return 0;
}
