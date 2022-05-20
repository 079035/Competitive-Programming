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
int n,m,arr[101][101];
int p[4]={-1,0,0,1}, q[4]={0,-1,1,0};
db area=0;
void f(int x, int y)
{
    if(x<0||x>=n||y<0||y>=m)
        return;
    if(arr[x][y]==0)
        return;
    arr[x][y] = 0;
    area++;
    rep(i,0,3)
    {
        f(x + p[i], y + q[i]);
    }
}
int main()
{
    scanf("%d %d", &m, &n);
    db ans = 0;
    rep(i,0,n-1){
        rep(j,0,m-1){
            cin >> arr[i][j];
        }
    }
    rep(i,0,n-1)
    {
        rep(j,0,m-1){
            if(arr[i][j]==1){
                area = 0;
                f(i, j);
                //cout << area << endl;
                ans += sqrt(area);
            }
        }
    }
    cout << setprecision(4) << fixed << ans << endl;
    return 0;
}