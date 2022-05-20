#include <iostream>
using namespace std;

int main(){
    int arr[10], bin[1000]={0}, a=0, idx;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        bin[arr[i]]++;
        a+=arr[i];
    }
    cout<<a/10<<endl;
    a=-1;
    for(int i=0;i<1000;i++){
        if(bin[i]>a){
            idx=i;
            a=bin[i];
        }
    }
    cout<<idx<<endl;
    return 0;
}