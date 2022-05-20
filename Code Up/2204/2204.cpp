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
    int a, b;
    ll ans = 0;
    cin >> a >> b;
    rep(i, a, b)
    {
        rep(j, a, b)
        {
            int res = i * j;
            string s;
            stringstream out;
            out << res;
            s = out.str();
            if (palindrome(s))
            {
                if (res > ans)
                    ans = res;
            }
        }
    }
    cout << ans << endl;
    return 0;
}