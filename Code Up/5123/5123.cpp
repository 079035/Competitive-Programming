#include <iostream>
using namespace std;

int main(){
    int n,t,ans=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i==j)continue;
            if((arr[i]+arr[j])%3==0)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}