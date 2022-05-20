#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int n, arr[15][3], ans=0, m=INT_MAX;

void rec(int cur, int total, int idx){
    if(cur==n){
        if(total<m)
            m=total;
        return;
    }
    if(idx==0){
        rec(cur+1, total+arr[cur][idx], 1);
        rec(cur+1, total+arr[cur][idx], 2);
    }
    else if(idx==1){
        rec(cur+1, total+arr[cur][idx], 0);
        rec(cur+1, total+arr[cur][idx], 2);
    }
    else{
        rec(cur+1, total+arr[cur][idx], 0);
        rec(cur+1, total+arr[cur][idx], 1);
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    if(n==1){
        cout<<min((arr[0][0], arr[0][1]), arr[0][2])<<endl;
        return 0;
    }
    rec(0, 0, 0);
    rec(0,0,1);
    rec(0,0,2);

    cout<<m<<endl;

    return 0;
}