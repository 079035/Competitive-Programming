#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin>>n;
    std::vector<int> a(1001);
    std::vector<int> dp(1001);

    for (int i = 1; i <= n; ++i) {
        std::cin >> a[i];
    }

    int longest = 1;
    std::vector<int> v;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[i] = 1;
        for (int j = 1; j < i;++j) {
            if(a[i]>a[j]&&dp[i]<dp[j]+1){
                dp[i] = dp[j] + 1;
            }
            longest=std::max(longest,dp[i]);
        }
    }
    std::cout << longest << '\n';
    for (int i = n; i >= 1; --i) {
        if(dp[i]==longest) {
            v.push_back(a[i]);
            --longest;
        }
    }
    for(int i=v.size()-1;i>=0;--i){
        std::cout<<v[i]<<' ';
    }
    std::cout<<'\n';
    exit(0);
}