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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
#define INF INT_MAX-1

int V; // number of nodes
ll adj[sq(13)][sq(13)];
vector<ll> dijkstra(int src)
{
    vector<ll> dist(V);
    vector<bool> visited(V);
    rep(i,0,V-1){
        dist[i] = adj[src][i];
    }
    visited[src] = true;
    rep(i,0,V-3){
        int closest = INF, here;
        rep(i, 0, V - 1)
        {
            if (dist[i] < closest && !visited[i])
            {
                here = i;
                closest = dist[i];
            }
        }
        visited[here] = true;
        rep(j,0,V-1){
            if(!visited[j]){
                if(dist[here]+adj[here][j]<dist[j]){
                    dist[j] = dist[here] + adj[here][j];
                }
            }
        }
    }
    return dist;
}
int main()
{
    ll n, arr[13][13], src, dest;
    cin >> n;
    V = n * n;
    rep(i,0,V-1){
        rep(j,0,V-1){
            adj[i][j] = INF;
        }
    }
    rep(i,0,n-1){
        rep(j,0,n-1){
            cin >> arr[i][j];
        }
    }
    src = (n - 1) * n;
    dest = n - 1;
    ll fuel;
    cin >> fuel;
    int p[4] = {-1, 0, 0, 1}, q[4] = {0, -1, 1, 0};
    rep(i,0,n-1){
        rep(j,0,n-1){
            adj[i * n + j][i * n + j]=0;
            rep(k,0,3){
                if(i+p[k]<0||i+p[k]>=n||j+q[k]<0||j+q[k]>=n)
                    continue;
                if ((i + p[k]) * n + j + q[k]==src)
                    continue;
                adj[i * n + j][(i + p[k]) * n + j + q[k]] = arr[i + p[k]][j + q[k]];
            }
        }
    }
    /*
    rep(i,0,V-1){
        rep(j,0,V-1){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    */
    //cout << "src: " << src << endl;
    vector<ll> dist = dijkstra(src);
    
    /*
    for (auto itr = dist.begin(); itr != dist.end();itr++){
        cout << *itr << " ";
    }
    cout << endl;
    */
    
    dist[dest] -= 5;
    ll res = fuel-dist[dest];
    if(res<0)
        cout << "NOOOO" << endl;
    else
        cout << res << endl;
    return 0;
}