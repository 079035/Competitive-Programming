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
#define mod (ll)(1e9+7)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,t,arr[100001];
    cin>>n>>t;
    rep(i,0,n-1){
        cin>>arr[i];
    }
    int cur=0,time=0;
    while(cur<n&&time+arr[cur]<=t)
        time+=arr[cur++];
    int M(cur);
    rep(i,0,n-1){
        time-=arr[i];
        while(cur<n&&time+arr[cur]<=t)
            time+=arr[cur++];
        if(cur-i-1>M)
            M=cur-i-1;
    }
    cout<<M<<endl;
    return 0;
}