#include <iostream>

using namespace std;

void g(int n){
    if(n<=0)return;
    g(n-1);
    cout<<'*';
}

void f(int n){
    if(n<=0)return;
    g(n);
    cout<<endl;
    f(n-1);
}

int main()
{
    int n;
    cin>>n;
    f(n);
    return 0;
}