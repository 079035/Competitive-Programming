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
string ret = "";
void g(int x, int y)
{
    if (x == 0)
    {
        return; //종료할 조건.
    }
    g(x / y, y);
    if (x % y < 10){
        int t = x % y;
        ret += to_string(t);
    }
    else if (x % y >= 10)
        ret += to_string(x % y + 55);
}
int main()
{
    ll a, b, k, c=0;
    cin >> a >> b >> k;
    rep(i,a,b){
        bool good = true;
        rep(j,2,k){
            ret = "";
            g(i, j);
            //cout << ret << endl;
            if(!(palindrome(ret))){
                good = false;
                break;
            }
        }
        if(good)
            c++;
    }
    cout << c << endl;
    return 0;
}