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
vector<ll> a;
ll n, c;
bool eval(ll m) // true if more cows used than m
{
    int cnt = 1, cur = 0, next = 0;
    while(next<n){
        next++;
        if(a[next]-a[cur]>=m){
            cnt++;
            cur = next;
        }
    }
    if(cnt>=c)
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    //cin.tie(0);
    ll x;
    cin>>n>>c;
    rep(i,0,n-1){
        cin >> x;
        a.pb(x);
    }
    sort(a.begin(), a.end());

    ll l = 1, r = (a[n - 1] - a[0]) / (c - 1); //1 is adjacent, r is max distance.
    while(l<r)
    {
        ll mid = (l + r + 1) / 2;
        if(eval(mid))
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l << endl;
    return 0;
}