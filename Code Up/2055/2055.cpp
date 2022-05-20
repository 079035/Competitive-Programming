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
    ll a,b;
    cin>>a>>b;
    double half=sqrt(b);
    set<int> div;
    rep(i,1,(ll)half){
        if(a%i==0||b%i==0){
            div.insert(i);
            if(a%i==0)
                div.insert(a/i);
            if(b%i==0)
                div.insert(b/i);
        }
    }
    for(auto itr=div.begin();itr!=div.end();itr++)
        cout<<*itr<<" ";
    cout<<'\n';
    return 0;
}