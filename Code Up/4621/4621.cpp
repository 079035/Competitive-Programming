#include <iostream>
using namespace std;

int main(){
    int n,k,idx=0,arr[10001]={0};
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            arr[idx]=i;
            idx++;
        }
    }
    cout<<arr[k-1]<<endl;

    return 0;
}