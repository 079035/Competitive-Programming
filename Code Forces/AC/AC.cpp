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
    string name;
    int len;
    double acc, width;
    cin >> name >> len >> acc >> width;
    double time = sqrt(2 * len / acc);
    double speed = time * acc;
    double dist = sq(speed) / 9.805;
    cout << name << " will reach a speed of " <<fixed<< setprecision(2)<<speed << " m/s on a " << len << " meter ramp, crossing " <<setprecision(1)<< dist << " of " << width << " meters, ";
    if(dist<width-5)
        cout << "SPLASH!" << endl;
    else if(dist>width)
        cout << "LIKE A BOSS!" << endl;
    else
        cout << "BARELY MADE IT!" << endl;
    return 0;
}