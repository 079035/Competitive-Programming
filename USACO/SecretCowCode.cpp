/*
ID: jordidc1
PROG: cowcode
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
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
using namespace std;
typedef long long ll;

string s;
ll n;
char charAt(int k, int total)
{
    if (k < s.length())
    {
        return s[k];
    }
    if (k < total / 2)
    {
        return charAt(k, total / 2);
    }
    else
    {
        return charAt((k - 1) % (total / 2), total / 2);
    }
}

int main()
{
    ifstream fin("cowcode.in");
    ofstream fout("cowcode.out");
    fin >> s >> n;
    ll l = s.length();
    while (l < n)
        l *= 2;
    fout << charAt(n - 1, l) << endl;
    return 0;
}