#include <iostream>
using namespace std;

int main(){
    int n, b[10], x,y;  //A-L, 0-9
    char a[12];
    for(int i=0;i<10;i++){
        b[i]=i;
    }
    for(int i=0;i<12;i++){
        a[i]=65+i;
    }

    cin>>n;
    //2013: F9 '사임' a[5], b[9]
    //so
    //2008: A4 a[0], b[4]
    //2014: G0 a[6], b[0]
    int tmp=n;
    if(tmp<2008){ // for Alpha
        while(tmp<2008)tmp+=12;
    }
    int temp=n;
    if(temp<2014){ // for Num
        while(temp<2014)temp+=10;
    }
    x=tmp-2008;
    y=temp-2014;
    cout<<a[x%12]<<b[y%10]<<endl;


    return 0;
}