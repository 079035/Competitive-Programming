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
    dp[1] = seq[1];
    for (int i = 2; i <= n;++i) {
        dp[i] = seq[i];
        for (int j = 1; j < i; ++j) {
            if(seq[i]>seq[j]&&dp[i]<dp[j]+seq[i])
                dp[i] = dp[j] + seq[i];
        }
    }
    std::cout << *std::max_element(dp.begin(), dp.end()) << '\n';
    exit(0);
}