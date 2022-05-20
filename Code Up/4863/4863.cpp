//bottom up
#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int n,m;
vector<int> v(110);
int dp[110][110];

int solve(int day, int coupon, int price){
    if(n<day) return price;
    if(dp[day][coupon]) return dp[day][coupon] + price;
    if(v[day]) return solve(day+1, coupon, price);

    int ans = INT_MAX;
    ans = min(ans, solve(day+1, coupon, price+10000));
    ans = min(ans, solve(day+3, coupon+1, price+25000));
    ans = min(ans, solve(day+5, coupon+2, price+37000));

    if(coupon >= 3){
        ans = min(ans, solve(day+1, coupon-3, price));
    }

    dp[day][coupon] = ans - price;
    return ans;
}

int main(){
    cin>>n>>m;
    while(m--){
        int t;
        cin>>t;
        v[t]=1;
    }
    cout<<solve(1,0,0)<<endl;
    return 0;
}