#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> VI;
typedef long long ll;

class MostFrequentLastDigit
{
	public:
	VI generate(int n, int d)
	{
        ll base = 0;
        ll a,b;//>0
        if(d>=3){
            a = 1;
            b = d - 1;
        }
        else{
            a = d+1;
            b = 9;
        }
        VI v;
        int i = 0;
        while(i++<n/2){
            v.pb(base + a);
            base += 10;
            v.pb(base + b);
        }
        base += 10;
        if(n%2)
            v.pb(base + a);
        return v;
    }
};