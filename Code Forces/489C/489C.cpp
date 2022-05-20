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

int main()
{
    int m,s;
    cin >> m >> s;
    if(m==1&&s==0){
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    if(s==0||m*9<s){
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    int sum = 1, i = 0;
    VI a(m, 0), b(m, 0);
    a[0] = 1;
    while(sum!=s){
        if(a[m-1-i]==9)
            i++;
        a[m - 1 - i]++;
        sum++;
    }
    sum = 9;
    if(s<=9){
        sum = s;
        b[0] = s;
    }
    else{
        b[0] = 9;
        i = 1;
        while(sum!=s){
            if(b[i]==9)
                i++;
            b[i]++;
            sum++;
        }
    }
    rep(i,0,m-1){
        cout << a[i];
    }
    cout << " ";
    rep(i,0,m-1){
        cout << b[i];
    }
    cout << endl;
    return 0;
}