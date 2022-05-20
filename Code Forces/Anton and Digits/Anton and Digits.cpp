#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll sum=0;
    ll k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    ll big=min2(k2,k5,k6);
    sum+=big*256;
    k2-=big;
    ll small=min(k2,k3);
    sum+=small*32;
    cout<<sum<<endl;
    return 0;
}