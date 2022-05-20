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
const int N = (int)1e6 + 77;
ll arr[N];
int main()
{
    ios::sync_with_stdio(0);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    rep(i,a,b)
    {
        arr[i + b]++;
        arr[i + c + 1]--;
    }
    rep(i,1,N-1)
    {
        arr[i] += arr[i - 1];
    }
    for (int i = N - 2; i >= 0;i--)
    {
        arr[i] += arr[i + 1];
    }
    ll ans = 0;
    rep(i,c,d)
    {
        ans += arr[i + 1];
    }
    cout << ans << endl;
    return 0;
}