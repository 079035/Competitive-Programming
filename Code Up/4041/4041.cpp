#include <iostream>
using namespace std;

int main(){
    int i=0, j, n, h=0, arr[10000];
    cin>>n;
    while(n>0){
        arr[i]=n%10;
        h+=arr[i];
        n/=10;
        i++;
    }
    for(int k=0;k<i;k++){
        if(arr[k]>0){
            j=k;
            break;
        }
    }
    for(;j<i;j++){
        cout<<arr[j];
    }
    cout<<endl<<h<<endl;
    return 0;
}