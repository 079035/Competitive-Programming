#include <iostream>

using namespace std;

int main(){
    int n,k,i,j,cnt=0,ans=1;
    cin>>n>>k;
    int *arr=new int[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])cnt++;
        else{
            if(cnt+1>ans){
              ans=cnt+1;
             }
             cnt=0;
        }
    }
    if(cnt>0){
        if(cnt+1>ans){
            ans=cnt+1;
            cnt=0;
        }
    }
    cout<<ans<<endl;
    return 0;
} 