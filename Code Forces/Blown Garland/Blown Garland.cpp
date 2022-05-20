#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <set>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first 
#define S second 
#define mp make_pair
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i,j,k;
    ll n;
    string s;
    ll y=0,r=0,b=0,g=0;
    ll yc=-1,rc=-1,bc=-1,gc=-1;

    cin>>s;
    n=s.length();
    //cout<<s<<endl;

    for(i=0;i<n;i+=4)
    {
        k=1;
        for(j=i;j<i+4;j++)
        {
            if(s[j]=='Y')
                yc=k;
            else if(s[j]=='R')
                rc=k;
            else if(s[j]=='B')
                bc=k;
            else if(s[j]=='G')
                gc=k;

            k++;
        }
    }

    //cout<<rc<<bc<<yc<<gc<<endl;

    for(i=0;i<n;i+=4)
    {
        k=1;
        for(j=i;j<i+4;j++)
        {
            if(s[j]=='!')
            {
                if(k==yc)
                    y++;
                else if(k==rc)
                    r++;
                else if(k==gc)
                    g++;
                else if(k==bc)
                    b++;
            }
            k++;
        }
    }
    cout<<r<<" "<<b<<" "<<y<<" "<<g;
    return 0;
}