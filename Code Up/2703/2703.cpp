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
    int n, h;
    cin >> n;
    int up = 0, down = 0, flat = 0;
    int *arr = new int[n];
    rep(i, 0, n - 1)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (arr[i] > arr[i - 1])
                up++;
            else if (arr[i] < arr[i - 1])
                down++;
            else
                flat++;
        }
    }
    cout << up << ' ' << down << endl;
    return 0;
}