#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define PII pair<int, int>
#define VI vector<int>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define db double
#define palindrome(s) s == string(s.rbegin(), s.rend())
int mem[10001][4]; //[n][3]= result
int N;
int f(int n, int m)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3 && (m==2||m==1))
        return 3;
    else if(n==3)
        return 4;
    if (m == 2){
        if(mem[n][m])
            return mem[n][m];
        return mem[n][2]=(f(n - 1, 1)%mod + f(n - 2, 1)%mod)%mod;
    }
    else if (m == 1){
        if(mem[n][m])
            return mem[n][m];
        return mem[n][1]=(f(n - 1, 0)%mod + f(n - 2, 0)%mod)%mod;
    }
    else{
        if(mem[n][m])
            return mem[n][m];
        return mem[n][0] = (f(n - 3, 2) % mod + f(n - 1, 0) % mod + f(n - 2, 0) % mod) % mod;
    }
}
int main()
{
    SS;
    cin >> N;
    if (N == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if (N == 2)
    {
        cout << 2 << endl;
        return 0;
    }
    if (N == 3)
    {
        cout << 4 << endl;
        return 0;
    }
    cout << f(N,0) << endl;
    return 0;
}