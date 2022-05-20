#include <iostream>

using namespace std;

void g(int k){
    if(k<=0)return;
    g(k-1);
    cout<<k<<" ";
}

void f(int k){
    if(k<=0)return;
    f(k-1);
    g(k);
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    f(n);
    return 0;
}