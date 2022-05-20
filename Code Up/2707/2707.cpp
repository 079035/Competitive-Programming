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
#define logb(a, b) log(a) / log(b)

int main()
{
    SS;
    int n;
    cin >> n;
    double res;
    //cout << pow(n, 1.0 / (float)3) << endl;
    for (int i = 2; i <= n; i++)
    {
        res = log(n) / log(i);
        res = round(res * 10000000) / 10000000.0;
        if (res - (int)(res) == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}