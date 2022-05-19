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

int main()
{
    SS;
    int n;
    cin >> n;
    int *arr = new int[n];
    rep(i, 0, n - 1)
    {
        cin >> arr[i];
    }
    int depth = 0, maxDepth = 0, idx = 0;
    rep(i, 0, n - 1)
    {
        if (arr[i] == 2)
        {
            if (depth > maxDepth)
            {
                maxDepth = depth;
                idx = i;
            }
            depth--;
        }
        else
            depth++;
    }
    cout << maxDepth << ' ' << idx << ' ';
    int open = 0, closed = 0, maxLength = 0, idx2 = 0;
    idx = -1;
    rep(i, 0, n - 1)
    {
        if (arr[i] == 1)
        {
            if (idx == -1)
                idx = i;
            open++;
        }
        else
            closed++;
        if (open == closed)
        {
            open = 0;
            closed = 0;
            if (i - idx > maxLength)
            {
                maxLength = i - idx + 1;
                idx2 = idx + 1;
            }
            idx = -1;
        }
    }
    cout << maxLength << ' ' << idx2 << endl;
    return 0;
}