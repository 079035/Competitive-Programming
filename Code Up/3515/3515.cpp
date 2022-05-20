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
    cin.tie(0);              \
    cout.tie(0)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define palindrome(s) s == string(s.rbegin(), s.rend())

int arr[10][10], n, ans = 0;
void bt(int c, int d, vector<int> v)
{
    if (c > ans)
        ans = c;
    if (d == n)
        return;
    //cout << "c: " << c << endl;
    //cout << "ans: " << ans << endl;
    rep(i, 0, n - 1)
    {
        bool ok = true;
        for (auto itr = v.begin(); itr != v.end(); itr++)
        {
            if (i == *itr)
                ok = false;
        }
        if (!ok)
            continue;
        v.pb(i);
        bt(c + arr[d][i], d + 1, v);
        v.pop_back();
    }
}
int main()
{
    SS;
    cin >> n;
    rep(i, 0, n - 1)
    {
        rep(j, 0, n - 1)
        {
            cin >> arr[i][j];
        }
    }
    vector<int> v;
    bt(0, 0, v);
    cout << ans << endl;
    return 0;
}