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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == 'R' && s[1] <= 57 && find(s.begin(), s.end(), 'C') != s.end())
        {
            string row = "";
            int i;
            for (i = 1; s[i] != 'C'; i++)
            {
                row += s[i];
            }
            //cout << row << endl;
            string col = "";
            int c = 0;
            for (int j = s.length() - 1; j > i; j--)
            {
                c += round(pow(10, s.length() - 1 - j)) * (s[j] - 48);
            }
            //cout << c << endl;
            int pow(26);
            while (c > pow)
            {
                c -= pow;
                pow *= 26;
            }
            c--;
            while (pow != 1)
            {
                pow /= 26;
                cout << (char)(c / pow + 'A');
                c %= pow;
            }
            cout << row << endl;
        }
        else
        {
            string row = "", col = "";
            rep(i, 0, s.length() - 1)
            {
                if (s[i] >= 65)
                    col += s[i];
                else
                    row += s[i];
            }
            //cout << col << endl
            //     << row << endl;
            int ncol = 0;
            for (int i = col.length() - 1; i >= 0; i--)
            {
                //cout << (int)(col[i] - 64) << endl;
                //cout << round(pow(26, col.length() - 1 - i)) << endl;
                ncol += (col[i] - 64) * round(pow(26, col.length() - 1 - i));
                //cout << ncol << endl;
            }
            cout << "R" << row << "C" << ncol << endl;
        }
    }
    return 0;
}