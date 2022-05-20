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

int main()
{
    SS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int N = n * 2;
        vector<int> v(N);
        rep(i, 0, N - 1)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << v[N / 2] - v[N / 2 - 1] << endl;
    }
    return 0;
}