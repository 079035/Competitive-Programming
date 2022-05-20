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
ll fact(ll n) { return (n == 1 || n == 0) ? 1 : n * fact(n - 1); }
ll cmb(ll n, ll r)
{
    long long p = 1, k = 1; 
    if (n - r < r) 
        r = n - r; 
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
            long long m = gcd(p, k); 
            p /= m; 
            k /= m; 
            n--; 
            r--; 
        } 
    } 
    else
        p = 1;
    return p;
}
int main()
{
    ll n, c;
    cin >> n;
    rep(i,0,n)
    {
        c = cmb(n, i);
        if(i==0)
            cout << "a^" << n << "+";
        else if(i == n)
            cout << "b^" << n << endl;
        else
            cout << c << "*a^" << n - i << "*b^" << i << "+";
    }
    return 0;
}