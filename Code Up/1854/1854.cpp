#include <iostream>
using namespace std;

long long int sum=0;

void f(long long int n){
    if(n<=0)return;
    sum+=n%10;
    n/=10;
    f(n);
}

int main()
{
    long long int n;
    cin>>n;
    f(n);
    cout<<sum<<endl;
    return 0;
}