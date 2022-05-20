#include <iostream>
using namespace std;

float lcm(float a, float b){
    float g=a;
    while(g%b!=0){
        g+=a;
    }
    return g;
}

int main(){
    int df, ds;
    cin>>df>>ds;
    for(int i=df; i<=ds-1;i++){
        float to=360/i;
        float tt=360/(i+1);
        int r=2;
    }
    return 0;
}