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
int N,M,ans;
map<int, int> mii;
int f(int n, int m)
{
    if(n<0)
        return 0;
    if(mii[n])
        return mii[n];
    int tmp=0;
    for (int i = 1; i <= m; i++)
    {
        tmp += f(n - i, i);
    }
    if(m==M)
        return mii[n] = tmp;
    return tmp;
}
void s(int red, int bef)
{
    if(red<0)
        return;
    if(red==0){
        ans++;
        return;
    }
    for (int i = 1; i <= bef; i++)
    {
        s(red - i, i);
    }
}
int main()
{
    cin >> N >> M;
    mii[0] = 1;
    mii[1] = 1;
    s(N, M);
    cout << ans << endl;
    /*
    cout << f(N, M) << endl;
    cout << mii[2] << " " << mii[3] << " " << mii[4] << ' ' << mii[5] << endl;
    */
    return 0;
}