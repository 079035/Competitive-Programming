#include <iostream>

using namespace std;

int k;
bool factor(int); // returns true if number of factor is over k 

int main()
{
    cin>>k;
    if(k==0){
        cout<<1<<endl;
        return 0;
    }
    int num=3, inc=3;
    while(!factor(num)){
        num+=inc++;
    }
    cout<<num<<endl;
    return 0;
}

bool factor(int n){
    int arr[10000]={0}, idx=0;
    for(int i=2;i<=n;i++){
        while(n%i==0)
        {
            n/=i;
            arr[idx]++;
        }
        if(arr[idx]!=0)idx++;
    }
    int res=1;
    for(int i=0;arr[i]!=0;i++){
        res*=arr[i]+1;
    }
    return res>k;
}