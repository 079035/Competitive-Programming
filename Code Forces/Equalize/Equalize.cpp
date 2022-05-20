#include <iostream>
#include <math.h>
using namespace std;

int mean(int s, int n){
    if(s%n==0)return s/n;
    else{
        int re=s%n;//2
        float r=n/2;//2.5
        if((float)re>=r)return s/n+1;
        else return s/n;
    }
}

int main(){
    int T, n, k, sum=0;
    cin>>T;
    while(T--){
        cin>>n>>k;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int B=mean(sum, n);
        for(int i=0;i<n;i++){
            if(abs(B-arr[i])>k){
                cout<<-1<<endl;
                break;
            }
            if(i==n-1)cout<<B<<endl;
        }
        sum=0;
    }
    return 0;
}