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
    string a, b;
    char c;
    cin >> a >> b >> c;
    string l, s;
    if(a.length()>b.length()){
        l = a;
        s = b;
    }
    else{
        l = b;
        s = a;
    }
    string ans = "";
    if(c==':')
    {
        int f = l.length() / s.length();
        //cout << f << endl;
        ans = "";
        int idx = 0;
        rep(i,0,s.length()-1){
            if(a==s){
                ans += s[i];
                ans += string(l.begin()+idx, l.begin()+idx+f);
            }
            else{
                ans += string(l[i], f);
                ans += s[i];
            }
            idx += f;
        }
    }
    else if(c=='^')
    {
        ans = "";
        rep(i,0,s.length()-1)
        {
            if(s[i]==l[i])
            {
                if(s[i]=='D')
                    ans += 'A';
                else
                    ans += (char)((char)s[i] + 1);
            }
            else
                ans += s[i] > l[i] ? s[i] : l[i];
            //cout<<ans;
        }
        if(s.length()!=l.length())
            rep(i,s.length(),l.length()-1)
                ans += l[i];
    }
    else if(c=='%')
    {
        string rev = string(b.rbegin(), b.rend());
        ans = rev + a + b;
    }
    cout << ans << endl;
    return 0;
}