#include <iostream>
#include <algorithm>

using namespace std;

long long int n;

long long int find_max(int arr[], int idx){
    long long int res, a=0, b=0;
    for(int i=idx;i<n-1;i++){
        a+=arr[i+1]-arr[i];
    }
    for(int i=idx;i>0;i--){
        b+=arr[i]-arr[i-1];
    }
    res=max(a,b);
    return res;
}

int main()
{
    cin>>n;
    long long int m, max=0, idx;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        idx=i;
        if(i==0)
            m=arr[i+1]-arr[i];
        else if(i==n-1)
            m=arr[i]-arr[i-1];
        else
            m=min(arr[i]-arr[i-1],arr[i+1]-arr[i]);
        max=arr[n-1]-arr[i];
        if(arr[i]-arr[0]>max){
            max=arr[i]-arr[0];
        }
        cout<<m<<" "<<max<<endl;
    }

    return 0;
}
