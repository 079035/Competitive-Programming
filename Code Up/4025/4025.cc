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

int n;
int arr[1001];
int mem[1001];

int f(int idx) //앞에있는 자신보다 낮은 인공위성 중 가장 높은 값 +1
{
    if(mem[idx])
        return mem[idx];
    int m = 0;
    for(int i=idx+1;i<=n;i++){
        if(m<f(i))
            m = f(i);
    }
    
    return mem[idx]=m;
}

int main()
{
    cin >> n;
    rep(i,1,n){
        cin >> arr[i];
    }
    if(arr[n-1]>arr[n])
        dp[n - 1] = 1;
    for (int i = n-2; i >= 1;i--){
        if(arr[i]>0)
            dp[i] = *max_element(ans + i + 1, ans + n + 1)+1;
    }
    return 0;
}