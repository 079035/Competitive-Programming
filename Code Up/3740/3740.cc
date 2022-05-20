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

int main()
{
    int d[101][10001]={0}, N, W;
    cin >> N >> W;
    VI weight(N), value(N);
    rep(i,0,N-1){
        cin >> weight[i] >> value[i];
    }

    rep(i, 1, N)
    {
        rep(j, 1, W)
        {
            if (weight[i - 1] <= j)
            {
                d[i][j] = max(value[i - 1] + d[i - 1][j - weight[i - 1]], d[i - 1][j]);
            }
            else
            {
                d[i][j] = d[i - 1][j];
            }
        }
    }
    cout << d[N][W] << endl;
    return 0;
}