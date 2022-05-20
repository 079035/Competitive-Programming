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
#define mod (ll)(1e4)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
int d[101][4][4];
map<int, int> inuse;
int f(int n, int now, int prev)
{
    if (n < 3)
        return 1;
    if(d[n][now][prev])
        return d[n][now][prev];
    if(inuse[n]&&inuse[n]!=now)
        return 0;
    rep(i,1,3){
        if(now==prev&&now==i)
            continue;
        if (inuse[n-1] && inuse[n-1] != prev)
            continue;
        if(inuse[n-2]&&inuse[n-2]!=i)
            continue;
        d[n][now][prev] += f(n - 1, prev, i)%mod;
    }
    return d[n][now][prev]%mod;
}
int main()
{
    int n, k;
    //answer: d[n][1][1]+d[n][1][2]+d[n][1][3]+d[n][2][1]+d[n][2][2]+d[n][2][3]+d[n][3][1]+d[n][3][2]+d[n][3][3]
    //d[day][1][1]=d[day-1][1][2,3];
    //d[day][1][2]=d[day-1][2][1,2,3];
    //d[day][1][3]=d[day-1][3][1,2,3];

    //d[day][2][1]=d[day-1][1][1,2,3];
    //d[day][2][2]=d[day-1][2][1,3];
    //d[day][2][3]=d[day-1][3][1,2,3];

    //d[day][3][1]=d[day-1][1][1,2,3];
    //d[day][3][2]=d[day-1][2][1,2,3];
    //d[day][3][3]=d[day-1][3][1,2];
    cin >> n >> k;
    int a, b;
    rep(i,1,k){
        cin >> a >> b;
        inuse[a] = b;
    }
    int ans = 0;
    rep(i,1,3){
        rep(j,1,3){
            if (inuse[n] && inuse[n] != i)
                continue;
            if(inuse[n-1]&&inuse[n-1]!=j)
                continue;
            ans += f(n, i, j) % mod;
            ans %= mod;
            //cout << d[n][i][j] << endl;
        }
    }
    cout << ans % mod << endl;
    return 0;
}