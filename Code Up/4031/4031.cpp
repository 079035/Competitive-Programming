#include <iostream>
using namespace std;

int main(){
    int e=-1,o=-1, arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
        if(arr[i]%2){
            if(arr[i]>o)o=arr[i];
        }
        else{
            if(arr[i]>e)e=arr[i];
        }
    }
    if(o!=-1 && e!=-1){
        cout<<o+e<<endl;
        return 0;
    }
    else if(o!=-1){
        cout<<o<<endl;
        return 0;
    }
    else{
        cout<<e<<endl;
        return 0;
    }

    

    return 0;
}