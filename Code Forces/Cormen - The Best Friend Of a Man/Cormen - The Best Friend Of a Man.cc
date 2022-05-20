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

int main()
{
    SS;
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    int inc = 0;
    rep(i, 0, n - 1)
            cin >>
        arr[i];
    rep(i, 1, n - 1)
    {
        if (arr[i] + arr[i - 1] >= k)
            continue;
        int t = k - arr[i - 1];
        inc += t - arr[i];
        arr[i] = t;
    }
    cout << inc << endl;
    rep(i, 0, n - 1)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}