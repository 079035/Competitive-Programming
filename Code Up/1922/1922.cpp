#include <iostream>

using namespace std;

int step=0;

void f(int n){
    step++;
    if(n==1)return;
    if(n%2==0)f(n/2);
    else f(3*n+1);
}

int main()
{
    int n;
    cin>>n;
    f(n);
    cout<<step<<endl;
    return 0;
}