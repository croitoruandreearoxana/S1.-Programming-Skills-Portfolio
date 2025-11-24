#include <iostream>
#include <vector>
int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];
    long long target;
    std::cin >> target;
    int idx = -1;
    for (int i = 0; i < n; ++i) if (a[i] == target) { idx = i; break; }
    std::cout << idx << std::endl;
    return 0;
}
