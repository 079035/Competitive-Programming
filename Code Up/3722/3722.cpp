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
#define mod (ll)(1e8 + 7)
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
const ll N = (ll)(1e9+1);
map<ll, bool> check;
map<ll, ll> m;
ll f(ll n)
{
    if(n<=0)
        return 1;
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return 3;
    if(check[n])
        return m[n];
    ll a, b;
    if(n%2==1)
        a = n / 2 + 1;
    else
        a = n / 2;
    b = n / 2;
    check[n] = true;
    return m[n] = (f(a) * f(b) + f(a - 1) * f(b - 1)) % mod;
}
int main()
{
    ll n;
    m[1] = 1;
    check[1] = 1;
    m[2] = 2;
    check[2] = 1;
    m[3] = 3;
    check[3] = 1;
    m[4] = 5;
    check[4] = 1;
    cin >> n;
    cout << f(n) % mod << endl;
    return 0;
}