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
#define mod (ll)(1e5 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll arr[100001];

int main()
{
    ll n, k, t=0,lo=1;
    cin >> k >> n;
    rep(i,1,k){
        cin >> arr[i];
        t += arr[i];
    }
    arr[k + 1] = t;
    if(n==k||n==k+1){
        cout << arr[n] << endl;
        return 0;
    }
    rep(i,k+2,n){
        arr[i] = ((arr[i - 1] * 2)%mod - (arr[lo++]%mod)+mod)%mod;
    }
    cout << arr[n] << endl;
    return 0;
}