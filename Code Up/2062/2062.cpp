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
#define db double
#define VI vector<int>
#define palindrome(s) s == string(s.rbegin(), s.rend())
int arr[20][20], c[10], n, m, cnt=0;
int p[4] = {1, 0, 0, -1}, q[4] = {0, -1, 1, 0};
void f(int x, int y, int target)
{
    if(x<0||y<0||x>=n||y>=m)
        return;
    if(arr[x][y]!=target)
        return;
    cnt++;
    arr[x][y] = -1;
    rep(i,0,3){
        f(x + p[i], y + q[i], target);
    }
}
int main()
{
    SS;
    cin >> n >> m;
    rep(i,0,n-1){
        rep(j,0,m-1){
            cin >> arr[i][j];
        }
    }
    rep(i,0,n-1){
        rep(j,0,m-1){
            cnt = 0;
            if(arr[i][j]!=-1){
                int t = arr[i][j];
                f(i, j, arr[i][j]);
                c[t] = max(c[t], cnt);
                //cout << c[arr[i][j]] << endl;
            }
        }
    }
    rep(i,0,9){
        if(c[i]>0){
            cout << i << " " << c[i] << endl;
        }
    }
    return 0;
}
