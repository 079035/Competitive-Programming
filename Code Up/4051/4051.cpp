#include <iostream>
using namespace std;

typedef float f;

int main(){
    f s,e, t=0, ans=1;
    for(int i=0;i<5;i++){
        cin>>s>>e;
        if(e-s-1>=0){
            if(e-s-1>=4) t+=4;
            else t+=e-s-1;
        }
    }
    ans*=t*2*5000;
    if(t>=15){
        ans*=0.95;
    }
    else if(t<=5){
        ans*=1.05;
    }
    cout<<ans<<endl;

    return 0;
}