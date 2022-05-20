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

int cmp(string p, string q)
{
    if (p.length() == q.length())
    {
        return p > q;
    }
    return p.length() > q.length();
}
int main()
{
    SS;
    int n;
    //0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29
    //                    A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T
    cin >> n;
    string *arr = new string[n];
    rep(i, 0, n - 1)
            cin >>
        arr[i];
    sort(arr, arr + n, cmp);
    rep(i, 0, n - 1)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}