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

int main()
{
    int n;
    int a, b;
    string s;
    cin >> n;
    getline(cin, s);
    while(n--)
    {
        getline(cin, s);
        if(s[0]=='m')
        {
            s.erase(s.find(','), 1);
            s.erase(s.find(")"));
            s.replace(s.begin(), s.begin() + 10, "");
            stringstream ss(s);
            ss >> a;
            ss >> b;
        }
        else if(s[0]=='f')
        {
            cout << a << endl;
        }
        else if(s[0]=='s')
        {
            cout << b << endl;
        }
    }
    return 0;
}