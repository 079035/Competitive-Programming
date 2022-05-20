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
#define npos string::npos
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
    double a,b;
    string u;
    vector<string> v = {"B", "KB", "MB", "GB", "TB", "PB", "EB", "ZB"};
    cin>>a>>u;
    int idx = find(v.begin(),v.end(), u)-v.begin();
    u = v[idx - 1];
    
    
    if(a>1000){
        a /= 1000;
        u = v[idx+1];
        a *= pow(10, 3 * (idx+1));
        b = a / pow(2, 10 * (idx));
    }
    else if(a>1)
    {
        u = v[idx];
        a *= pow(10, 3 * idx);
        b = a / pow(2, 10 * (idx));
    }
    else{
        a *= pow(10, 3 * idx);
        b = a / pow(2, 10 * (idx - 1));
    }

    u.insert(u.begin() + 1, 'i');
    cout << fixed << setprecision(2) << b << " " << u << endl;

    return 0;
}