#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define M (ll)(1e9 + 7)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool prime[100005];
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 4; i < 100005; i += 2)
        prime[i] = 0;
    for (int i = 3; i <= 100005; i += 2)
    {
        if (prime[i])
        {
            for (int j = i * 2; j <= 100005; j += i)
                prime[j] = 0;
        }
    }
    int n;
    cin >> n;
    int np = 0;
    rep(i, 2, n + 1)
    {
        if (prime[i]==false)
            np++;
    }
/*
    cout<<np<<endl;
    rep(i,2,4)
        cout<<prime[i]<<" ";
    cout<<endl;
*/ 
    if (np > 0)
        cout << 2 << '\n';
    else
        cout << 1 << '\n';
    rep(i, 2, n + 1)
    {
        if (prime[i])
            cout << 1 << ' ';
        else
            cout << 2 << ' ';
    }
    cout << '\n';
    return 0;
}