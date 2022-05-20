#include <iostream>
using namespace std;

int main(){
    int max=-1, arr[9],idx=0;
    for(int i=0;i<9;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            idx=i+1;
        }
    }
    cout<<max<<endl<<idx<<endl;
    return 0;
}