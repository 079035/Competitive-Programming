#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define forN for(int i=0;i<n;i++)

using namespace std;
#define ll long long
#define fo(i,v,e) for(v=i;v<e;v++)
#define deb(x) cout<<#x<<' '<<x<<endl;
#define mod 1000000007
#define pb(x) push_back(x)
void print(vector<int>v)
{
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<' ';
    }
}

int main()
{
  int n,i,j,ans=0;
  cin>>n;
  string s;
  cin>>s;
  vector<int>w;
  fo(0,i,s.length()-1)
  {
      if(s[i]=='W')
      {   s[i]='B';
          if(s[i+1]=='B')s[i+1]='W';
          else s[i+1]='B';
          w.pb(i+1);
      }
  }
  if(s[s.length()-1]=='B')
  {
      cout<<w.size()<<endl;
      print(w);
  }
  else
  {
      if(s.length()%2==0)
      {
          cout<<"-1\n";
          return 0;
      }
      cout<<w.size()+s.length()/2<<endl;
      print(w);
      for(i=1;i<s.length();i+=2)
      {
          cout<<i<<' ';
      }
  }
    return 0;
}