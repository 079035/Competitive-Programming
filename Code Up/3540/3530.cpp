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
int n;
void solve(int sum, int next, int u, string res)
{
    if (next > n)
    {
        if (sum == 0)
        {
            cout << res << endl;
        }
    }
    if (u == 1)
    {
        solve(sum + next, next + 1, 1, res + "+" + to_string(next));
        solve(sum + next, next + 1, 2, res + "+" + to_string(next));
        solve(sum + next, next + 1, 3, res + "+" + to_string(next));
    }
    else if (u == 2)
    {
        solve(sum - next, next + 1, 1, res + "-" + to_string(next));
        solve(sum - next, next + 1, 2, res + "-" + to_string(next));
        solve(sum - next, next + 1, 2, res + "+" + to_string(next));
    }
    else
    {
    }
}
int main()
{
    SS;
    cin >> n;
    solve(0, 1, true, "");
    solve(0, 1, false, "");
    return 0;
}