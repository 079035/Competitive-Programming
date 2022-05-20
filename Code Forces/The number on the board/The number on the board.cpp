#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first 
#define S second 
#define mp make_pair
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define max2(a,b,c) max(max(a,b),c)
#define min2(a,b,c) min(min(a,b),c)
#define M (ll)(1e9+7)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    ll sum=0, k;
    cin>>k;
    cin>>s;
    sort(s.begin(), s.end());
    rep(i,0,s.length()-1){
        sum+=s[i]-'0';
    }
    ll ans=0, idx=0;
    while(k>sum){
        sum+='9'-s[idx];
        idx++;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}