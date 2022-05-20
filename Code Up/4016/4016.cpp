#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int r=a;
    while(a%r!=0 || b%r!=0 || c%r!=0){
        r--;
        if(a%r==0 && b%r==0 && c%r==0){
            cout<<r<<endl;
            return 0;
        }
    }
    cout<<r<<endl;
    return 0;
}