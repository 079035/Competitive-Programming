#include <iostream>
using namespace std;

int main(){
    long long int n, sum=0;
    cin>>n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum%7==4)cout<<"suspect"<<endl;
    else cout<<"citizen"<<endl;
    return 0;
}