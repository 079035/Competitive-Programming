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
const int maxn = 1e5 + 50;
char ch[maxn];
int a[maxn];
int main()
{
    int t, n, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d ", &n, &x);
        map<int, int> h;
        int s1 = 0, s0 = 0;
        int ans = 0;
        int ma = -maxn, mi = maxn;
        for (int i = 1; i <= n; i++)
        {
            scanf("%c", &ch[i]);
            if (ch[i] == '1')
                s1++;
            if (ch[i] == '0')
                s0++;
            if (s0 - s1 == x)
                ans++;
            h[s0 - s1]++;
            ma = max(ma, s0 - s1);
            mi = min(mi, s0 - s1);
        }
        int p = s0 - s1;
        if (ans > 0 && p == 0)
        {
            printf("-1\n");
            continue;
        }
        if (p == 0 && ans == 0)
        {
            printf("0\n");
            continue;
        }
        ans = 0;
        for (int i = mi; i <= ma; i++)
        {
            if (p > 0 && (x - i) % p == 0 && (x - i) >= 0)
                ans += h[i];
            if (p < 0 && (x - i) <= 0 && (i - x) % (-p) == 0)
                ans += h[i];
        }
        if (x == 0)
            ans++;
        printf("%d\n", ans);
    }
    return 0;
}