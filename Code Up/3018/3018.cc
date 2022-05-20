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
struct cv{
    int num;
    int dist;
    int price;
    int ur;
}s[500];
bool sbd(cv a, cv b);
bool sbp(cv a, cv b);
bool sbu(cv a, cv b);
int main()
{
    int t;
    cin >> t;
    rep(i,0,t-1){
        cin >> s[i].num >> s[i].dist >> s[i].price;
    }
    sort(s, s + t, sbd);
    rep(i,0,t-1){
        s[i].ur += i + 1;
    }
    sort(s, s + t, sbp);
    rep(i,0,t-1){
        s[i].ur += i + 1;
    }
    sort(s, s + t, sbu);
    cout << s[0].num << " " << s[0].dist << " " << s[0].price << endl;
    return 0;
}
bool sbd(cv a, cv b)
{
    return a.dist<b.dist;
}
bool sbp(cv a, cv b)
{
    return a.price < b.price;
}
bool sbu(cv a, cv b)
{
    if(a.ur<b.ur)
        return true;
    if(a.ur>b.ur)
        return false;
    if(a.dist<b.dist)
        return true;
    return false;
}