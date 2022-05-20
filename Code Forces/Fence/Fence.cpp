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
    int n, k;
    int f = 0;
    cin >> n >> k;
    int a[150001] = {0};
    int b[150001] = {0};
    rep(i, 1, n)
    {
        cin >> a[i];
        if (f >= k)
        {
            b[i] = a[i] + b[i - 1] - a[i - k];
        }
        else
        {
            if (i == 1)
                b[i] = a[i];
            else
                b[i] += a[i] + b[i - 1];
            f++;
        }
    }
    int m = INT_MAX;
    int idx = 0;
    rep(i, k, n)
    {
        if (b[i] < m)
        {
            m = b[i];
            idx = i;
        }
    }
    /*
    rep(i, 1, n)
    {
        cout << b[i] << ' ';
    }
    cout << endl;
    */
    cout << idx - k + 1 << endl;
    return 0;
}