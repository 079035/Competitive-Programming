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
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }

int main()
{
    int n;
    cin>>n;
    string s;
    getline(cin, s);
    queue<int> q;
    while(n--)
    {
        string s;
        getline(cin, s);
        if(s[0]=='p'&&s[1]=='u'){
            int a=0;
            for (int i = 0;i<s.length();i++)
            {
                if(s[i]>='0'&&s[i]<='9'){
                    a *= 10;
                    a += s[i] - 48;
                }
            }
            q.push(a);
        }
        else if(s=="front()")
        {
            if(q.empty())
                cout << -1 << endl;
            else
                cout << q.front() << endl;
        }
        else if(s=="back()")
        {
            if(q.empty())
                cout << -1 << endl;
            else
                cout << q.back() << endl;
        }
        else if(s=="pop()")
        {
            if(!q.empty())
                q.pop();
        }
        else if(s=="size()")
            cout << q.size() << endl;
        else
        {
            if(q.empty())
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }
    }
    return 0;
}