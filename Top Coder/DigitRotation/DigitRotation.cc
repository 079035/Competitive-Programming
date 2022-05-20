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
#define m (ll)(998244353)
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

  
class DigitRotation{
    public:
        ll ans = 0;
        ll mod(string num)
        {
            // Initialize result
            ll res = 0;

            // One by one process all digits of 'num'
            for (int i = 0; i < num.length(); i++)
                res = (res * 10 + (int)num[i] - '0') % m;

            return res; 
        }
    int sumRotations(string X)
    {
        int l = X.length();
        rep(a,0,l-1){
            rep(b,a+1,l-1){
                rep(c,b+1,l-1){
                    string x = X;
                    char tmp = x[a];
                    x[a] = x[c];
                    x[c] = x[b];
                    x[b] = tmp;
                    if(x[0]!='0'){
                        ans += mod(x);
                        ans %= m;
                    }
                }
            }
        }
        return ans;
    }
};