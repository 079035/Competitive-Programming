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
string sign[4] = {"+", "-", "*", "/"};
vector<string> anss;
void f(VI v, int x, int y, int z)
{
    string ans = to_string(v[0]) + sign[x - 1];
    ans += to_string(v[1]) + sign[y - 1];
    ans += to_string(v[2]) + sign[z - 1];
    ans += to_string(v[3]);
    string s = sign[x - 1];
    s += sign[y - 1];
    s += sign[z - 1];
    //cout << ans << endl;

    int res;
    for (int i = 0; s.length() && i < s.length(); i++)
    {
        if (s[i] == '*')
        {
            res = v[i] * v[i + 1];
            s.erase(s.begin() + i);
            v[i] *= v[i + 1];
            v.erase(v.begin() + i + 1);
            i = -1;
        }
        else if (s[i] == '/')
        {
            if (v[i] % v[i + 1])
                return;
            res = v[i] / v[i + 1];
            s.erase(s.begin() + i);
            v[i] /= v[i + 1];
            v.erase(v.begin() + i + 1);
            i = -1;
        }
    }
    for (int i = 0; s.length() && i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            res = v[i] + v[i + 1];
            s.erase(s.begin() + i);
            v[i] += v[i + 1];
            v.erase(v.begin() + i + 1);
            i = -1;
        }
        else if (s[i] == '-')
        {
            res = v[i] - v[i + 1];
            s.erase(s.begin() + i);
            v[i] -= v[i + 1];
            v.erase(v.begin() + i + 1);
            i = -1;
        }
    }
    //cout<<res<<endl;
    if (res == 24)
        anss.pb(ans);
    return;
}
int main()
{
    string s;
    VI v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    rep(x, 1, 4)
    {
        rep(y, 1, 4)
        {
            rep(z, 1, 4)
            {
                f(v, x, y, z);
            }
        }
    }
    if(anss.empty()){
        cout << "Doesn't Exist" << endl;
        return 0;
    }
    for (auto itr = anss.begin(); itr != anss.end();itr++){
        cout << *itr << endl;
    }
    return 0;
}