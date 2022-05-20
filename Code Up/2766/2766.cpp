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
    int n,d,a,b;
    int p[8] = {-1, -1, -1, 0, 0, 1, 1, 1}, q[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    cin >> n;
    int arr[101][101];
    rep(i,1,n){
        rep(j,1,n){
            cin >> arr[i][j];
        }
    }
    cin >> d;
    rep(i,1,d){
        cin >> a >> b;
        arr[a][b] = 0;
        rep(j,0,7){
            if(a+p[j]<1||a+p[j]>n||b+q[j]<1||b+q[j]>n)
                continue;
            arr[a + p[j]][b + q[j]] = 0;
        }
    }
    int ans(0);
    rep(i,1,n){
        rep(j,1,n){
            ans += arr[i][j];
        }
    }
    cout << ans << endl;
    return 0;
}