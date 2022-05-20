#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string.h>
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

int main()
{
    SS;
    int n;
    cin >> n;
    int f = 7;
    cout << 7;
    while (f < n)
    {
        cout << 7;
        f *= 10;
        f += 7;
    }
    bool check[5000000] = {0};
    while (true)
    {
        f %= n;
        if (f == 0)
            break;
        if (!check[f])
        {
            check[f] = 1;
            f *= 10;
            f += 7;
            cout << 7;
        }
        else
        {
            f *= 10;
            cout << 0;
        }
    }
    return 0;
}