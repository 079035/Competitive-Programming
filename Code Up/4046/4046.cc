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
#define mod (ll)(123456789)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
static ll memo[5001][5001];
ll partition_memo(int n, int m){
    ll count = 0, i;
    if (n < m)
        m = n;
    if (memo[n][m] > 0)
        return memo[n][m];
    if (n == 0)
        return memo[n][m] = 1;
    rep(i, 1, m)
        count += partition_memo(n - i, i)%mod;
    return memo[n][m] = count%mod;
}
int main(){
    int n,m;
    cin >> n >> m;
    cout << partition_memo(n, m)%mod << endl;
    return 0;
}