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
ll n, m, t, a[3000001], k;
int main()
{
    cin >> n >> m;
    if (n - 1 <= m && m <= 2*(n + 1))
    {
        if(m==n-1){
            a[0] = -1;
            a[m + 1] = -1;
            t = n - 1;
        }
        else if (m == n)
        {
            a[m + 1] = -1;
            t = n;
        }
        else t = n + 1;
        k = m % t;
        if (k == 0 && m != t) k = n + 1;
        if (a[0] == -1) cout<<"0";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != -1){
            if (k > 0) cout<<"110";
            else cout<<"10";
            k--;
            }
        }
        if (a[m + 1] != -1) {
            if (k > 0) cout<<"11"<<endl;
            else cout<<"1"<<endl;
        }
    }
    else
        cout << -1 << endl;
    return 0;
}