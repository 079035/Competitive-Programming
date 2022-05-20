/*
NAME: jordidc1
TASK: dualpal
LANG: C++
*/
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
typedef long long ll;
ll cnt = 0;

string toBase_B(ll n, ll b)
{
    vector<ll> v;
    string res = "";
    while (n > 0)
    {
        v.push_back(n % b);
        n /= b;
    }
    for (ll i = 1; i <= v.size(); i++)
    {
        ll j = (ll)v[v.size() - i];
        if (j >= 10)
        {
            res += (char)((int)'A' + (j - 10));
        }
        else
            res += (char)(j + 48);
    }
    return res;
}

void isPalindrome(ll n, ll b)
{
    string n_b = toBase_B(n, b);
    for (ll i = 0; i < n_b.length() / 2; i++)
    {
        if (n_b[i] != n_b[n_b.length() - 1 - i])
            return;
    }
    cnt++;
    return;
}

int main()
{
    ll n, s, inc=1;
    ifstream fin("dualpal.in");
    ofstream fout("dualpal.out");
    fin >> n >> s;
    for (ll i = 1; i <= n;)
    {
        cnt = 0;
        for (ll j = 2; j <= 10; j++)
        {
            isPalindrome(s + inc, j);
        }
        if (cnt >= 2){
            fout << s + inc << endl;
            i++;
        }
        inc++;
    }
    exit(0);
}