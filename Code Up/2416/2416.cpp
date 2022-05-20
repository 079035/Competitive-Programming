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
    string s;
    cin >> n;
    map<string, string> students;
    map<string, char> sex;
    getline(cin, s);
    while (n--)
    {
        getline(cin, s);
        int i;
        for (i = 0; i <= s.length() - 1; i++)
        {
            if (s[i] == ',')
                break;
        }
        i--;
        string name = string(s.begin(), s.begin() + i + 1);
        sex.insert(mp(name, s[i + 2]));
        //cout << name << endl;
        i += 4;
        for (; s[i] != ','; i++)
        {
        }
        i++;
        string friends = string(s.begin() + i, s.end());
        students.insert(mp(name, friends));
    }
    string q;
    int m = 0, f = 0;
    cin >> q;
    string friends = students[q];
    string name = "";
    rep(i, 0, friends.length())
    {
        if (friends[i] == ',' || i == friends.length())
        {
            if (sex[name] == 'F')
                f++;
            else
                m++;
            name = "";
            continue;
        }
        else
        {
            name += friends[i];
        }
    }
    cout << m << endl
         << f << endl;
    return 0;
}