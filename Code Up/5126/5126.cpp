#include <iostream>
using namespace std;

int cnt=0;

void flip(int *arr, int idx){
    if(idx-1>=0){
        if(arr[idx-1]==0){
            arr[idx-1]=1;
        }
        else arr[idx-1]=0;
    }
    if(arr[idx]==0){
        arr[idx]=1;
    }
    else arr[idx]=0;
    if(idx+1<8){
        if(arr[idx+1]==0){
            arr[idx+1]=1;
        }
        else arr[idx+1]=0;
    }
    cnt++;
    return;
}

int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    if(arr[0]==1&&arr[2]==1){  //not updated yet
        flip(arr, 1);
    }
    else if(arr[0]==1){
        flip(arr, 0);
    }
    for(int i=1;i<8;i++){
        if(arr[i]==0)continue;
        flip(arr, i+1);
    }
    cout<<cnt<<endl;
    return 0;
}