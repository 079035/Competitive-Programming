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
int n,m,arr[21][21],sx,sy,ex,ey,ans[21][21];
int loop(0);
vector<PII> v;
void f(int x, int y)
{
    if(x<0||x>=n||y<0||y>=m)
        return;
    ex = x;
    ey = y;
    if(arr[x][y]==0)
        return;
    v.pb({x, y});
    if(arr[x][y]==1){
        arr[x][y] = 0;
        f(x, y + 1);
    }
    else if(arr[x][y]==2){
        arr[x][y] = 0;
        f(x + 1, y);
    }
    else if(arr[x][y]==3){
        arr[x][y] = 0;
        f(x, y - 1);
    }
    else if(arr[x][y]==4){
        arr[x][y] = 0;
        f(x - 1, y);
    }
}
int main()
{
    cin>>n>>m;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cin >> arr[i][j];
        }
    }
    if(n==1&&m==1)
    {
        cout << 0 << endl
             << 0 << endl;
        return 0;
    }
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            if(arr[i][j]>0)
            {
                ex = -1;
                ey = -1;
                sx = i;
                sy = j;
                f(i, j);
                if(sx==ex&&sy==ey){
                    //cout << ex << " " << ey << endl;
                    for (auto itr = v.begin(); itr != v.end();itr++)
                    {
                        ans[itr->fi][itr->se] = 1;
                    }
                    loop++;
                }
            }
            v.clear();
        }
    }
    cout << loop << endl;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}