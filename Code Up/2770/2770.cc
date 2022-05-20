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

int main()
{
    int n, ans;
    cin >> n;
    if(n==1){
        cout << 0 << endl;
        return 0;
    }
    VI arr(n);
    int cnt1 = 0, cnt2 = 0, idx=-1;
    rep(i,0,n-1){
        cin >> arr[i];
        if(arr[i]==1){
            cnt1++;
        }
        else{
            if(idx==-1)
                idx = i;
            cnt2++;
        }
    }
    ans = min(cnt1, cnt2);
    if(idx==-1){
        cout << 0 << endl;
        return 0;
    }
    int before1 = 0, before2 = 0, after1 = 0, after2 = 0;
    if(arr[0]==1){
        before1++;
        after1 = cnt1 - 1;
        after2 = cnt2;
    }
    else {
        before2++;
        after2 = cnt2 - 1;
        after1 = cnt1;
    }
    rep(i, 1, n - 1){
        ans = min(ans, before2 + after1);
        if(arr[i]==1){
            before1++;
            after1--;
        }
        else{
            before2++;
            after2--;
        }
    }
    cout << ans << endl;
    return 0;
}