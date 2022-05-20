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
vector<char> c(10);
vector<VI> ans;
int n;
int cmp(VI p, VI q)
{
    rep(i,0,p.size()-1)
    {
        if(p[i]>q[i]){
            return 1;
        }
        else if(q[i]>p[i])
            return 0;
    }
    return 1;
}
bool check(VI v)
{
    int arr[10] = {0,};
    rep(i,0,v.size()-1){
        if(arr[v[i]]!=0)
            return false;
        arr[v[i]]++;
    }
    return true;
}
void f(VI v, int a)
{
    VI tmp = v;
    tmp.pb(a);
    if(tmp.size()>1) //filter
    {
        if(!check(tmp))
            return;
        for (int i = 0; i < tmp.size() - 1; i++)
        {
            //cout << v.size() << " " << a << endl;
            if(c[i]=='<'){
                if(tmp[i]>=tmp[i+1])
                    return;
            }
            else{
                if(tmp[i]<=tmp[i+1])
                    return;
            }
        }
    }
    if(tmp.size()==n+1) //base
    {
        if(check(tmp)){
            ans.pb(tmp);
        }
        return;
    }
    rep(i,0,9){
        f(tmp, i);
    }
}
int main()
{
    cin >> n;
    rep(i,0,n-1){
        cin >> c[i];
    }
    VI v;
    rep(i,0,9)
    {
        f(v, i);
    }
    //cout << "calced" << endl;
    /*
    for (int i = 0; i < ans.size();i++){
        for (int j = 0; j < ans[i].size();j++){
            if(ans[i][0]==0)
            cout << ans[i][j];
        }
        if(ans[i][0]==0)cout << endl;
    }
    */
    sort(ans.begin(), ans.end(), cmp);
    //cout << "sorted" << endl;
    rep(i,0,n){
        cout << ans[0][i];
    }
    cout << endl;
    rep(i,0,n){
        cout << ans[ans.size() - 1][i];
    }
    cout << endl;
    return 0;
}