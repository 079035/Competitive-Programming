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

int main(){
    SS;
    int n,k;
    cin>>n>>k;
    int *arr=new int[n+1];
    int pos=-1;
    rep(i,1,n){
        cin>>arr[i];
        if(pos==-1&&arr[i]==k)pos=i;
    }
    cout<<pos<<endl;
    return 0;
}