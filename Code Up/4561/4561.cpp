#include <iostream>
using namespace std;

int main(){
    int arr[7], min=101, h=0;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        if(arr[i]%2){
            h+=arr[i];
            if(arr[i]<min)min=arr[i];
        }
    }
    if(h==0){
        cout<<-1<<endl;
        return 0;
    }
    cout<<h<<endl<<min<<endl;

    return 0;
}