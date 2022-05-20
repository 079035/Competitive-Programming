#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, d[1001]={0};
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        d[arr[i]]++;
    }
    int max1=-1, max2=-1, idx1, idx2;
    for(int i=1;i<=1000;i++){
        if(d[i]>max1){
            max1=d[i];
            idx1=i;
        }
    }
    for(int i=1;i<=1000;i++){
        if(i!=idx1&&d[i]>=max2&&d[i]<=max1){
            if(max2==d[i]){
                if(abs(idx1-i)>abs(idx1-idx2)){
                    max2=d[i];
                    idx2=i;
                }
            }
            else {
                max2=d[i];
                idx2=i;
            }
        }
    }
    cout<<abs(idx1-idx2)<<endl;
    return 0;
}