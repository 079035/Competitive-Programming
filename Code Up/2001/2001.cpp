#include <iostream>
using namespace std;

int main(){
    int spa[3], dri[2];
    float min=10010, t;
    for(int i=0;i<3;i++){
        cin>>spa[i];
    }
    for(int i=0;i<2;i++){
        cin>>dri[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            t=(spa[i]+dri[j])*1.1;
            if(t<min)min=t;
        }
    }
    printf("%.1f\n", min);
    return 0;
}