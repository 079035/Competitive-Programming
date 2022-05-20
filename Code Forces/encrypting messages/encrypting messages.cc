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
    string s1, s2;
    cin >> t;
    getline(cin, s1);
    while(t--)
    {
        getline(cin, s1);
        getline(cin, s2);
        int key_l = s2.length();
        int n = s1.length();
        int idx = 0;
        int key;
        rep(i, 0, n - 1)
        {
            if(s1[i]==' ')
                continue;
            
            if(s1[i]>=97&&s1[i]<=122){
                if (s2[idx % key_l] >= 97)
                {
                    key = s2[idx % key_l] - 97;
                    idx++;
                }
                else
                {
                    key = s2[idx % key_l] - 65;
                    idx++;
                }
                char p = s1[i] - 97;
                //cout << (int)p << endl;
                p += key;
                p %= 26;
                p += 97;
                s1[i] = p;
            }
            else if(s1[i]>=65&&s1[i]<=90)
            {
                if (s2[idx % key_l] >= 97)
                {
                    key = s2[idx % key_l] - 97;
                    idx++;
                }
                else
                {
                    key = s2[idx % key_l] - 65;
                    idx++;
                }
                char p = s1[i] - 65;
                p += key;
                p %= 26;
                p += 65;
                s1[i] = p;
            }
        }
        cout << s1 << endl;
    }
    return 0;
}