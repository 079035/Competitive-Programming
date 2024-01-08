#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin>>n;
    std::vector<int> dp(n + 1, 0);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for (int i = 4; i <= n; ++i){
        dp[i] = dp[i - 1] + 1;
        if(i%2==0)
            dp[i] = std::min(dp[i], dp[i / 2] + 1);
        if(i%3==0)
            dp[i]=std::min(dp[i], dp[i / 3] + 1);
    }
    std::cout<<dp[n]<<'\n';
    std::vector<int> ans;
    while(n!=1){
        ans.push_back(n);
        if(dp[n]==dp[n-1]+1)
            n -= 1;
        else if(n%2==0 && dp[n]==dp[n/2]+1)
            n /= 2;
        else
            n /= 3;
    }
    ans.push_back(1);
    for (size_t i = 0; i < ans.size();++i)
        std::cout<<ans[i]<<' ';
    printf("\n");
    exit(0);
}