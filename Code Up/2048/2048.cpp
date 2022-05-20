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
    int a, s=0;
    rep(i,0,3){
        rep(j,0,3){
            cin>>a;
            s+=a;
        }
    }
    while(s>0){
        if(s!=1&&s%2==1){
            cout<<"no"<<endl;
            return 0;
        }
        s/=2;
    }
    cout<<"yes"<<endl;
    return 0;
}