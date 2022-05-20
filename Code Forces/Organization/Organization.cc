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

struct item{
    string name;
    int utility;
    int weight;
    int cost;
};

int cmp(item p, item q)
{
    if(p.utility==q.utility&&p.weight==q.weight)
        return p.cost < q.cost;
    else if(p.utility==q.utility)
        return p.weight < q.weight;
    return p.utility > q.utility;
}

int main()
{
    int t;
    cin >> t;
    string s;
    item arr[t];
    rep(i,0,t-1)
    {
        cin >> arr[i].name >> arr[i].utility >> arr[i].weight >> arr[i].cost;
    }
    sort(arr, arr + t, cmp);
    rep(i,0,t-1){
        cout << arr[i].name;
        if(i!=t-1)
            cout << ",";
    }
    cout << endl;
    return 0;
}