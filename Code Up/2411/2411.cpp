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
#define palindrome(s) s == string(s.rbegin(), s.rend())

int main()
{
    SS;
    int N, female = 0, male = 0;
    cin >> N;
    string s;
    getline(cin, s);
    while (N--)
    {
        vector<char> name;
        getline(cin, s);
        int i;
        for (i = 0; i < s.length() && s[i] != ','; i++)
        {
            name.pb(s[i]);
        }
        i++;
        if (s[i] == 'F')
            female++;
        else if (s[i] == 'M')
            male++;
    }
    cout << male << endl
         << female << endl;
    return 0;
}