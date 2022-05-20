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

int main()
{
    SS;
    rep(f,1,9){
        rep(o,0,9){
            if(o==f)
                continue;
            rep(r,0,9){
                if(r==f||r==o)
                    continue;
                rep(t,1,9){
                    if(t==f||t==o||t==r)
                        continue;
                    rep(y,0,9){
                        if(y==f||y==o||y==r||y==t)
                            continue;
                        rep(e,0,9){
                            if(e==f||e==o||e==r||e==t||e==y)
                                continue;
                            rep(n,0,9){
                                if(n==f||n==o||n==r||n==t||n==y||n==e)
                                    continue;
                                rep(s,1,9){
                                    if(s==f||s==o||s==r||s==t||s==y||s==e||s==n)
                                        continue;
                                    rep(i,1,9){
                                        if(i==f||i==o||i==r||i==t||i==y||i==e||i==n||i==s)
                                            continue;
                                        rep(x,0,9){
                                            if(x==f||x==o||x==r||x==t||x==y||x==e||x==n||x==s||x==i)
                                                continue;
                                            if(f*10000+o*1000+r*100+t*10+y+(t*100+e*10+n)*2==s*10000+i*1000+x*100+t*10+y)
                                            {
                                                printf("%d%d%d%d%d+%d%d%d+%d%d%d=%d%d%d%d%d", f, o, r, t, y, t, e, n, t, e, n, s, i, x, t, y);
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
