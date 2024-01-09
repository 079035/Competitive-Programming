#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<long long, long long>> dp(91);
    dp[1] = {0, 1};
    dp[2] = {1, 0};
    for (int i = 3; i <= n; ++i) {
        dp[i].first = dp[i - 1].first + dp[i - 1].second;
        dp[i].second = dp[i - 1].first;
    }
    std::cout << dp[n].first + dp[n].second << '\n';
    exit(0);
}