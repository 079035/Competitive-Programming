#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> dp(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> dp[i];
    }
    int max = dp[1];
    for (int i = 2; i <= n; ++i) {
        if(dp[i-1]>0){
            dp[i] += dp[i - 1];
        }
        max = std::max(max, dp[i]);
    }
    std::cout << max << '\n';
    exit(0);
}