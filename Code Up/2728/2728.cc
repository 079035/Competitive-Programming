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
int arr[1005][1005];
int sum[1005][1005];
int R;
int f(int r, int c)
{
    if(r==R)
        return arr[r][c];
    if(sum[r][c])
        return sum[r][c];
    return sum[r][c] = max(arr[r][c]+f(r + 1, c), arr[r][c]+f(r + 1, c + 1));
}
int main()
{
    SS;
    cin >> R;
    rep(i,1,R){
        rep(j,1,i){
            cin >> arr[i][j];
        }
    }
    cout << f(1, 1) << endl;
    /*
    rep(i,1,R){
        rep(j,1,i){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    */
    return 0;
}