#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> dp(n + 1);
    std::vector<int> seq(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> seq[i];
    }
    for (int i = 1; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i; ++j){
            if(seq[i]>seq[j]){
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
    }
    std::cout << *std::max_element(dp.begin(), dp.end()) << '\n';
    exit(0);
}