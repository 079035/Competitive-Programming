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
#define M (ll)1000000007

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    int s[6]={a,b,b-a,-a,-b,a-b};
    int n;
    cin>>n;
    cout<<(s[(n-1)%6]%M+M)%M<<'\n';
    return 0;
}