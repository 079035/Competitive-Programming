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

ll n,m,k,val,ans=0;
int cnt(int val){
    int rt=0;
    while(val>0)
    {
        rt++;
        val=val&(val-1);
    }
    return rt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m>>k;
    vector<ll> v;
    rep(i,1,m){
        ll t;
        cin>>t;
        v.pb(t);
    }
    cin>>val;
    rep(i,0,m-1){
        if(cnt(val^v[i])<=k)ans++;
    }
    cout<<ans<<endl;
    return 0;
}