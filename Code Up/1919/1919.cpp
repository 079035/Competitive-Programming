#include <iostream>

using namespace std;

int e(int n){
    if(n%10!=0)return n;
    n/=10;
    e(n);
}

void f(int n){
    if(n==0)return;
    cout<<n%10;
    n/=10;
    f(n);
}

int main()
{
    int n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    n=e(n);
    f(n);
    return 0;
}