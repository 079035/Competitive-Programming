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
    int h, p, a;
    cin >> h >> p >> a;
    if(p>h||a==0||p<=1){
        for (int i = 0; i < h;i++)
            cout << "#" << endl;
        return 0;
    }
    int cnt = a / 10;
    for (int i = 1; i < p-1;i++){
        cout << "#" << endl;
    }
    cout << "#";
    if(cnt>=1){
        rep(i, 0, cnt - 1) cout << ".";
    }
    rep(i, 1, h - p + 1) cout << "#";
    cout << endl;
    return 0;
}