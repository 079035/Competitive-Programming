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
int main() {
	SS;
	int t;
	cin>>t;
	while(t--)
	{
		int n,s,k;
		map<int, int> m;
		cin>>n>>s>>k;
		rep(i,0,k-1)
		{
			int tmp;
			cin>>tmp;
			m[tmp]=1;
		}
		if(m.find(s)==m.end())
		{
			cout<<0<<endl;
			continue;
		}
		int d1(0), d2(0);
		rep(i,s,n)
		{
			if(m.find(i)==m.end())
			{
				d1=i-s;
				break;
			}
		}
		for(int i=s;i>=1;i--)
		{
			if(m.find(i)==m.end())
			{
				d2=s-i;
				break;
			}
		}
		if(d1>0&&d2>0)
			d1=min(d1,d2);
		else if(d2>0)
			d1=d2;
		cout<<d1<<endl;
	}
	return 0;
}
