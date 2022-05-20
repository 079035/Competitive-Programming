#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string.h>
#include <sstream>
#include <iomanip>
#include <limits.h>
#include <functional>
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
#define palindrome(s) s == string(s.rbegin(), s.rend())
using namespace std;
typedef long long ll;
int main()
{
    SS;
	int t;
	cin>>t;
	while(t--){
		int s;
		cin>>s;
		int cnt=0;
		while(s>=10)
		{
			int rem=s%10;
			cnt+=s-rem;
			s=rem+s/10;
		}
		cnt+=s;
		cout<<cnt<<endl;
	}

    return 0;
}
