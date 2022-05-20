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

bool isP(ll n)
{
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    ll limit = sqrt(n);
    if (n % 2 == 0)
        return false;
    for (int j = 3; j <= limit; j += 2)
    {
        if (n % j == 0)
            return false;
    }
    return true;
}

int main()
{
    SS;
    int n;
    cin >> n;
    while (n--)
    {
        ll t;
        cin >> t;
        ll s = sqrt(t);
        if (sq(s) == t && isP(s) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}