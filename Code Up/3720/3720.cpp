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
typedef pair<int, int> PII;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }

ll dp(ll n, ll r, ll p)
{
    ll c[r + 1];
    memset(c, 0, sizeof(c));
    c[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = min(i, r); j > 0; j--)
        {
            c[j] = (c[j] + c[j - 1]) % p;
        }
    }
    return c[r];
}
ll lucas(ll n, ll r, ll p)
{
    if(r==0)
        return 1;
    ll ni = n % p, ri = r % p;
    return (lucas(n / p, r / p, p) * dp(ni, ri, p)) % p;
}
int main()
{
    ll n, r, p = 1999;
    cin >> n >> r;
    cout << lucas(n, r, p) << endl;
    return 0;
}