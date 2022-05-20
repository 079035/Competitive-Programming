#include <iostream>
#include <limits.h>
using namespace std;

int a, b, c, d, m=INT_MAX, change=0;

void fill(int idx, int x, int y, int step);
void emp(int idx, int x, int y, int step);
void mov(int source, int x, int y, int step);

void fill(int idx, int x, int y, int step){
    if(step>10 || step>m){
        return;
    }
    if(x==c && y==d){
        if(step<m){
            m=step;
        }
        return;
    }

    if(idx==1){
        x=a;              // fill
        emp(1, x, y, step+1);
        mov(1, x, y, step+1);
        fill(2, x, y, step+1);
        emp(2, x, y, step+1);
        mov(2, x, y, step+1);
    }

    else {
        y=b;   
        fill(1, x, y, step+1);      //****** 1:A 2:B ******//
        emp(1, x, y, step+1);
        mov(1, x, y, step+1);
        emp(2, x, y, step+1);
        mov(2, x, y, step+1);
    }
}
void emp(int idx, int x, int y, int step){
    if(step>10 || step>m){
        return;
    }
    if(x==c && y==d){
        if(step<m){
            m=step;
        }
        return;
    }

    if(idx==1){
        x=0;              //empty
        fill(1, x, y, step+1);
        mov(1, x, y, step+1);
        fill(2, x, y, step+1);
        emp(2, x, y, step+1);
        mov(2, x, y, step+1);
    }
    else {
        y=0;
        fill(1, x, y, step+1);      //****** 1:A 2:B ******//
        emp(1, x, y, step+1);
        mov(1, x, y, step+1);
        fill(2, x, y, step+1);
        mov(2, x, y, step+1);
    }
}
void mov(int source, int x, int y, int step){
    if(step>10 || step>m){
        return;
    }
    if(x==c && y==d){
        if(step<m){
            m=step;
        }
        return;
    }

    if(source==1){              // mov
        if(y+x>b){
            x-=b-y;
            y=b;
        }
        else{
            y+=x;
            x=0;
        }
        fill(1, x, y, step+1);      //****** 1:A 2:B ******//
        emp(1, x, y, step+1);
        fill(2, x, y, step+1);
        emp(2, x, y, step+1);
        mov(2, x, y, step+1);
    }
    else{
        if(x+y>a){
            y-=a-x;
            x=a;
        }
        else{
            x+=y;
            y=0;
        }
        fill(1, x, y, step+1);      //****** 1:A 2:B ******//
        emp(1, x, y, step+1);
        mov(1, x, y, step+1);
        fill(2, x, y, step+1);
        emp(2, x, y, step+1);
    }
}

int main(){
    cin>>a>>b>>c>>d;
    fill(1, 0, 0, 0);      //****** 1:A 2:B ******//   (idx, current a, current b, total step)
    fill(2, 0, 0, 0);
    if(m>10)cout<<-1<<endl;
    else cout<<m<<endl;
    return 0;
}