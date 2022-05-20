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

int main()
{
    SS;
    bool use = 0;
    int a, b, r,p, q;
    cin >> a >> b >> r;
    cin >> p >> q;
    if(a+b==r)
    {
        cout << p + q<<" ";
        use = 1;
    }
    if(a-b==r)
    {
        cout << p - q<<" ";
        use = 1;
    }
    if(a*b==r)
    {
        cout << p * q<<" ";
        use = 1;
    }
    if(a/b==r)
    {
        cout << p / q<<" ";
        use = 1;
    }
    if(!use){
        cout << "NO" << endl;
        return 0;
    }
    cout << endl;
    return 0;
}