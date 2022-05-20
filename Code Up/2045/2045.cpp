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
    int n,m,a,b,oddCnt=0;
    cin>>n>>m;
    vector<int> v[101];
    rep(i,0,m-1){
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    rep(i,1,n){
        if(v[i].size()==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    rep(i,1,n){
        if(v[i].size()%2==1)oddCnt++;
    }
    if(oddCnt==2||oddCnt==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}