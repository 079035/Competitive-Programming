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
    string info[200];
    cin >> n;
    map<string, string> students;
    map<string, char> sex;
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
        i--;
        string name = string(info[k].begin(), info[k].begin() + i + 1);
        sex.insert(mp(name, info[k][i + 2]));
        //cout << name << endl;
        i += 4;
        for (; info[k][i] != ','; i++)
        {
        }
        i++;
        string friends = string(info[k].begin() + i, info[k].end());
        students.insert(mp(name, friends));
        added.insert(mp(name, 0));
    }
    string name = "";
    for (auto itr = students.begin(); itr != students.end(); itr++)
    {
        string f = itr->second;
        name = "";
        for (int j = 0; j <= f.length(); j++)
        {
            if (f[j] == ',' || j == f.length())
            {
                if (sex[name] != sex[itr->first])
                    added[name]++;
                name = "";
            }
            else
            {
                name += f[j];
            }
        }
    }
    /*
    for (auto itr = added.begin(); itr != added.end(); itr++)
    {
        cout << itr->first << ' ' << itr->second << endl;
    }
    */
    int m = -1;
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
            cout << itr->first << endl;
    }
    return 0;
}