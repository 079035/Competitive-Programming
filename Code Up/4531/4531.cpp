#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[5], a=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        a+=arr[i];
    }
    sort(arr, arr+5);
    cout<<a/5<<endl<<arr[2]<<endl;

    return 0;
}