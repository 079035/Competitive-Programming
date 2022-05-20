/*
ID: jordidc1
PROG: combo
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
#include <tuple>
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
using namespace std;
typedef long long ll;

int main()
{
    //SS;
    ifstream fin("combo.in");
    ofstream fout("combo.out");
    int n;
    fin >> n;
    int f1, f2, f3;
    fin >> f1 >> f2 >> f3;
    int m1, m2, m3;
    fin >> m1 >> m2 >> m3;
    if (n == 1)
    {
        fout << 1 << endl;
        return 0;
    }
    set<tuple<int, int, int>> s;
    for (int i = -2; i <= 2; i++)
    {
        int n1 = f1 + i;
        if (n1 <= 0)
            n1 = n + n1;
        if (n1 > n)
            n1 = n1 - n;
        for (int j = -2; j <= 2; j++)
        {
            int n2 = f2 + j;
            if (n2 <= 0)
                n2 = n + n2;
            if (n2 > n)
                n2 -= n;
            for (int k = -2; k <= 2; k++)
            {
                int n3 = f3 + k;
                if (n3 > n)
                    n3 -= n;
                if (n3 <= 0)
                    n3 = n + n3;
                s.insert(mt(n1, n2, n3));
            }
        }
    }
    for (int i = -2; i <= 2; i++)
    {
        int n1 = m1 + i;
        if (n1 <= 0)
            n1 = n + n1;
        if (n1 > n)
            n1 -= n;
        for (int j = -2; j <= 2; j++)
        {
            int n2 = m2 + j;
            if (n2 <= 0)
                n2 = n + n2;
            if (n2 > n)
                n2 -= n;
            for (int k = -2; k <= 2; k++)
            {
                int n3 = m3 + k;
                if (n3 > n)
                    n3 -= n;
                if (n3 <= 0)
                    n3 = n + n3;
                s.insert(mt(n1, n2, n3));
            }
        }
    }
    fout << s.size() << endl;
    return 0;
}