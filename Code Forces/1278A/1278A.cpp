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
	cin >> t;
	while (t--)
	{
		string p, p_;
		cin >> p >> p_;
		if (p_.length() < p.length())
		{
			cout << "NO" << endl;
			continue;
		}
		int arr[100000] = {0};
		rep(i, 0, p.length() - 1)
		{
			arr[p[i]]++;
		}
		rep(i, 0, p_.length() - p.length())
		{
			bool good = true;
			//cout << p_[i] << endl;
			int test[100000] = {0};
			//cout << arr[p_[i]] << endl;
			if (arr[p_[i]] != 0)
			{
				rep(j, i, i + p.length() - 1)
				{
					test[p_[j]]++;
				}
				rep(j, 0, p.length() - 1)
				{
					if (arr[p[j]] != test[p[j]])
						good = false;
				}
			}
			else
				continue;
			if (good)
			{
				cout << "YES" << endl;
				goto e;
			}
		}
		cout << "NO" << endl;
	e:
		continue;
	}
	return 0;
}