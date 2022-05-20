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
#define mod (ll)1e9+7

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    rep(i,1,5){
        cin>>n;
        double half=sqrt(n);
        ll check=1;
        rep(j,2,(ll)half){
            if(n%j==0)check+=n/j+j;
        }
        if(check==n)cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';
    }
    return 0;
}