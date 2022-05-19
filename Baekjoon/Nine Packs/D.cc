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
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
#define INF 1000000000
bool cmp(int p, int q){
    return p > q;
}
ll H, B,n,m;
vector<ll> h,b;
map<pair<ll,ll>, ll> hams;
map<pair<ll,ll>, ll> buns;
ll ham(ll idx, ll k)
{
    
    if (k == 0) 
        return 0;
    if (idx <= 0 || k < 0)
        return INF;
    if (hams[{idx, k}]!=0)
        return hams[{idx, k}];
    return hams[{idx, k}] = min(1 + ham(idx - 1, k - h[idx]), ham(idx - 1, k));
}
ll bun(ll idx, ll k)
{
    
    if (k == 0)
        return 0;
    if(idx<=0||k<0)
        return INF;
    if (buns[{idx, k}]!=0)
        return buns[{idx, k}];
    return buns[{idx,k}] = min(1 + bun(idx - 1, k - b[idx]), bun(idx - 1, k));
}
int main()
{
    cin >> n;
    h.resize(n+1);
    rep(i, 1, n)
    {
        cin >> h[i];
        H += h[i];
    }
    cin >> m;
    b.resize(m+1);
    rep(i, 1, m)
    {
        cin >> b[i];
        B += b[i];
    }
    if(n==0||m==0){
        cout << "impossible" << endl;
        return 0;
    }
    int C = min(H, B);
    ll ans = INF;
    //cout << C << endl;
    rep(i, 1, C)
    {
        ll tmp = ham(n, i) + bun(m,i);
        if (ans > tmp)
            ans = tmp;
    }
    if(ans==INF)
        cout << "impossible" << endl;
    else 
        cout << ans << endl;
    return 0;
}