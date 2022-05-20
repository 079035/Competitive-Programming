#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <set>
#include <fstream>
#include <cmath>
#include <string>
#include <string.h>
#include <iomanip>
#include <functional>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define pb push_back
#define endl '\n'
#define palindrome(s) (s == string(s.rbegin(), s.rend()))
#define palindrome2(s1, s2) (s1 == string(s2.rbegin(), s2.rend()))
typedef long long ll;
using namespace std;

int main()
{
    SS;
    int n, l;
    cin >> n >> l;
    vector<string> v;
    vector<string> u;
    string mid = "";
    rep(i, 0, n - 1)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    rep(i, 0, v.size() - 2)
    {
        rep(j, i + 1, v.size() - 1)
        {
            if (palindrome2(v[i], v[j]))
            {
                u.pb(v[i]);
                u.pb(v[j]);
                v.erase(v.begin() + i);
                i = -1;
                break;
            }
        }
        if (v.size() == 1)
            break;
    }
    /*
    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }
    */
    rep(i, 0, v.size() - 1)
    {
        if (palindrome(v[i]))
        {
            mid = v[i];
            break;
        }
    }
    int len = l * u.size();
    if (mid != "")
        len += l;
    cout << len << endl;
    for (int i = 0; i < u.size(); i += 2)
    {
        cout << u[i];
    }
    cout << mid;
    for (int i = u.size() - 1; i >= 0; i -= 2)
    {
        cout << u[i];
    }
    cout << endl;
    return 0;
}