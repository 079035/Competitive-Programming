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

//12
string gem[] = {"Lapis", "Topaz", "Tourmaline", "Sapphire", "Peridot", "Ruby", "Pearl", "Emerald", "Diamond", "Aquamarine", "Amethyst", "Garnet"};

bool cmp(string &p, string &q){
    int p_r=100, q_r=100;
    for (int i = 0; i < 12;i++){
        stringstream ss(p);
        string tmp;
        while(!ss.eof()){
            ss >> tmp;
            //cout << tmp << endl;
            if(tmp==gem[i]){
                p_r = i + 1;
                break;
            }
        }
        if(p_r<100)
            break;
    }
    for (int i = 0; i < 12; i++)
    {
        stringstream ss(q);
        string tmp;
        while (!ss.eof())
        {
            ss >> tmp;
            //cout << tmp << endl;
            if (tmp == gem[i])
            {
                q_r = i + 1;
                break;
            }
        }
        if (q_r < 100)
            break;
    }
    if(p_r==100&&q_r==100){
        return p < q;
    }
    if(p_r!=100&&q_r==100)
        return 1;
    if(q_r!=100&&p_r==100)
        return 0;
    if(p_r==q_r){
        return (p < q);
    }
    return p_r < q_r;
}
int main()
{
    vector<string> v;
    string s;
    while (getline(cin,s))
    {
        if(s=="END")
            break;
        v.pb(s);
    }
    sort(v.begin(), v.end(), cmp);
    for(string s:v){
        cout << s << endl;
    }
    return 0;
}