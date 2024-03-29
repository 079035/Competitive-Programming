#include <bits/stdc++.h>
using namespace std;

#define rep(i, from, to) for (int i = from; i < (to); ++i)
#define trav(a, x) for (auto &a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main()
{
    cin.sync_with_stdio(false);
    cin.exceptions(cin.failbit);
    int N;
    cin >> N;
    int cur = 0;
    int res = 0;
    vi r;
    rep(i, 0, N)
    {
        int a;
        cin >> a;
        if (a > cur)
        {
            cur = a;
            res++;
            r.push_back(a);
        }
    }
    cout << res << endl;
    trav(x, r) cout << x << ' ';
    cout << endl;
    exit(0);
}