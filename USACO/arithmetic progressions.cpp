/*
ID: jordidc1
LANG: C++
PROB: ariprog
*/
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
#include <fstream>
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
struct res{
	int a;
	int b;
};
int cmp(res p, res q)
{
	if(p.b==q.b)
		return p.a<q.a;
	else 
		return p.b<q.b;
}
int main()
{
	SS;
	ifstream fin("ariprog.in");
	ofstream fout("ariprog.out");
	int n,m;
	fin>>n>>m;
	set<ll> s;
	int map[125001]={0};
	rep(p,0,m)
	{
		rep(q,0,m)
		{
			s.insert(sq(p)+sq(q));
		}
	}
	ll last=0;
	for(ll e:s)
	{
		map[last]=e-last;
		last=e;
	}
	map[0]=1;
	map[last]=1;
	int size_max=sq(m)*2;
	vector<res> v;
	for(int a:s)
	{
		for(int b=map[a],sz=(size_max-a)/(n-1)+1;b<=sz;b++)
		{
			int cur=a;
			bool  flag=false;
			rep(i,1,n-1)
			{
				cur+=b;
				if(map[cur]==0){
					flag=true;
					break;
				}
			}
			if(!flag){
				res r={a,b};
				v.pb(r);
			}
		}
	}
	if(v.empty())
		fout<<"NONE"<<endl;
	else
	{
		sort(v.begin(), v.end(), cmp);
		for(res r : v)
		{
			fout<<r.a<<" "<<r.b<<endl;

		}
	}
	return 0;
}
