#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define VI vector<int>
#define palindrome(s) s == string(s.rbegin(), s.rend())
int n,m,ans=0;
VI v;
void f(int a, int r) // a= index
{
    if(a==m){
        if(r==n)
            ans++;
        return;
    }
    f(a + 1, r + v[a]);
    f(a + 1, r - v[a]);
}
int main()
{
    SS;
    cin >> n >> m;
    rep(i,0,m-1){
        int t;
        cin >> t;
        v.pb(t);
    }
    f(0, 0);
    cout << ans << endl;
    return 0;
}