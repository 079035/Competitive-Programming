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
    cin>>s;
    string u=string(s.begin()+7,s.end());
    //cout<<u<<endl;
    string uid="";
    rep(i,0,u.length()-1){
        if(u[i]>='a'&&u[i]<='z'){
            uid+=to_string((int)(u[i]));
        }
        else
            uid+=u[i];
    }
    //cout<<uid<<endl;
    if(palindrome(uid)){
        //cout<<"palin"<<endl;
        cout<<false<<endl;
        return 0;
    }
    bool good=true;
    if(s[0]=='P'&&s[1]=='A'&&s[2]=='6')
        good=false;
    else if(s[0]=='N'&&s[1]=='J'&&((s[5]=='1'&&s[6]=='5'&&s[3]=='1'&&s[4]>='1')||(s[5]=='1'&&s[6]=='6'&&s[3]=='0'&&s[4]<='2'))){
        //cout << "NJ" << endl;
        good=false;
    }
    else if(((s[0]=='N'&&s[1]=='Y')||(s[0]=='A'&&s[1]=='K'))&&s[3]=='1'&&s[4]=='0'&&s[5]=='1'&&s[6]=='6'){
        good=false;
        int id;
        stringstream(uid)>>id;
        if(id%9==0&&id%27!=0)good=true;
    }
    if(good)good=false;
    else good=true;
    cout<<to_string(good)<<endl;
    return 0;
}
