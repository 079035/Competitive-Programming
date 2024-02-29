#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t,w;
    std::cin >> t >> w;
    std::vector<std::vector<int>> dp(1001,std::vector<int>(31,0));
    std::vector<int> a(1001);

    for(int i=1; i<=t; i++) {
        std::cin >> a[i];
    }

    for (int i = 1; i <= t; ++i) {
        for (int j = 0; j <= w; ++j) {
            if(j==0){
                dp[i][j] = dp[i-1][j] + (a[i] == 1);
            }
            else{
                dp[i][j]=std::max(dp[i-1][j],dp[i-1][j-1])+(a[i]==j%2+1);
            }
        }
    }
    std::cout << *std::max_element(dp[t].begin(), dp[t].end()) << '\n';
    exit(0);
}