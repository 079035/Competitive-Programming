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
//head

int main()
{
    string g;
    int l,u;
    string a;
    cin >> g >> l >> u >> a;
    db gap = u - l + 1;
    db cnt = 0;
    rep(i,0,g.length()-1){
        if(g[i]=='0'){
            cnt += 1;
        }
        if(g[i]!='0'&&(g[i]!=a[i]))
        {
            cout << 0 << endl;
            return 0;
        }
    }

    rep(i,0,g.length()-1){
        if(g[i]=='0'&&!(a[i]-'0'>=l&&a[i]-'0'<=u)){
            cout << 0 << endl;
            return 0;
        }
    }
    cout << setprecision(9) << pow(1.0 / gap, cnt) * 100.0 << endl;
    return 0;
}