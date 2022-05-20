#include <iostream>

using namespace std;

int main(){
    int n,a,b,cnt=0;
    int i=0, j=1;
    cin>>n>>a>>b;
    int *arr=new int[n+1];
    for(i=a+1; i<=n; i++){ 
        for(j=n-b;j<=n;j++){
            if(i>=j)break;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}