#include <iostream>
#include <algorithm>
using namespace std;

#define min(a,b,c) min(min(a,b),c)

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int n=min(a,b,c);
    for(int i=n;i>0;i--){
        if(a%i==0&&b%i==0&&c%i==0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}