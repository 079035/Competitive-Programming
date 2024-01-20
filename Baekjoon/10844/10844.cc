#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000000

int main() {
    int n;
    std::cin >> n;
    std::vector<int> dp(11, 0);
    std::vector<int> tmp(11, 0);
    for (int i = 1;i<=9;++i) {
        dp[i] = 1;
    }
    for (int i = 2; i <= n; ++i)
    {
        tmp[0] = dp[1];
        tmp[9] = dp[8];
        for (int j = 1; j < 9; ++j)
        {
            tmp[j] = (dp[j - 1] + dp[j + 1]) % MOD;
        }
        dp = tmp;
    }
    int ans = 0;
    for (int i = 0; i < 10; ++i) {
        ans = (ans + dp[i]) % MOD;
    }
    std::cout<< ans << '\n';
}