#include <iostream>

using namespace std;

int f(int n){
    if(n==3)return 4;
    if(n==2)return 2;
    if(n==1)return 1;
    return f(n-1)+f(n-2)+f(n-3);
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}