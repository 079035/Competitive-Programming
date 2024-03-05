/*
ID: jordidc1
PROG: numtri
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vi;
typedef pair<long long,long long> pi;

#define rep(i, a, b) for(ll i=ll(a); i<ll(b); i++)

int main() {
    ifstream cin("numtri.in");
    ofstream cout("numtri.out");
    int r;
    cin >> r;
    vector<vi> tri(1001,vi(1001,0));
    rep(i,0,r) {
        rep(j,0,i+1) {
            cin >> tri[i][j];
        }
        rep(j,0,i+1){
            if(i==0)
                continue;
            if(j==0)
                tri[i][j] += tri[i - 1][j];
            else if(j==i)
                tri[i][j] += tri[i - 1][j - 1];
            else
                tri[i][j]+=max(tri[i-1][j-1],tri[i-1][j]);
        }
    }
    cout << *max_element(tri[r-1].begin(),tri[r-1].end()) << '\n';
}