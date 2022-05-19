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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans, n, pos=0;
    string s;
    cin>>s;
    n=s.length()-1;
    ans=(1<<(n+1))-2;
    int i=n;
    while(i>=0){
        if(s[i]=='7'){
            ans+=1<<pos;
        }
        pos++;
        i--;
    }
    cout<<ans+1<<endl;
    return 0;
}