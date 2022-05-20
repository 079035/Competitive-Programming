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

int N;
VI v;
void pre();
struct r{
    int a, b, c, d;
    int r1, r2;
};
r f(int n)
{
    if(n==1){
        r t;
        t.a = 0;
        t.b = 0;
        t.r1 = v[0];
        t.c = 1;
        t.d = 1;
        t.r2 = v[1];
        return t;
    }
    r tmp = f(n - 1);
    if(tmp.r2+v[n]>tmp.r2){
        tmp.r2 += v[n];
        tmp.d++;
        return tmp;
    }
}
int main()
{
    pre();

    return 0;
}

void pre()
{
    cin >> N;
    bool any_pos = false;
    rep(i, 0, N - 1)
    {
        int t;
        cin >> t;
        if (t > 0)
            any_pos = true;
        v.pb(t);
    }
    if (!any_pos)
    {
        cout << 0 << endl;
        return;
    }
    if (N == 1)
    {
        if (v[0] > 0)
            cout << v[0] << endl;
        else
            cout << 0 << endl;
        return;
    }
}