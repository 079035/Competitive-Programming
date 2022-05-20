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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[101][101] = {0};
    int x = 1, i = n, j = 1;
    int tj = j, ti = i;
    for (int k = 1; k <= n * m; k++)
    {
        if (i >= 1 && i <= n && j >= 1 && j <= m)
        { // range
            arr[i][j] = x;
            x++;
            i++;
            j++;
            if (!(i >= 1 && i <= n && j >= 1 && j <= m))
            { //range
                ti--;
                if (ti <= 0)
                {
                    ti = 1;
                    tj++;
                }
                i = ti;
                j = tj;
            }
        }
    }
    rep(i, 1, n)
    {
        rep(j, 1, m)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}