#include <iostream>
using namespace std;

int main(){
    int arr[7], ans=0;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        if(arr[i]%2){
            ans+=arr[i];
        }
    }
    if(ans==0){
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;
    return 0;
}