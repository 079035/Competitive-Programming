#include <iostream>
#include <vector>
#include <algorithm>

long long int P(int n) {
    std::vector<long long int> dp(101);
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    for (int i = 6; i <= n;i++){
        dp[i] = dp[i - 1] + dp[i - 5];
    }
    return dp[n];

}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::cout << P(n) << '\n';
    }
    exit(0);
}