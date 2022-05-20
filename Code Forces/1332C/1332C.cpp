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
//head
string s;
int t, n, k, ans = 0;
/*
bool good(string str){
    if(str!=string(str.rbegin(),str.rend()))
        return false;
    rep(i,0,n-1-k){
        if(str[i]!=str[i+k])
            return false;
    }
    return true;
}
*/
int cmp(int p, int q){
    return p > q;
}
int main()
{
    cin >> t;
    while(t--){
        ans = 0;
        cin >> n >> k;
        cin >> s;
        rep(i,0,k-1){
            int cnt = 0;
            int alpha[26] = {0};
            for (int j = i; j < n; j+= k) {
                cnt++;
                alpha[s[j] - 'a']++;
            }
            //cout << cnt<<" "<<*max_element(alpha, alpha + 26) << endl;
            ans += cnt - *max_element(alpha, alpha + 26);
        }
        cout << ans << endl;
    }

    return 0;
}