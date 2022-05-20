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
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)

bool lucky(int n)
{
    while (n > 0)
    {
        if (n % 10 != 7 && n % 10 != 4)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m = 1, t;
    cin >> n;
    while (n)
    {
        if (n % 10 == 4)
            t += m;
        else
            t += 2 * m;
        n /= 10;
        m *= 2;
    }
    cout << t << endl;
    return 0;
}