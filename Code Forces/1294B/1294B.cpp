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
struct cor{
	int x, y;
};
int cmp(cor p, cor q)
{
	if(p.y==q.y)
		return p.x<q.x;
	return p.y<q.y;
}
int main()
{
    SS;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cor arr[100000];
		rep(i,0,n-1)
		{
			cin>>arr[i].x>>arr[i].y;
		}
		sort(arr, arr+n, cmp);
		bool good=true;
		int xx=0;
		rep(i,0,n-1)
		{
			if(arr[i].x<xx)
			{
				good=false;
				break;
			}
			xx=arr[i].x;
		}
		if(!good){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		int cx(0), cy(0);
		rep(i,0,n-1)
		{
			int xCnt=0, yCnt=0;
			int X=arr[i].x;
			for(;cx<X;cx++)
			{
				cout<<'R';
			}
			int Y=arr[i].y;
			for(;cy<Y;cy++)
			{
				cout<<'U';
			}
		}
		cout<<endl;
	}
    return 0;
}
