#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <set>
#include <fstream>
#include <cmath>
#include <map>
#include <string>
#include <string.h>
#include <iomanip>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define endl '\n'
#define pb push_back
typedef long long ll;
using namespace std;

int main()
{
    SS;
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(i==sqrt(n)&&n%i==0)
            ans += i;
        else if (n % i == 0)
            ans += i+n/i;
    }
    cout << ans << endl;
    return 0;
}