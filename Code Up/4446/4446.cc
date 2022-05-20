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
typedef map<int, int> mii;
typedef long long ll;
typedef double db;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }

struct block{
    int a;
    int h;
    int w;
    int index;
};
bool cmp(block &p, block &q)
{
    return p.w < q.w;
}
int n;
vector<block> v(101);
int ans[101], nxt[101], cnt[101];
void printTower(int idx)
{
    if(idx!=0){
        printTower(nxt[idx]);
        cout << v[idx].index << endl;
    }
}
void dp()
{
    int maxHeight = 0, idx = 0;
    rep(i,1,n)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if(v[i].a>v[j].a){
                if(ans[i]<ans[j]+v[i].h){
                    ans[i] = ans[j] + v[i].h;
                    nxt[i] = j;
                    cnt[i] = cnt[j] + 1;
                }
            }
        }
        if(maxHeight<ans[i]){
            maxHeight = ans[i];
            idx = i;
        }
    }
    cout << cnt[idx] << endl;
    printTower(idx);
}
int main()
{
    cin>>n;

    rep(i, 1, n)
    {
        cin >> v[i].a >> v[i].h >> v[i].w;
        v[i].index = i;
    }
    sort(v.begin(), v.begin()+n+1, cmp);
    
    dp();

    return 0;
}