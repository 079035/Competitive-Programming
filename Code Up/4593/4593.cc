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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }

int main()
{
    int w, l, n, x, y, ans(0);
    int m[100][2];
    cin >> w >> l >> n;
    rep(i,0,n-1){
        cin>>m[i][0]>>m[i][1];
    }
    cin >> x >> y; // dong-geun-chan's location
    
    rep(i,0,n-1){
        if(m[i][0]==x)
            ans += abs(m[i][1] - y);
        else if(x==1){
            if(m[i][0]==2){
                ans += min(y + l + m[i][1], w - y + l + w - m[i][1]);
            }
            else if(m[i][0]==3){
                ans += y + m[i][1];
            }
            else if(m[i][0]==4){
                ans += w - y + m[i][1];
            }
        }
        else if(x==2){
            if(m[i][0]==1){
                ans += min(y + l + m[i][1], w - y + l + w - m[i][1]);
            }
            else if (m[i][0] == 3)
            {
                ans += y + l - m[i][1];
            }
            else if (m[i][0] == 4)
            {
                ans += w - y + l - m[i][1];
            }
        }
        else if(x==3){
            if(m[i][0]==1){
                ans += y + m[i][1];
            }
            else if(m[i][0]==2){
                ans += l - y + m[i][1];
            }
            else if(m[i][0]==4){
                ans += min(l - y + w + l - m[i][1], y + w + m[i][1]);
            }
        }
        else if(x==4){
            if(m[i][0]==1){
                ans += y + w - m[i][1];
            }
            else if(m[i][0]==2){
                ans += l - y + w - m[i][1];
            }
            else if(m[i][0]==3){
                ans += min(y + w + m[i][1], l - y + w + l - m[i][1]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}