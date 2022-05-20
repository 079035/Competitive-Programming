#include <iostream>
#include <algorithm>
using namespace std;

#define min(a,b,c) min(min(a,b),c)

int main(){
    int a,b,c,i=1;
    cin>>a>>b>>c;
    i=min(a,b,c);
    while(i>0){
        if(a%i==0&&b%i==0&&c%i==0){
            cout<<i<<endl;
            return 0;
        }
        i--;
    }
    return 0;
}