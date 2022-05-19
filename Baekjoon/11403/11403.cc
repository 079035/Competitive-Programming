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
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
int n;
int arr[101][101];
bool visited[101];
void dfs(int x)
{
    rep(i,1,n){
        if(arr[x][i]==1 && !visited[i]){
            visited[i] = true;
            dfs(i);
        }
    }
}
int main()
{
    cin >> n;
    rep(i,1,n){
        rep(j,1,n){
            cin >> arr[i][j];
        }
    }
    rep(i,1,n){
        memset(visited, false, sizeof(visited));
        dfs(i);
        rep(j,1,n){
            if(visited[j])
                arr[i][j] = 1;
        }
    }
    rep(i,1,n){
        rep(j,1,n){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}