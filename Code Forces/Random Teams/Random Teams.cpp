#include <iostream>

using namespace std;

long long int pairs(long long int n){
    return n*(n-1)/2;
}

int main(){
    int n,m,a,b;
    cin>>n>>m;
    a=n/m;
    b=n%m;
    long long int min=pairs(a)*(m-b)+pairs(a+1)*b;
    long long int max=pairs(n-m+1);
    cout<<min<<" "<<max<<endl;
    return 0;
}