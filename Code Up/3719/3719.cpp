#include <iostream>
#define C 100007

using namespace std;

int mem[10001]={0};
int f(int n){
    if(mem[n]) return mem[n];
    else {
        mem[n]=(f(n-1)*2+f(n-2)*3+f(n-3)*3)%C;
        return mem[n];
    }
}
int main(){
    int n;
    cin>>n;
    mem[1]=2;
    mem[2]=7;
    mem[3]=22;
    cout<<f(n)<<endl;
    return 0;
}