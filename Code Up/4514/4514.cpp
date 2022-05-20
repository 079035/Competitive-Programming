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
typedef pair<int, int> PII;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
int arr[301];
int n, m, ans;
int possible(int val)
{
    int i, sum, cnt;
    for (i = 0, sum = 0, cnt = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum>val){
            cnt++;
            sum = arr[i];
        }
    }
    if(sum+arr[i]>val)
        cnt++;
    if(cnt<=m)
        return 1;
    else
        return 0;
}
void bsearch()
{
    int l = 1, r = n * 100, mid;
    ans = r;
    while(l<=r)
    {
        mid = (l + r) / 2;
        int sum = 0, cnt = 1;
        bool g = 1;
        rep(i,0,n-1){
            if(arr[i]>mid){
                l = mid + 1;
                g = 0;
                break;
            }
            sum += arr[i];
            if(sum>mid){
                cnt++;
                sum = arr[i];
            }
        }
        if(cnt>m||g==0)
            l = mid + 1;
        else{
            r = mid - 1;
            if(mid<ans)
                ans = mid;
        }
    }
    cout << ans << endl;
}
int main()
{
    int sum, cnt;
    cin >> n >> m;
    rep(i, 0, n - 1)
            cin >>
        arr[i];
    bsearch();
    return 0;
}