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
struct interval
{
    int s;
    int e;
};
int cmp(interval p, interval q)
{
    return p.e - p.s < q.e - q.s;
}
int main()
{
    SS;
    int n, x, y;
    cin >> n >> x >> y;
    interval *arr = new interval[n];
    rep(i, 0, n - 1)
    {
        cin >> arr[i].s >> arr[i].e;
    }
    sort(arr, arr + n, cmp);
    vector<int> v(x), w(y);
    rep(i, 0, x - 1)
    {
        cin >> v[i];
    }
    rep(i, 0, y - 1)
    {
        cin >> w[i];
    }
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    int ans = 10000001;
    rep(i, 0, n - 1)
    {
        vector<int>::iterator lo = lower_bound(v.begin(), v.end(), arr[i].s);
        vector<int>::iterator hi = lower_bound(w.begin(), w.end(), arr[i].e);
        if (lo == v.end())
            lo--;
        else if (*lo != arr[i].s)
            lo--;
        if (hi == w.end())
            continue;
        int val = *hi - *lo;
        //cout << val << endl;
        if (val < ans)
            ans = val;
    }
    cout << ans + 1 << endl;
    return 0;
}
/*
3 4 2
15 21
5 10
7 25
4 14 25 2
13 21
*/