#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
int N;
int mem[100001][4];
int f(int n, int i)
{
    if(mem[n][i])
        return mem[n][i];
    if(n==1)
        return 1;
    if(i==1)
        return mem[n][1] = (f(n - 1, 2) + f(n - 1, 3))%9901;
    else if(i==2)
    {
        return mem[n][2] = (f(n - 1, 1) + f(n - 1, 3))%9901;
    }
    else { //i==3 i.e. no filling in current level
        return mem[n][3] = (f(n - 1, 1) + f(n - 1, 2) + f(n - 1, 3))%9901;
    }
}
int main()
{
    cin >> N;
    if(N==1){
        cout << 3 << endl;
        return 0;
    }
    cout << (f(N,1)+f(N,2)+f(N,3))%9901 << endl;
    return 0;
}