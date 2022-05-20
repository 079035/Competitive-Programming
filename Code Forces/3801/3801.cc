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
#define mod (ll)(1e4 + 7)
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
map<pii, int> m;
int f(int n, int num)
{
    int ret = 0;
    if(n==0)
        return 1;
    if(m[{n,num}]>0)
        return m[{n, num}];
    for (int i = num; i >= 0;i--)
    {
        ret+=f(n - 1, i)%mod;
    }
    return m[{n,num}]=ret % mod;
}
int main()
{
    int n;
    cin>>n;
    cout << f(n, 9) << endl;
    return 0;
}