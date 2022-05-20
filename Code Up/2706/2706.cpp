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

string s;
int l;
ll ans = 0;
void f(int idx, ll a)
{
    if (a > ans)
        ans = a;
    if (idx >= l)
        return;
    f(idx + 1, a + (s[idx] - 48));
    f(idx + 1, a + (s[idx] - 48));
    if (l - idx >= 2)
    {
        f(idx + 2, a + ((s[idx] - 48) * 10 + s[idx + 1] - 48));
        f(idx + 2, a + ((s[idx] - 48) * 10 + s[idx + 1] - 48));
    }
    return;
}
int main()
{
    SS;
    cin >> s;
    l = s.length();
    f(0, 0);
    cout << ans << endl;
    return 0;
}