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
    string s;
    getline(cin, s);
    string list[16] = {"NWPC",
                       "New",

                       "Wave",

                       "Noah",

                       "Rubin",

                       "myPhone",

                       "smudged",

                       "and",

                       "or",

                       "I",

                       "duct",

                       "tape",

                       "DDOS",

                       "spontaneous",

                       "combustion",

                       "Newmeral"};
    int ans = 0;
    rep(i,1,26)
    {
        string tmp = s;
        int score = 0;
        rep(j,0,tmp.length()-1)
        {
            if(tmp[j]==' ')
                continue;
            if(tmp[j]>='a'&&tmp[j]<='z'&&tmp[j]-i<'a')
            {
                tmp[j] = 'z' - (tmp[j] - 'a' + 1 - i);
            }
            else if(tmp[j]>='A'&&tmp[j]<='Z'&&tmp[j]-i<'A'){
                tmp[j] == 'Z' - (tmp[j] - 'A' + 1 - i);
            }
            else
                tmp[j] -= i;
        }
        stringstream ss(tmp);
        string word;
        while(ss>>word)
        {
            for (int a = word.length() - 1; a >= 0;a--)
            {
                if(word[a]=='.'||word[a]==','||word[a]=='\'')
                    word.erase(word.begin() + a);
            }
            if(word=="spontaneous")
                score += 11;
            for (int a = word.length() - 1; a >= 0;a--)
            {
                if(word[a]=='.'||word[a]==','||word[a]=='\'')
            }
        }
    }
    return 0;
}