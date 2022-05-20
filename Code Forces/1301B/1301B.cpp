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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll *arr = new ll[n];
        vector<ll> v;
        rep(i, 0, n - 1)
        {
            cin >> arr[i];
        }
        ll diff = 0;
        rep(i, 0, n - 1)
        {
            if (arr[i] == -1)
                continue;
            if (i == 0)
            {
                if (arr[1] == -1)
                    v.pb(arr[0]);
            }
            else if (i == n - 1)
            {
                if (arr[n - 2] == -1)
                    v.pb(arr[n - 1]);
            }
            else
            {
                if (arr[i - 1] == -1 || arr[i + 1] == -1)
                    v.pb(arr[i]);
            }
        }
        sort(v.begin(), v.end());
        ll k = 0;
        if (v.empty())
        {
            diff = 0;
            k = 1;
        }
        else
        {
            diff = v[v.size() - 1] - (v[v.size() - 1] + v[0]) / 2;
            k = (v[v.size() - 1] + v[0]) / 2;
        }
        rep(i, 0, n - 2)
        {
            if (arr[i] == -1 || arr[i + 1] == -1)
                continue;
            if (abs(arr[i + 1] - arr[i]) > diff)
                diff = abs(arr[i + 1] - arr[i]);
        }
        cout << diff << ' ' << k << endl;
    }
    return 0;
}