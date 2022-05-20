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
#define palindrome(s) s == string(s.rbegin(), s.rend())

int n, m, arr[10], curM = 0, curC = 0;
vector<int> ans;
void f(int d, int card, int mana, vector<int> v)
{
    if (mana > n)
        return;
    /*
    cout << "card: " << card << endl
         << "mana: " << mana << endl
         << endl;
         */
    if (mana >= curM && card > curC)
    {
        ans = v;
        curM = mana;
        curC = card;
    }
    if (d >= m)
        return;
    f(d + 1, card, mana, v);
    v.pb(arr[d]);
    f(d + 1, card + 1, mana + arr[d], v);
    return;
}
int main()
{
    SS;
    cin >> n >> m;
    rep(i, 0, m - 1)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    vector<int> v; //empty
    f(0, 0, 0, v);
    if (curM == 0 && curC == 0)
        cout << -1;
    else
    {
        for (auto itr = ans.begin(); itr != ans.end(); itr++)
            cout << *itr << ' ';
    }
    cout << '\n';
    return 0;
}