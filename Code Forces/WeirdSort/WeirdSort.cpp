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
//head

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        bitset<100> s;
        cin >> n >> m;
        int *a = new int[n + 1];
        VI b(m + 1);
        rep(i, 1, n)
                cin >>
            a[i];
        rep(i, 1, m)
                cin >>
            b[i];
        rep(i, 1, n)
        {
            rep(j, 1, n - 1)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    s[j] = 1;
                }
            }
        }
        bool good = true;
        rep(i, 1, n)
        {
            //cout << i << endl;
            if (s[i] == 1 && find(b.begin(), b.end(), i) == b.end())
            {
                cout << "NO" << endl;
                good = false;
                break;
            }
        }
        if (good)
            cout << "YES" << endl;
    }
}