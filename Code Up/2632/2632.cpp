#include <iostream>
using namespace std;

int prob(int x){
    if(x==1)return 1;
    if(x==2)return 2;
    else return prob(x-1)+prob(x-2);
}

int main(){
    int n;
    cin>>n;
    cout<<prob(n)<<endl;
    return 0;
}