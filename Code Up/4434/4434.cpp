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
#define palindrome(s) s == string(s.rbegin(), s.rend())
int n,out;
string s;
vector<string> ss;
bool safe(string s)
{
    //cout << s << endl;
    int l = s.length() / 2;
    while(l>0)
    {
        int idx = 0;
        while(idx<=s.length()-l-l){
            string tmp = string(s,idx,l);
            string cmp = string(s,idx+l,l);
            if(tmp==cmp)
                return false;
            idx++;
        }
        l--;
    }
    return true;
}
void f(int v){
    if(out)
        return;
    int i;
    //cout << s << endl;
    for (i = 1; i <= 3;i++){
        if(v>1&&s[v-1]==('0'+i))
            continue;
        s.pb('0' + i);
        if(safe(s)){
            if(v+1==n){
                cout << s << endl;
                out = 1;
                //cout << out << endl;
                return;
            }
            f(v + 1);
        }
        s.erase(s.end() - 1);
    }
}
int main()
{
    scanf("%d", &n);
    s = "1";
    f(1);
    return 0;
}