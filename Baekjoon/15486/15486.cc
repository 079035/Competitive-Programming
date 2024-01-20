#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> t(1500000 + 1), p(1500000 + 1), dp(1500000 + 2);
    for (int i = 1; i <= n; ++i) {
        std::cin >> t[i] >> p[i];
    }
    for (int i = 1; i <= n; ++i) {
        if(i+t[i]<=n+1){
            dp[i + t[i]] = std::max(dp[i + t[i]], dp[i] + p[i]);
        }
        dp[i + 1] = std::max(dp[i + 1], dp[i]);
    }
    std::cout<<*std::max_element(dp.begin(),dp.end())<<'\n';
    exit(0);
}