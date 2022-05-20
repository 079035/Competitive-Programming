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
    // 0! = 1
    ll a,b;
    cin>>a>>b;
    ll t=b-a, ans=1;
    if(t>=9){
        cout<<0<<endl;
        return 0;
    }
    else{
        for(ll i=b;i>a;i--){
            if(i%10==0){
                cout<<0<<endl;
                return 0;
            }
        }
    }
    for(ll i=b;i>a;i--){
        ans*=i%10;
        ans%=10;
    }
    cout<<ans<<endl;
    return 0;
}