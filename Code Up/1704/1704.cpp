#include <iostream>
using namespace std;

int main(){
    int first[6], second[6];
    for(int i=0;i<6;i++){
        scanf("%1d", &first[i]);
    }
    for(int i=0;i<6;i++){
        scanf("%1d", &second[i]);
    }
    if(second[0]==1)
        cout<<2013-(1900+first[0]*10+first[1])<<" "<<'M'<<endl;
    else if(second[0]==2)
        cout<<2013-(1900+first[0]*10+first[1])<<" "<<'F'<<endl;
    else if(second[0]==3)
        cout<<2013-(2000+first[0]*10+first[1])<<" "<<'M'<<endl;
    else if(second[0]==4)
        cout<<2013-(2000+first[0]*10+first[1])<<" "<<'F'<<endl;
    return 0;
}