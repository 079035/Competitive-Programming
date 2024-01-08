#include<iostream>
#include<algorithm>
#include<vector>
int main(){
    int n;
    std::cin>>n;
    std::vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n;++i){
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }
    std::cout<<dp[n]<<'\n';
}