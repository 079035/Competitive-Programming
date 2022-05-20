#include <iostream>
#include <limits.h>
#include <string.h>
using namespace std;

int main(){
    int arr[100000], b[100000], n, k, j=1, idx=0, a=0;
    cin>>n>>k;
    memset(b, -1000000, sizeof(b));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        a+=arr[i];
        if(j>=k){
            b[idx]=a;
            a-=arr[idx];
            idx++;
        }
        j++;
    }

    if(k==1){
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max)max=arr[i];
        }
        cout<<max<<endl;
        return 0;
    }

    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(b[i]>max)max=b[i];
    }
    cout<<max<<endl;
    return 0;
}