#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define VI vector<int>
#define palindrome(s) s == string(s.rbegin(), s.rend())
int cmp(int p, int q)
{
    return p > q;
}
int main()
{
    SS;
    int n;
    cin >> n;
    VI v(n);
    rep(i,0,n-1)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    swap(v[0], v[n / 2]);
    rep(i,0,n-1){
        cout << v[i]<<" ";
    }
    cout << endl;
    return 0;
}