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
int ceilIndex(VI &v, int l, int r, int key){
    while(r-l>1){
        int m = l + (r - l) / 2;
        if(v[m]>=key)
            r = m;
        else
            l = m;
    }
    return r;
}
//LIS nlogn
int LIS(VI &v)
{
    if(v.size()==0)
        return 0;
    VI tail(v.size(), 0);
    int len = 1;
    tail[0] = v[0];
    rep(i,1,v.size()-1){
        if(v[i]<tail[0])
            tail[0] = v[i];
        else if(v[i]>tail[len-1])
            tail[len++] = v[i];
        else
            tail[ceilIndex(tail, -1, len - 1, v[i])] = v[i];
    }
    return len;
}
int main()
{
    int n;
    cin >> n;
    VI v(n);
    rep(i, 0, n - 1)
    {
        cin >> v[i];
    }
    cout<<LIS(v)<<endl;
    return 0;
}