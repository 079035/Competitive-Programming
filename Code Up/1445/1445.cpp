#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    n+=m;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}