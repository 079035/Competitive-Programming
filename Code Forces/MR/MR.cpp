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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
    int t;
    cin >> t;
    vector<string> v;
    while(t--)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    set<string> dup;
    for (int i = 0; i < v.size()-1;i++){
        for (int j = i + 1; j < v.size();j++){
            if(v[i].substr(0,5)==v[j].substr(0,5))
                dup.insert(v[i].substr(0, 5));
        }
    }
    if(!dup.empty()){
        cout << dup.size() << endl;
        cout << "duplicates: ";
        for (string s:dup){
            cout << s << " ";
        }
        cout << endl;
    }
    else{
        cout << 0 << endl
             << "duplicates: None" << endl;
    }
        return 0;
}