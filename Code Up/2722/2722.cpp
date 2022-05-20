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
int f(int n)
{
    if (n == 1)
        return 5;
    if (n > 1)
    {
        return 5 * n - (3 + 2 * (n - 2)) + f(n - 1);
    }
}
int main()
{
    SS;
    cin >> n;
    //duplicate : 3, 5, 7 ...
    cout << f(n) << endl;
    return 0;
}