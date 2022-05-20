#include <iostream>
#include <algorithm>

using namespace std;

int n;

long long int f(long long int *arr){
    long long int res=0;
    for(int i=0;0<n-i-1;i++){
        res+=n-i-1;
    }
    return res;
}

int main(){
    long long int min, max;
    long long int min_count=0, max_count=0;
    long long int num, dif;
    cin>>n;
    long long int *arr=new long long int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    min=arr[0]; max=arr[n-1];
    if(min==max){
        num = f(arr);
        dif = 0;
    }
    else {
        for(int i=0;i<n;i++){
            if(arr[i]==min) min_count++;
            else if(arr[i]==max) max_count++;
        }
        num = min_count*max_count;
        dif = max-min;
    }
   cout<<dif<<" "<<num<<endl;
   return 0;
}