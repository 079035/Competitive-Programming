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
    int n, num=1, p=0;
    stack<int> train;
    cin >> n;
    VI v(n);
    vector<char> seq;
    rep(i,0,n-1){
        cin >> v[i];
    }
    rep(j,0,n*2-1){
        if(!train.empty()&&train.top()==num){
            num++;
            train.pop();
            seq.pb('X');
        }
        else if(p<n){
            seq.pb('S');
            train.push(v[p++]);
        }
    }
    if(seq.size()!=n*2)
        return puts("IMPOSSIBLE");
    rep(i, 0, seq.size() - 1) cout << seq[i];
    cout << endl;
    return 0;
}