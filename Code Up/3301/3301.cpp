#include <iostream>
using namespace std;

int main(){
    int n, cnt=0;
    cin>>n;
    while(n>=50000){
        n-=50000;
        cnt++;
    }
    while(n>=10000){
        n-=10000;
        cnt++;
    }
    while(n>=5000){
        n-=5000;
        cnt++;
    }
    while(n>=1000){
        n-=1000;
        cnt++;
    }
    while(n>=500){
        n-=500;
        cnt++;
    }
    while(n>=100){
        n-=100;
        cnt++;
    }
    while(n>=50){
        n-=50;
        cnt++;
    }
    while(n>=10){
        n-=10;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}