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
        vector<char> age;
        getline(cin, s);
        int i;
        for (i = 0; i < s.length() && !(s[i] >= 48 && s[i] <= 57); i++)
        {
        }
        sum += (s[i] - 48) * 10 + s[i + 1] - 48;
    }
    avg = (float)sum / students;
    cout << fixed << setprecision(2) << avg << endl;
    return 0;
}