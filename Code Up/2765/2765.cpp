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

int main()
{
    int n,m;
    cin >> n;
    VI a(n);
    set<int> g, h;
    rep(i,0,n-1){
        cin >> a[i];
        h.insert(a[i]);
    }
    cin >> m;
    VI b(m);
    rep(i,0,m-1){
        cin >> b[i];
        if(find(a.begin(),a.end(),b[i])!=a.end())
            g.insert(b[i]);
        h.insert(b[i]);
    }
    for(int i:g){
        cout << i << " ";
    }
    if(g.empty())
        cout << 0;
    cout << endl;
    for(int i:h){
        cout << i << " ";
    }
    if(h.empty()){
        cout << 0;
    }
    cout << endl;
    return 0;
}