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

int bs(int arr[], int t, int low, int high)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==t)
        return mid;
    else if(arr[mid]>t)
        return bs(arr, t, low, mid-1);
    else
        return bs(arr, t, mid+1, high);
}

int main(){
    SS;
    int n, m;
    cin>>n;
    int *arr=new int[n+1];
    rep(i,1,n){
        cin>>arr[i];
    }
    cin>>m;
    int t;
    rep(i,1,m){
        cin>>t;
        cout<<bs(arr, t, 1, n)<<endl;
    }
    return 0;
}