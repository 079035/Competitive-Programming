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

int main()
{
    SS;
    ll a, b, c;
    ll ans = 1;
    cin >> a >> b >> c;
    a -= b;
    ans += a % (b - c) == 0 ? a / (b - c) : a / (b - c) + 1;
    cout << ans << endl;
    return 0;
}