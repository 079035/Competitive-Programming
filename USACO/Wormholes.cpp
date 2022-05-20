/*
ID: jordidc1
PROG: wormhole
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
#include <string.h>
#include <sstream>
#include <iomanip>
#include <fstream>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())

int n, arr[100001];
int x[100001], y[100001];
int partner[100001];
int next_on_right[100001];
bool cycle_exists(void)
{
    rep(start, 1, n)
    {
        //traverse all cycle starting from start
        int pos = start;
        rep(count, 1, n)
        {
            pos = next_on_right[partner[pos]];
        }
        if (pos != 0)
            return true;
    }
    return false;
}
int solve()
{
    int i, total(0);
    for (i = 1; i <= n; i++)
        if (partner[i] == 0)
            break;
    if (i > n)
    {
        if (cycle_exists())
            return 1;
        else
            return 0;
    }
    for (int j = i + 1; j <= n; j++)
    {
        if (partner[j] == 0)
        {
            partner[i] = j;
            partner[j] = i;
            total += solve();
            partner[i] = partner[j] = 0;
        }
    }
    return total;
}
int main()
{
    ifstream fin("wormhole.in");
    fin >> n;
    rep(i, 1, n)
    {
        fin >> x[i] >> y[i];
    }
    fin.close();
    rep(i, 1, n) //next_on_right
    {
        rep(j, 1, n)
        {
            if (x[j] > x[i] && y[i] == y[j]) // j next on right of i
            {
                if (next_on_right[i] == 0 ||
                    x[next_on_right[i]] - x[i] > x[j] - x[i])
                    next_on_right[i] = j;
            }
        }
    }
    ofstream fout("wormhole.out");
    fout << solve() << endl;
    fout.close();
    return 0;
}