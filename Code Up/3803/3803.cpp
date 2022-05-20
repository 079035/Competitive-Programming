#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }

struct rgb
{
    int r, g, b;
};
vector<rgb> v(1000);
map<pii, ll> mem; // <<idx,rgb>, min>
ll f(int idx, int rgb){
    if(mem[{idx,rgb}])
        return mem[{idx, rgb}];

    ll val;
    if (rgb == 0)
        val = v[idx].r;
    else if (rgb == 1)
        val = v[idx].g;
    else
        val = v[idx].b;
    if(idx==0)
        return val;
    int c1, c2;
    if(rgb==0){
        c1 = 1;
        c2 = 2;
    }
    else if(rgb==1){
        c1 = 0;
        c2 = 2;
    }
    else {
        c1 = 0;
        c2 = 1;
    }

    ll ret_c1 = f(idx - 1, c1);
    ll ret_c2 = f(idx - 1, c2);
    mem[{idx, rgb}] = val + min(ret_c1,ret_c2);
    return val + min(ret_c1, ret_c2);
}
int main()
{
    int n;
    cin >> n;
    rep(i,0,n-1){
        cin >> v[i].r >> v[i].g >> v[i].b;
    }
    ll ans = min2(f(n - 1, 0), f(n - 1, 1), f(n - 1, 2));
    cout << ans << endl;
    return 0;
}