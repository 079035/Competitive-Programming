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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }

pair<ll, ll> ext_gcd(ll a, ll b)
{
    ll s1 = 1, s2 = 0, t1 = 0, t2 = 1, r1 = a, r2 = b;
    ll tmp;
    while (r2 != 0)
    {
        ll q = r1 / r2;
        tmp = r1;
        r1 = r2;
        r2 = tmp - q * r2;
        tmp = s1;
        s1 = s2;
        s2 = tmp - q * s2;
        tmp = t1;
        t1 = t2;
        t2 = tmp - q * t2;
    }
    return mp(s1, t1);
}

int main()
{
    ll a, b, c;
    bool a_neg = 0, b_neg = 0;
    cin >> a >> b >> c;
    //special cases?
    if (a == 0 && b == 0 && c != 0)
    {
        cout << "Not Exist" << endl;
        return 0;
    }
    if (c == 0)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    ll g = gcd(abs(a), abs(b));
    if (c % g)
    {
        printf("Not Exist\n");
        return 0;
    }
    ll q = c / g;
    if (a < 0)
    {
        a *= -1;
        a_neg = 1;
    }
    if (b < 0)
    {
        b *= -1;
        b_neg = 1;
    }
    pair<ll, ll> ans = ext_gcd(a, b);
    if (a_neg)
        ans.fi *= -1;
    if (b_neg)
        ans.se *= -1;
    cout << ans.fi * q << " " << ans.se * q << endl;
    return 0;
}