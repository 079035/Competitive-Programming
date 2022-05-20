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
//head

bool cmp(int &p, int &q){
    return p > q;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k=INT_MAX;
        cin >> n;
        VI v(n), a,b;
        vector<bool> z(n);
        rep(i,0,n-1){
            cin >> v[i];
        }
        rep(i,0,n-1){
            int tmp;
            cin >> tmp;
            z[i] = tmp;
        }
        rep(i,0,n-1){
            if(z[i])
                a.pb(v[i]);
            else
                b.pb(v[i]);
        }
        sort(b.begin(), b.end(), cmp);
        VI ans;
        int itx = 0;
        rep(i,0,n-1){
            if(z[i])
                ans.pb(v[i]);
            else
                ans.pb(b[itx++]);
        }
        for (auto itr = ans.begin(); itr != ans.end();itr++){
            cout << *itr << " ";
        }
        cout << endl;
    }
    return 0;
}