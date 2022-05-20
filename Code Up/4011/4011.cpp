#include <iostream>
using namespace std;

int main(){
    int a[6],b[7];
    char c;
    for(int i=0;i<6;i++){
        scanf("%1d", &a[i]);
    }
    scanf("%c", &c);
    for(int i=0;i<7;i++){
        scanf("%1d", &b[i]);
    }
    if(b[0]==1){
        printf("19%d%d/%d%d/%d%d M", a[0], a[1], a[2], a[3], a[4], a[5]);
    }
    else if(b[0]==2){
        printf("19%d%d/%d%d/%d%d F", a[0], a[1], a[2], a[3], a[4], a[5]);
    }
    else if(b[0]==3){
        printf("20%d%d/%d%d/%d%d M", a[0], a[1], a[2], a[3], a[4], a[5]);
    }
    else{
        printf("20%d%d/%d%d/%d%d F", a[0], a[1], a[2], a[3], a[4], a[5]);
    }
    
    return 0;
}