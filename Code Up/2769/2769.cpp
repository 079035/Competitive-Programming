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

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a = n / 2;
    a = min(a, m);
    n -= a * 2;
    m -= a;
    int rem = n + m;
    k -= rem;
    if(k<0){
        cout << a << endl;
        return 0;
    }
    int ext = k % 3 ? k / 3 + 1 : k / 3;
    a -= ext;
    cout << a << endl;
    return 0;
}