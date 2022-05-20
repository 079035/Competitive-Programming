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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }

int main()
{
    int n;
    cin >> n;
    string s, ans="";
    map<string, string> m;
    cin >> s;
    m.insert(mp("000000", "A"));
    m.insert(mp("001111", "B"));
    m.insert(mp("010011", "C"));
    m.insert(mp("011100", "D"));
    m.insert(mp("100110", "E"));
    m.insert(mp("101001", "F"));
    m.insert(mp("110101", "G"));
    m.insert(mp("111010", "H"));
    for (int i = 0; i <= s.length() - 1; i += 6)
    {
        //cout << i << endl;
        string now = string(s.begin() + i, s.begin() + i + 6);
        //cout << now << endl;
        if(m.find(now)!=m.end()){
            //cout << "Found" << endl;
            ans += m[now];
        }
        else{
            bool f = false;
            rep(j,0,now.length()-1){
                if(now[j]=='0'){
                    now[j] = '1';
                    if(m.find(now)!=m.end()){
                        ans += m[now];
                        f = true;
                        break;
                    }
                    now[j] = '0';
                }
                else{
                    now[j] = '0';
                    if (m.find(now) != m.end())
                    {
                        ans += m[now];
                        f = true;
                        break;
                    }
                    now[j] = '1';
                }
            }
            if(!f){
                cout << i/6 + 1 << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}