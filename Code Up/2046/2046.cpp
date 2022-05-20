#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
//#include <boost/algorithm/string.hpp>
using namespace std;
using namespace __gnu_pbds;
//using namespace boost::algorithm;
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

int main()
{
    string in, out;
    cin >> in >> out;
    vector<string> ins;
    vector<string> outs;
    //special case
    if(in=="/"){
        cout << out << endl;
        return 0;
    }

    int start = 1, end = 2;
    for (; end <= in.length(); end++)
    {
        if(end==in.length()||in[end]=='/'){
            ins.pb(string(in.begin() + start, in.begin() + end));
            start = end + 1;
        }
    }
    start = 1;
    end = 2;
    for (; end <= out.length(); end++)
    {
        if (end == out.length() || out[end] == '/')
        {
            outs.pb(string(out.begin() + start, out.begin() + end));
            start = end + 1;
        }
    }
    /*
    for (auto itr = ins.begin();itr!=ins.end();itr++){
        cout << *itr << endl;
    }
    for (auto itr = outs.begin(); itr != outs.end(); itr++)
    {
        cout << *itr << endl;
    }
    */
    string ans = "";
    int i = 0, j = 0;
    for (; i < ins.size() && j < outs.size();i++,j++)
    {
        if(ins[i]!=outs[j])
            break;
    }
    //cout << i << " " << j << endl;
    int back = ins.size() - 1 - i;
    while(back>0){ // general case
        ans += "../";
        back--;
    }
    if(ans.empty()&&ins[i-1]==outs[j-1])
        ans = "./";
    else if(ans.empty())
        ans = "/";
    for (; j < outs.size(); j++)
    {
            ans += outs[j] + "/";
    }
    ans.erase(ans.end() - 1);
    cout << ans << endl;
    return 0;
}