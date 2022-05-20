#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
//#include <queue>
#include <set>
//#include <string.h>
//#include <sstream>
//#include <iomanip>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())

int main()
{
    //SS;
    int n;
    cin >> n;
    //cout << "Ini" << endl;
    map<string, int> names;
    vector<string> mes(n);
    vector<string> friends[200];
    string s;
    for (int k = 0; k < n; k++)
    {
        cin >> s;
        string name = "";
        int i;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == ',')
                break;
            name += s[i];
        }
        //cout << "name: " << name << endl;
        i += 3;
        for (; i < s.length(); i++)
            if (s[i] == ',')
                break;
        i++;
        names.insert(mp(name, 0));
        mes[k] = name;
        string f = "";
        for (; i <= s.length(); i++)
        {
            if (s[i] == ',' || i == s.length())
            {
                friends[k].pb(f);
                f = "";
            }
            else
                f += s[i];
        }
        /*
        for (auto itr = friends[k].begin(); itr != friends[k].end(); itr++)
        {
            cout << *itr << ' ';
        }
        cout << endl;
        */
    }
    string q;
    cin >> q;
    names[q] = 1;
    //cout << q << endl;
    //cout << "fwiends" << endl;
    /*
    for (int i = 0; i < n; i++)
    {
        for (auto itr = friends[i].begin(); itr != friends[i].end(); itr++)
        {
            cout << *itr << ' ';
        }
        cout << endl;
    }
    */
    auto start = find(mes.begin(), mes.end(), q);
    int idx = (int)(start - mes.begin());
    //cout << idx << endl;
    int ans = 0;
    for (int i = 0; i < friends[idx].size(); i++)
    {
        string now = friends[idx][i];
        //cout << now << endl;
        auto st = find(mes.begin(), mes.end(), now);
        int tmp = (int)(st - mes.begin());
        //cout << "idx:" << tmp << endl;
        if (names[now] == 0)
        {
            ans++;
            names[now] = 1;
        }
        for (int j = 0; j < friends[tmp].size(); j++)
        {
            if (names[friends[tmp][j]] == 0)
            {
                ans++;
                names[friends[tmp][j]] = 1;
            }
        }
        //cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}