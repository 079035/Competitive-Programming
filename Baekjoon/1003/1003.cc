#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int> zeros(n + 1, 0);
        std::vector<int> ones(n + 1, 0);
        zeros[0] = 1;
        zeros[1] = 0;
        ones[1] = 1;
        for (int i = 2; i <= n; ++i) {
            zeros[i] = zeros[i - 1] + zeros[i - 2];
            ones[i] = ones[i - 1] + ones[i - 2];
        }
        std::cout << zeros[n] << " " << ones[n] << '\n';
    }
    exit(0);
}