#include <iostream>
using namespace std;

int main(){
    int max1=-1, max2=-1, max3=-1, arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]>max1)max1=arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]>max2&&arr[i]<max1)max2=arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]>max3&&arr[i]<max2)max3=arr[i];
    }
    
    cout<<max3<<endl;
    return 0;
}