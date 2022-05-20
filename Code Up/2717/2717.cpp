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
int n;
ll flcm(vector<int> arr){
    ll res = arr[0];
    rep(i,1,n-1){
        res = arr[i] * res / gcd(arr[i], res);
    }
    return res;
}
int main()
{
    cin >> n;
    VI v(n), a(n);
    rep(i,0,n-1){
        cin >> a[i] >> v[i];
    }
    ll d = flcm(v);
    ll res = 0;
    rep(i,0,n-1){
        res += a[i] * (d / v[i]);
    }
    ll q = gcd(res, d);
    res /= q;
    d /= q;
    cout << res << "/" << d << endl;
    return 0;
}