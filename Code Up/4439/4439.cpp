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
int n, k, open[21], dp[21][21][21];
int mov(int step, int x, int y){
    if(step>k)
        return 0;
    if(dp[step][x][y]!=-1)
        return dp[step][x][y];
    return dp[step][x][y] = min(
        abs(y - open[step]) + mov(step + 1, x, open[step]), 
        abs(x - open[step]) + mov(step + 1, y, open[step])
        );
}
int main()
{
    cin >> n;
    int i, j, x, y;
    cin >> x >> y >> k;
    for(i=0;i<=k;i++)
			for(j=0;j<=n;j++)
                for (int a = 0; a <= n;a++)
                    dp[i][j][a] = -1;
    rep(b, 1, k) cin >> open[b];
    cout << mov(1, x, y) << endl;
    return 0;
}