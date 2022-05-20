#include <iostream>
using namespace std;

int s,n;
int a[20];
int ans=0;

void rec(int flag, int sum, int cur){
    if(cur==n){
        if(flag && sum==s)ans++;
        return;
    }
    rec(1, sum+a[cur], cur+1);
    rec(flag, sum,cur+1);
}

int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++)cin>>a[i];
    rec(0,0,0);
    cout<<ans<<endl;
    return 0;
}