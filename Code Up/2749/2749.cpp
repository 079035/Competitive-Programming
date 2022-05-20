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

int main()
{
    SS;
    int n;
    cin >> n;
    VI arr(n);
    vector<char> pizza(n);
    VI v[4];
    rep(i,0,n-1)
    {
        int t;
        char w;
        cin >> t >> w;
        pizza[i] = w;
        if(w=='b'){
            t += 5;
            if(find(v[0].begin(), v[0].end(),t)!=v[0].end()){
                t = *max_element(v[0].begin(), v[0].end())+5;
            }
            v[0].pb(t);
            arr[i] = t;
        }
        else if(w=='c'){
            t += 7;
            if(find(v[1].begin(), v[1].end(),t)!=v[1].end()){
                t = *max_element(v[1].begin(), v[1].end())+7;
            }
            v[1].pb(t);
            arr[i] = t;
        }
        else if(w=='d'){
            t += 8;
            if(find(v[2].begin(), v[2].end(),t)!=v[2].end()){
                t = *max_element(v[2].begin(), v[2].end())+8;
            }
            v[2].pb(t);
            arr[i] = t;
        }
        else{
            t += 10;
            if(find(v[3].begin(), v[3].end(),t)!=v[3].end()){
                t = *max_element(v[3].begin(), v[3].end())+10;
            }
            v[3].pb(t);
            arr[i] = t;
        }
    }
    for (int i = 0; i < n;i++){
        arr[i] += pizza[i] - 'b';
    }
    for (int i = 0; i < n;i++)
    {
        VI::iterator itr = min_element(arr.begin(), arr.end());
        cout << itr - arr.begin() + 1 << " ";
        *itr = INT_MAX;
    }
    cout << endl;
    return 0;
}