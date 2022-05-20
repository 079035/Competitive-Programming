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
    string s;
    int st = -1, en = -1;
    cin>>s;

    for (int i = s.length() - 1; i >= 0;i--){
        if(s[i]==']'){
            en = i;
        }
        else if(s[i]=='['){
            st = i;
        }
        if(st>=0&&en>=0&&en>st){
            s.erase(s.begin() + st, s.begin() + en + 1);
            st = -1;
            en = -1;
            i = s.length();//re-Initialize
            //cout << s << endl;
        }
    }

    cout << s << endl;

    return 0;
}