#include <iostream>
#include <math.h>
using namespace std;

int a,b;

int main(){
    int cnt=0;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return 0;
    }
    while(a!=b){
        if(abs(b-a)>=8){
            if(b-a>0)a+=10;
            else a-=10;
        }
        else if(abs(b-a)>=4){
            if(b-a>0)a+=5;
            else a-=5;
        }
        else {
            if(b-a>0)a+=1;
            else a-=1;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}