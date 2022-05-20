#include <iostream>
using namespace std;

int main(){
    int a,b,max=-1;
    for(int i=0;i<3;i++){
        cin>>a>>b;
        if(a*b>max)max=a*b;
    }
    cout<<max<<endl;
    return 0;
}