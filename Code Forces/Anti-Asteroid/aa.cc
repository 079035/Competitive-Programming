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
#define npos string::npos
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

struct coor{
    int x, y;
    double d;
};
bool comp(coor p, coor q)
{
    return p.d < q.d;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        coor arr[n];
        rep(i,0,n-1){
            cin >> arr[i].x >> arr[i].y;
            arr[i].d = sqrt(sq(arr[i].x) + sq(arr[i].y));
        }
        sort(arr, arr + n, comp);
        rep(i,0,n-1){
            cout << arr[i].x << " " << arr[i].y << endl;
        }
    }
    return 0;
}