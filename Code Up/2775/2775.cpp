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

int main()
{
    db h, s, t;
    cin >> h >> s >> t;
    db dmg;
    cin >> dmg;
    h /= t;
    if(h>dmg){
        cout << "X" << endl;
        return 0;
    }
    s = dmg * s / 100;
    if(h+s<=dmg){
        cout << "O" << endl;
        return 0;
    }
    //h += s;
    dmg -= h;
    dmg /= s;
    //cout << fixed<<dmg << endl;
    dmg = 1 - dmg;
    cout << setprecision(6) << fixed << dmg*100 << endl;

    return 0;
}