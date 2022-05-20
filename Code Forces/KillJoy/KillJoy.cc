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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        VI a(n);
        bool as = 1, s = 0;
        int sum = 0;
        rep(i,0,n-1){
            cin >> a[i];
            if(a[i]!=x)
                as = 0;
            if(a[i]==x)
                s = 1;
            sum += a[i] - x;
        }
        if(as)
            cout << 0 << endl;
        else if(sum==0||s)
            cout << 1 << endl;
        else{
            cout << 2 << endl;
        }
    }
    return 0;
}