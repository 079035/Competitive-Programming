#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <set>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first 
#define S second 
#define mp make_pair
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define max(a,b,c) max(max(a,b),c)

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, l;
    cin>>n>>l;
    ll *arr=new ll[n];
    rep(i,0,n-1){
        cin>>arr[i];
    }
    if(l==1){
        cout<<1<<endl;
        return 0;
    }
    sort(arr, arr+n);
    double maxGap=0, beg=0, end=0;
    if(abs(arr[0])>beg)beg=arr[0];
    rep(i,1,n){
        if(i==n){
            if(abs(l-arr[n-1])>end)end=abs(l-arr[n-1]);
        }
        else{
            if(abs(arr[i]-arr[i-1])>maxGap)maxGap=abs(arr[i]-arr[i-1]);
        }
    }
    //cout<<maxGap<<" "<<beg<<" "<<end<<endl;
    if(max(maxGap/2, beg, end)==beg)
        cout<<fixed<<beg<<endl;
    else if(max(maxGap/2, beg, end)==end)
        cout<<fixed<<end<<endl;
    else
        cout<<fixed<<maxGap/2<<endl;
    return 0;
}