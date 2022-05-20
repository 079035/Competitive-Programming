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
#define mod (ll)(1e9)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
//head
map<pii, ll> m;
ll f(ll idx, ll num)
{
    if(m[{idx,num}])
        return m[{idx,num}];
    if(idx==1&&num==0)
        return 0;
    else if(idx==1){
        return m[{idx,num}]=1;
    }
    if(num==9)
        return m[{idx,num}]=f(idx - 1, 8)%mod;
    else if(num==0)
        return m[{idx, num}] = f(idx - 1, 1)%mod;
    else{
        int tmp = f(idx - 1, num + 1)%mod;
        return m[{idx, num}] = (f(idx - 1, num - 1)+tmp)%mod;
    }
}
int main()
{
    ll n, ans=0;
    cin >> n;
    if(n==1){
        cout << 9 << endl;
        return 0;
    }
    for (int i = 9; i >= 0;i--)
    {
        ans+=(f(n, i)%mod)%mod;
    }
    cout << ans % mod << endl;
    return 0;
}