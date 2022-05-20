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
#define npos string::npos
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
inline double round(double val)
{
    if (val < 0)
        return ceil(val - 0.5);
    return floor(val + 0.5);
}
int main()
{
    int t;
    cin >> t;
    db f1, f2;
    db c11, c21, c12, c22;
    while(t--)
    {
        cin >> c11 >> c21 >> c12 >> c22 >> f1 >> f2;
        db i11 = c22 / (c11 * c22 - c21 * c12);
        db i21 = -c21 / (c11 * c22 - c21 * c12);
        db i12 = -c12 / (c11 * c22 - c21 * c12);
        db i22 = c11 / (c11 * c22 - c21 * c12);
        
        i11=round(i11 * 10000) / 10000.0;
        i21=round(i21 * 10000) / 10000.0;
        i12 = round(i12 * 10000) / 10000.0;
        i22 = round(i22 * 10000) / 10000.0;
        //cout << i11 << " " << i21 << " " << i12 << " " << i22 << endl;
        db e1 = f1 * i11 + i12 * f2;
        //cout << e1 << endl;
        cout << round(e1) << " ";
        db e2 = i21 * f1 + i22 * f2;
        //cout << e2 << endl;
        cout << round(e2) << endl;
    }
    return 0;
}