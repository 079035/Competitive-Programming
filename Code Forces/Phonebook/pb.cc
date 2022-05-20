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

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n, s;
        cin >> n >> s;
        if(s=="PARENTHESES")
        {
            n.insert(n.begin(), '(');
            n.insert(n.begin() + 4, ')');
            n.insert(n.begin() + 5, ' ');
            n.insert(n.begin() + 9, '-');
        }
        else if(s=="DASHES")
        {
            n.insert(n.begin() + 3, '-');
            n.insert(n.begin() + 7, '-');
        }
        else
        {
            n.insert(n.begin() + 3, '.');
            n.insert(n.begin() + 7, '.');
        }
        cout << n << endl;
    }
    return 0;
}