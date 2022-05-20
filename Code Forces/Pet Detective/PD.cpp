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
    string arr[100];
    string line;
    int i = 0;
    while (cin >> line)
    {

        arr[i++] = line;
    }
    for (int j = 0; j < i; j++)
    {
        string s = arr[j];
        size_t found = s.find("P");
        if (found != string::npos)
        {
            cout << "Ace, move fast, pigeon is at (" << found << "," << j << ")" << endl;
            return 0;
        }
    }
    cout << "No pigeon, try another map, Ace" << endl;
    return 0;
}