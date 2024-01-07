#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for (int i = 4; i <= n; ++i){
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        std::cout<<dp[n]<<std::endl;
    }
    exit(0);
}