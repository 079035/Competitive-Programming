/*
ID: jordidc1
PROG: crypt1
LANG: C++
*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <fstream>
#include <string.h>
#include <sstream>
#include <iomanip>
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
using namespace std;
typedef long long ll;

int result(0);
int n;
vector<int> dat;
map<int, bool> m;
int eq[5] = {0};
bool isValid(int num)
{
    return m.find(num) != m.end();
}
void testEquation()
{
    int v1 = eq[0] * 100 + eq[1] * 10 + eq[2];
    int r1 = v1 * eq[4];
    if (r1 > 999)
        return;
    int r2 = v1 * eq[3];
    if (r2 > 999)
        return;
    if (!isValid(r1 % 10))
        return;
    if (!isValid((r1 / 10) % 10))
        return;
    if (!isValid((r1 / 100) % 10))
        return;
    if (!isValid(r2 % 10))
        return;
    if (!isValid((r2 / 10) % 10))
        return;
    if (!isValid((r2 / 100) % 10))
        return;
    int r3 = r1 + r2 * 10;
    if (r3 > 9999)
        return;
    if (!isValid(r3 % 10))
        return;
    if (!isValid((r3 / 10) % 10))
        return;
    if (!isValid((r3 / 100) % 10))
        return;
    if (!isValid((r3 / 1000) % 10))
        return;
    result++;
}
void search(int dgt)
{
    if (dgt >= 5)
    {
        testEquation();
        return;
    }
    rep(i, 0, n - 1)
    {
        eq[dgt] = dat[i];
        search(dgt + 1);
    }
}
int main()
{
    SS;
    ifstream fin("crypt1.in");
    ofstream fout("crypt1.out");
    fin >> n; //fin
    dat.reserve(n);
    rep(i, 0, n - 1)
    {
        int d;
        fin >> d; //fin
        dat.pb(d);
        m[d] = true;
    }
    search(0);
    fout << result << endl;
    return 0;
}