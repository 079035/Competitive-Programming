#include <iostream>
using namespace std;

int main(){
    int arr[5], cnt=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        cnt+=arr[i]*arr[i];
    }
    cnt%=10;
    cout<<cnt<<endl;

    return 0;
}