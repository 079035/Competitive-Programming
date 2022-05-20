#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string.h>
#include <sstream>
#include <iomanip>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())

struct town
{
    double d;
    int p;
};
int cmp(town &p, town &q)
{
    return p.d < q.d;
}
int main()
{
    SS;
    int n, c;
    const int m = 1000000;
    cin >> n >> c;
    int need = m - c;
    town arr[10001];
    int t = 0;
    double x, y;
    int v;
    rep(k, 0, n - 1)
    {
        cin >> x >> y >> v;
        double dist = sqrt(sq(x) + sq(y));
        //cout << dist << endl;
        arr[k].d = dist;
        arr[k].p = v;
        t += v;
    }
    if (t < need)
    {
        cout << -1 << endl;
        return 0;
    }
    sort(arr, arr + n, cmp);
    double r = 0;
    for (int i = 0; c < m; i++)
    {
        c += arr[i].p;
        r = arr[i].d;
    }
    cout << fixed << setprecision(3) << r << endl;
    return 0;
}