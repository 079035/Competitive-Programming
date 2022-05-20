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
    char c;
    cin >> c;
    int w = 0;
    if(c=='A')
        w = 10;
    else if(c=='S')
        w = 2;
    else
    {
        w = 1;
    }
    int s, f, money, price,o;
    cin >> s >> f>>money>>price>>o;
    w *= f;
    if(w%o==0)
        w /= o;
    else {
        w /= o;
        w++;
    }
    w += s;
    if(w*price<=money){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
