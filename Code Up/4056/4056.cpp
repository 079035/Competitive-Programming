#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<=500){
        n*=70;
        n/=100;
    }
    else if(n<=1500){
        n=(n-500)*40/100+350;
    }
    else if(n<=4500){
        n=(n-1500)*15/100+750;
    }
    else if(n<=10000){
        n=(n-4500)*5/100+1200;
    }
    else{
        n=(n-10000)*2/100+1475;
    }
    cout<<n<<endl;
    return 0;
}