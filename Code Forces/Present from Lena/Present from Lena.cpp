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
    cin.tie(0);              \
    cout.tie(0)
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
    vector<int> arr[20];
    int row = n * 2 + 1, r = 1;
    int h = 1;
    int l = 1;
    rep(i, 1, row)
    {
        int num = 0;
        for (int j = 1; j <= h; j++)
        {
            if (j >= r)
            {
                arr[i].pb(num--);
            }
            else
            {
                arr[i].pb(num++);
            }
        }
        if (l > n)
        {
            h -= 2;
            r--;
        }
        else
        {
            h += 2;
            r++;
        }
        l++;
    }
    int t = row / 2;
    l = 1;
    rep(i, 1, row)
    {
        rep(j, 1, t * 2)
        {
            cout << ' ';
        }
        for (auto itr = arr[i].begin(); itr != arr[i].end(); itr++)
        {
            if (itr == arr[i].end() - 1)
                cout << *itr;
            else
                cout << *itr << ' ';
        }
        cout << endl;
        if (l > n)
            t++;
        else
            t--;
        l++;
    }
    return 0;
}