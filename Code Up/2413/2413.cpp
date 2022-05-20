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
    int N, sum = 0;
    float avg;
    cin >> N;
    int students = N;
    string s;
    getline(cin, s);
    while (N--)
    {
        getline(cin, s);
        int t = 0;
        rep(i, 0, s.length() - 1)
        {
            if (s[i] == ',')
                t++;
        }
        sum += t;
        sum -= 2;
    }
    avg = (float)sum / students;
    cout << fixed << setprecision(2) << avg << endl;
    return 0;
}