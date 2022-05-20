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
int N;
int F(VI v, int n, int val, int cnt);
int mem[101][4];
int main()
{
    cin >> N;
    VI v(N);
    rep(i,0,N-1){
        cin >> v[i];
    }
    if(N==1){
        cout << v[0] << endl;
        return 0;
    }
    cout<<F(v, N-1, 0, 0)<<endl;
    return 0;
}

int F(VI v, int n, int val, int cnt)
{
    //cout << val << endl;
    if(mem[n][cnt])
        return mem[n][cnt];
    if(n==0){
        if(cnt!=2)
            return v[n];
        return 0;
    }
    if(cnt==2)
        return mem[n][cnt]=F(v, n - 1, val, 0);
    mem[n][cnt] = max(F(v, n - 1, val, 0), v[n]+F(v, n - 1, val+v[n], cnt + 1));
    return mem[n][cnt];
}