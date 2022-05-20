#include <iostream>

using namespace std;

int main()
{
    int k, n;
    int arr[100000][2];
    cin>>k>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    int base;
    cin>>base;
    int current=base;
    for(int i=0;i<n;i++){
        if(arr[i][0]==current)current=arr[i][1];
        else if(arr[i][1]==current)current=arr[i][0];
    }
    cout<<current<<endl;
    return 0;
}