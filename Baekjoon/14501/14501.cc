#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> dp(17);
    std::vector<int> t(16);
    std::vector<int> p(16);
    for (int i = 1; i <= n; ++i)
    {
        std::cin >> t[i] >> p[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        if (t[i] + i <= n + 1)
        {
            dp[t[i] + i] = std::max(dp[t[i] + i], dp[i] + p[i]);
        }
        dp[i + 1] = std::max(dp[i + 1], dp[i]);
    }
    std::cout << *std::max_element(dp.begin(), dp.end()) << '\n';
    exit(0);
}