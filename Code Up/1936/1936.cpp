#include <iostream>
using namespace std;

int a,b,ans=0,p=0;

int findParent(int child, int parent, int cnt){
  if(child!=parent){
    if(child%2==0)child/=2;
    else child=(child-1)/2;
    cnt++;
    if(child==1&&parent!=1){ //find failed
      child=b;
      if(parent%2==0) parent/=2;
      else parent=(parent-1)/2;
      p++;
      cnt=0;
      findParent(child, parent, cnt);
    }
    else
      findParent(child, parent, cnt);
  }
  else return cnt;
}

int main() {
  cin>>a>>b;
  if(a>b){
    int tmp=a;
    a=b;
    b=tmp;
  }
  cout<<p+findParent(b,a, 0)<<endl;
}