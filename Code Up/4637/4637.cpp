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
int w[5][7][4];
int c[7][4];
int chk[5];
int check(int num){
    int chk = 0;
    rep(i,1,6){
        rep(j,1,3){
            if(c[i][j]!=w[num][i][j])
                return 0;
        }
    }
    return 1;
}
void world(int a, int b){
    if(b>6){
        a++;
        b = a + 1;
    }
    if(a==6){
        rep(i,1,4){
            if(chk[i]==0)
                chk[i] = check(i);
        }
        return;
    }

    c[a][1]++;
    c[b][3]++;
    world(a, b + 1);
    c[a][1]--;
    c[b][3]--;

    c[a][2]++;
    c[b][2]++;
    world(a, b + 1);
    c[a][2]--;
    c[b][2]--;

    c[a][3]++;
    c[b][1]++;
    world(a, b + 1);
    c[a][3]--;
    c[b][1]--;
    
    return;
}
int main()
{
    rep(i,1,4){
        rep(j,1,6){
            rep(k,1,3){
                cin >> w[i][j][k];
            }
        }
    }
    world(1, 2);
    cout << chk[1] << " " << chk[2] << " " << chk[3] << " " << chk[4] << endl;
    return 0;
}