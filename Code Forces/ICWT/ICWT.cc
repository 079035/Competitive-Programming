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
    string s;
    getline(cin, s);
    while(t--)
    {
        getline(cin, s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        //cout << s << endl;
        char arr[6][2]={{'f','F'},{'o','O'},{'r','R'},{'e','E'},{'s','S'},{'t','T'}};
        int idx = 0;
        bool good = false;
        rep(i,0,s.length()-1)
        {
            if(s[i]==arr[idx][0]||s[i]==arr[idx][1])
            {
                idx++;
            }
            else if(idx>0&&s[i]!=arr[idx][0]&&s[i]!=arr[idx][1]){
                idx=0;
                i--;
            }
            if(idx==6){
                good = 1;
                break;
            }
        }
        if(good)
            cout << "TWO-TWELVE!" << endl;
        else
            cout << "Glory to Stroudonia..." << endl;
    }
    return 0;
}