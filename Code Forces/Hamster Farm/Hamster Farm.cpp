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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,a;
    cin>>n>>k;
    ll max=0, box=0, id=1;
    rep(i,1,k){
        cin>>a;
        if(a*(n/a)>max)
        {
            max=a*(n/a);
            box=n/a;
            id=i;
        }
    }
    cout<<id<<" "<<box<<endl;
    return 0;
}