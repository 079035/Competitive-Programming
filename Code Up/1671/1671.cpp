#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"tie"<<endl;
        return 0;
    }
    if(a==2&&b==0){
        cout<<"win"<<endl;
    }
    else if(a==0&&b==2){
        cout<<"lose"<<endl;
    }
    else if(b>a){
        cout<<"win"<<endl;
    }
    else cout<<"lose"<<endl;
    return 0;
}