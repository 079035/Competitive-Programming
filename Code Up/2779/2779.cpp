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
int arr[10][10];
int p[4] = {-1, 0, 0, 1}, q[4] = {0, -1, 1, 0};
void f(int x, int y)
{
    if(x<0||x>=10||y<0||y>=10)
        return;
    if(arr[x][y]==0)
        return;
    arr[x][y] = 0;
    rep(i,0,3){
        f(x + p[i], y + q[i]);
    }
}
int main()
{
    rep(i,0,9)
    {
        rep(j,0,9)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    rep(i,0,9){
        rep(j,0,9)
        {
            if(arr[i][j]==1)
            {
                f(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}