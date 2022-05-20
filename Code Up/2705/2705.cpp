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

int main()
{
    SS;
    ll n, ans = 0;
    cin >> n;
    int l, t;
    cin >> l >> t;
    vector<int> v(n + 1);
    rep(i, 0, n - 1)
    {
        cin >> v[i];
    }
    int lim = 0;
    rep(i, 0, n - 1)
    {
        if (v[i] < lim)
            continue;
        int j;
        int val = v[i];
        if (v[i + 1] == v[i])
        {
            for (j = i; v[j] == val && j < n; j++)
                ;
            if (j - i >= l)
            {
                lim = val + t;
                i = j - 1;
                continue;
            }
        }
        ans++;
    }
    ans *= 10000;
    cout << ans << endl;
    return 0;
}