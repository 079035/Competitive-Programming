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
    int n, ans(0);
    cin>>n;
    string s;
    cin>>s;
    int alpha[26]={0};
    if(n>26){
        cout<<-1<<endl;
        return 0;
    }
    rep(i,0,n-1){
        alpha[s[i]-97]++;
    }
    rep(i,0,25){
        if(alpha[i]>1)ans+=(alpha[i]-1);
    }
    cout<<ans<<endl;
    return 0;
}