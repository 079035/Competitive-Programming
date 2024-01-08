#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> triangle(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cin>>triangle[i][j];
        }
    }
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            dp[i][j] = triangle[i][j] + std::max((j>0?dp[i-1][j-1]:0), (i==j?0:dp[i-1][j]));
        }
    }
    std::cout<<*std::max_element(dp[n-1].begin(), dp[n-1].end())<<std::endl;
}