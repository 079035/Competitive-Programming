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
//head

int main()
{
    int n, m;
    cin >> n >> m;
    VI a(n), b(n);
    rep(i, 0, n - 1)
    {
        cin >> a[i];
    }
    rep(i, 0, n - 1)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        VI tmp(n);
        int moo = (m + b[i] - a[0]) % m;
        for (int j = 0; j < n; j++)
        {
            tmp[j] = (a[j] + moo) % m;
        }
        sort(tmp.begin(), tmp.end());
        if (b == tmp)
        {
            ans = min(ans, moo);
        }
    }
    printf("%d\n", ans);
    return 0;
}