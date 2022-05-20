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
string modified(string &s, int n, int k)
{
    string res_p = s.substr(k - 1, n - k + 1);
    string res_s = s.substr(0, k - 1);
    if (n % 2 == k % 2)
        reverse(res_s.begin(), res_s.end());
    return res_p + res_s;
}
int main()
{
    int t, n, bk;
    string s, bs, tmp;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        bs = modified(s, n, 1);
        bk = 1;
        rep(k, 2, n)
        {
            tmp = modified(s, n, k);
            if (tmp < bs)
            {
                bs = tmp;
                bk = k;
            }
        }
        cout << bs << endl
             << bk << endl;
    }
    return 0;
}