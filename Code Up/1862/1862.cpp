#include <iostream>
using namespace std;

#define DI 1000000007

int chk[100];

long long d[100];

long long f(int k){
    if(chk[k]==1)return d[k];
    chk[k]=1;
    if(k<=2)return d[k]=1;
    return d[k]=f(k-2)%DI+f(k-1)%DI;
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n)%DI<<endl;
    return 0;
}