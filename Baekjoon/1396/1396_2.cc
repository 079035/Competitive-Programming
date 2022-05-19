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

int parent[112345];
int findParent(int a)
{
    if (parent[a] < 0)
        return a;
    return parent[a] = findParent(parent[a]);
}
void merge(int a, int b)
{
    a = findParent(a), b = findParent(b);
    if (a == b)
        return;
    if (parent[a] < parent[b])
        swap(a, b);
    parent[b] += parent[a];
    parent[a] = b;
}

int main()
{
    vector<edge> adj;
    int n, m, q;
    cin >> n >> m;
    rep(i, 0, m - 1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj.pb({c, {a, b}});
    }
    sort(adj.begin(), adj.end());

    vector<pii> query;
    cin >> q;
    rep(i, 0, q - 1)
    {
        int a, b;
        cin >> a >> b;
        query.pb({a, b});
    }

    int lo[112345], hi[112345];
    fill(lo, lo + 112345, -1);
    fill(hi, hi + 112345, m);
    int treeSize[112345];

    while (true)
    {
        vector<int> cand[112345];
        bool flag = false;
        //탐색이 끝나지 않은 쿼리가 있다면, cand[mid]에 저장한다.
        for (int i = 0; i < q; ++i)
            if (lo[i] + 1 != hi[i])
            {
                cand[(lo[i] + hi[i]) / 2].push_back(i);
                flag = true;
            }
        //모든 쿼리가 탐색이 끝났다.
        if (!flag)
            break;

        memset(parent, -1, sizeof(parent));
        for (int i = 0; i < m; ++i)
        {
            //i번째 간선까지 합친 그래프를 만든다.
            merge(adj[i].second.first, adj[i].second.second);
            for (int mid : cand[i])
            {
                if (findParent(query[mid].first) == findParent(query[mid].second))
                {
                    hi[mid] = i;
                    treeSize[mid] = -parent[findParent(query[mid].first)];
                }
                else
                    lo[mid] = i;
            }
        }
    }

    rep(i, 0, q - 1)
    {
        if (hi[i] == m)
            cout << -1 << endl;
        else
            cout << adj[hi[i]].first << " " << treeSize[i] << endl;
    }
    exit(0);
}