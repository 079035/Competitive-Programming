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

int n, m, inDegree[201];
VI a[201];
void topologicalSort(){
    int res[201];
    vector<int> Q;
    rep(i,1,n){
        if(inDegree[i]==0)
            Q.pb(i);
    }
    rep(i,1,n){
        if(Q.empty()){
            cout << -1 << endl;
            return;
        }
        int x = Q.front();
        //cout << x << endl;
        Q.erase(Q.begin());
        res[i] = x;
        if(a[x].size()>0)
        rep(i, 0, a[x].size()-1){
            int y = a[x][i];
            if(--inDegree[y]==0){
                Q.pb(y);
            }
        }
        sort(Q.begin(), Q.end());
    }
    rep(i,1,n){
        cout << res[i] << endl;
    }
    return;
}
int main()
{
    int p, q;
    cin >> n >> m;
    rep(i,1,m)
    {
        cin >> p >> q;
        a[p].pb(q);
        inDegree[q]++;
    }
    topologicalSort();
    return 0;
}