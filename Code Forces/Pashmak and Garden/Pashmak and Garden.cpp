#include <iostream>
#include <algorithm>

using namespace std;

int set_x(int a, int gap){
    a+=gap;
    if(a>1000)
        a-=(gap*2);
    return a;
}

int set_y(int b, int gap){
    b+=gap;
    if(b>1000)
        b-=(gap*2);
    return b;
}

int main(){
    int a,b,c,d, gap, tmp, m,n;
    int x,y,t,h;
    cin>>a>>b>>c>>d;
    if(a==c){
        gap=max(b,d)-min(b,d);
        y=b; //y축 먼저 처리
        h=d; 
        x=set_x(a, gap); //x축 처리
        t=set_x(a, gap);
    }
    else if(b==d){
        gap=max(a,c)-min(a,c);
        x=a;
        t=c;
        y=set_y(b, gap);
        h=set_y(b, gap);
    }
    else if(max(a,c)-min(a,c)==max(b,d)-min(b,d)){
        gap=max(a,c)-min(a,c);
        if(c>a){
            m=max(a,c);
            n=min(a,c);
            a=m;
            c=n;
            tmp=b;
            b=d;
            d=tmp;
        }
        x=a;
        y=d;
        t=c;
        h=b;
    }
    else{
        cout<<-1<<endl;
        return 0;
    }
    cout<<x<<" "<<y<<" "<<t<<" "<<h<<endl;
    return 0;
}