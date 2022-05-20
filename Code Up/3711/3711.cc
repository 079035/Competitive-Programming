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
typedef pair<int, int> PII;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
int a,b,k;
int arr[100000001];
int f(int n)
{
    if(n==0)
        return 0;
    if(arr[n])
        return arr[n];
    if(n%10==k)
    {
        return arr[n] = f(n / 10) + 1;
    }
    return arr[n] = f(n / 10);
}
int main()
{
    cin >> a >> b >> k;
    if(b==0&&k==0)
    {
        cout << 1 << endl;
        return 0;
    }
    ll ans = 0;
    for (int i = 0; i <= b;i++)
    {
        arr[i] = f(i);
        if(i>=a)
            ans += arr[i];
    }
    cout << ans << endl;
    return 0;
}