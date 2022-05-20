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
    int n, idx = 0;
    cin >> n;
    string info[200];
    map<string, int> added;
    for (int k = 0; k < n; k++)
    {
        cin >> info[k];
        int i;
        for (i = 0; i <= info[k].length() - 1; i++)
        {
            if (info[k][i] == ',')
                break;
        }
        string name = string(info[k].begin(), info[k].begin() + i);
        added.insert(mp(name, 0));
    }
    for (int k = 0; k < n; k++)
    {
        int i;
        for (i = 0; i <= info[k].length() - 1; i++)
        {
            if (info[k][i] == ',')
                break;
        }
        i += 4;
        for (; info[k][i] != ','; i++)
            ;
        i++;
        string name = "";
        for (; i <= info[k].length(); i++)
        {
            if (info[k][i] == ',' || i == info[k].length())
            {
                added[name]++;
                name = "";
            }
            else
            {
                name += info[k][i];
            }
        }
    }
    int m = 0;
    vector<string> names;
    for (auto itr = added.begin(); itr != added.end(); itr++)
    {
        if (itr->second > m)
        {
            m = itr->second;
        }
    }
    for (auto itr = added.begin(); itr != added.end(); itr++)
    {
        if (itr->second == m)
        {
            names.pb(itr->first);
        }
    }
    for (auto itr = names.begin(); itr != names.end(); itr++)
        cout << *itr << endl;
    return 0;
}