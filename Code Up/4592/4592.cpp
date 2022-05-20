#include <iostream>
#include <string.h>
using namespace std;

int arr[101][101];

void fill(int a, int b){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            arr[a+i][b+j]=1;
        }
    }
}

int main(){
    int n, a,b, ans=0;
    memset(arr, 0, sizeof(arr[0][0])*101*101);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        fill(a,b);
    }
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(arr[i][j]==1)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}