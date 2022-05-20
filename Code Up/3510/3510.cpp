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
#define SS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mp make_pair
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define max2(a,b,c) max(max(a,b),c)
#define min2(a,b,c) min(min(a,b),c)
#define mod (ll)1e9+7

int b, n, arr[25], ans(0);
void bt(int s, int d)
{
    if(s>b) return;
    if(s>ans)ans=s;
    if(d>=n) return;
    bt(s+arr[d], d+1);
    bt(s, d+1);
    return;
}

int main(){
    SS;
    cin>>b>>n;
    rep(i,0,n-1)
        cin>>arr[i];
    bt(0,0);
    cout<<ans<<endl;
    return 0;
}