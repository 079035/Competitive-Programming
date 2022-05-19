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
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
typedef pair<int, pii> edge;

int n,m,q;
vector<edge> adj;
int parent[112345];
int findParent(int a)
{
    if(parent[a]<0)
        return a;
    return parent[a] = findParent(parent[a]);
}
void merge(int a, int b)
{
    a = findParent(a), b = findParent(b);
    if(a==b)
        return;
    if(parent[a]<parent[b])
        swap(a, b);
    parent[b] += parent[a];
    parent[a] = b;
    return;
}

int main()
{
    cin >> n >> m;
    rep(i,0,m-1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj.pb({c, {a, b}});
    }
    sort(adj.begin(), adj.end());

    vector<pii> query;
    cin >> q;
    rep(i,0,q-1){
        int a, b;
        cin >> a >> b;
        query.pb({a, b});
    }

    int ans[112345], treeSize[112345];
    memset(ans, -1, sizeof(ans));
    memset(parent, -1, sizeof(parent));

    rep(i,0,m-1)
    {
        merge(adj[i].second.first, adj[i].second.second);
        rep(j,0,q-1){
            if(ans[j]==-1&&findParent(query[j].first)==findParent(query[j].second)){
                ans[j] = i;
                treeSize[j] = -1*parent[findParent(query[j].first)];
            }
        }
    }

    rep(i,0,q-1)
    {
        if(ans[i]==-1)
            cout << -1 << endl;
        else
            cout << adj[ans[i]].first << " " << treeSize[i] << endl;
    }
    exit(0);
}