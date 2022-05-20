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

db from[6000], to[6000];

class BeatTheStar
{
public:
    double doesItMatter(int N, int G)
    {
        from[0] = 1;
        int sum = 0;
        rep(i, 1, N) if (i != G)
        {
            sum += i;
            memset(to, 0.0, sizeof(to));
            rep(x, 1, 5600) if (from[x])
            {
                to[x] += from[x] / 2.0;
                to[x + i] += from[x] / 2.0;
            }
        }
        db ret = 0;
        rep(i, 1, sum + 1)
        {
            int a = sum - i;
            if (abs(a - i) <= G)
                ret += from[i];
        }
        return ret;
    }
};