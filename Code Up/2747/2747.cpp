#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                   \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define VI vector<int>
#define palindrome(s) s == string(s.rbegin(), s.rend())
struct game{
    string name;
    int cnt;
};
int main()
{
    SS;
    int m;
    cin >> m;string s;
    getline(cin, s);
    vector<game> v;
    rep(i,1,m){
        getline(cin, s);
        bool u = 0;
        if(i==1){
            game tmp;
            tmp.name = s;
            tmp.cnt = 1;
            v.pb(tmp);
            continue;
        }
        for (auto itr = v.begin(); itr != v.end(); itr++)
        {
            if (itr->name == s)
            {
                itr->cnt++;
                u = 1;
                break;
            }
        }
        if(!u){
            game tmp;
            tmp.name = s;
            tmp.cnt = 1;
            v.pb(tmp);
        }
    }
    for (auto itr = v.begin(); itr != v.end();itr++){
        cout << (int)(itr - v.begin())+1 << " " << itr->name << " : " << itr->cnt << endl;
    }
    return 0;
}