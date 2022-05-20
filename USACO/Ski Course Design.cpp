/*
ID: jordidc1
PROG: skidesign
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

int main()
{
    int n;
    ifstream fin("skidesign.in");
    fin >> n;
    vector<int> v(n);
    rep(i, 0, n - 1)
    {
        fin >> v[i];
    }
    fin.close();
    int minCost = 10000001;
    int cost = 0;
    rep(i, 0, 83)
    {
        cost = 0;
        rep(idx, 0, n - 1)
        {
            if (v[idx] < i)
                cost += (i - v[idx]) * (i - v[idx]);
            else if (v[idx] > i + 17)
                cost += (v[idx] - i - 17) * (v[idx] - i - 17);
        }
        if (cost < minCost)
            minCost = cost;
    }
    ofstream fout("skidesign.out");
    fout << minCost << endl;
    fout.close();
    return 0;
}