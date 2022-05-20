#include <iostream>
using namespace std;

int main(){
    int n, arr[100],ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0&&arr[i]==1){
            arr[i]+=arr[i-1];
        }
        ans+=arr[i];
    }
    cout<<ans<<endl;

    return 0;
}