#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    int bi[10000];
    int tmp=n;
    for(i=0; tmp>0; i++){
        bi[i]=tmp%2;
        tmp/=2;
    }
    cout<<2<<" ";
    for(j=i-1; j>=0; j--){
        cout<<bi[j];
    }
    cout<<endl;
    cout<<8<<" "<< oct << n <<endl;
    printf("16 %X", n);
    return 0;
}