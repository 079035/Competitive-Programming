#include <iostream>
using namespace std;

int mem[10001]={0};

int f(int n){
    if(mem[n]) return mem[n];
    else{
        mem[n]=f(n-2)*3+f(n-4)*3-1;
        return mem[n];
    }
}

int main(){
    int n;
    cin>>n;
    mem[2]=3;
    mem[4]=11;
    if(n%2){
        cout<<0<<endl;
        return 0;
    }
    cout<<f(n)<<endl;
    return 0;
}