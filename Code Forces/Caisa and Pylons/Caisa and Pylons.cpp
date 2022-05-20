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
#include <limits.h>
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
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())

int main()
{
    SS;
    int n;
    cin >> n;
    int *a = new int[n];
    int ans = 0;
    int e = 0;
    cin >> a[0];
    ans += a[0];
    rep(i, 1, n - 1)
    {
        cin >> a[i];
        if (a[i] > a[i - 1])
        {
            if (a[i] - a[i - 1] <= e)
            {
                e -= a[i] - a[i - 1];
            }
            else
            {
                ans += a[i] - a[i - 1] - e;
                e = 0;
            }
        }
        else if (a[i] < a[i - 1])
        {
            e += a[i - 1] - a[i];
            ;
        }
    }
    cout << ans << endl;
    return 0;
}