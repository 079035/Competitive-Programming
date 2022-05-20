#include <iostream>
using namespace std;

struct square{
    int x, y, X, Y;
};

int main(){
    square a,b;
    cin>>a.x>>a.y>>a.X>>a.Y>>b.x>>b.y>>b.X>>b.Y;
    if(a.x>b.X||a.y>b.Y||b.x>a.X||b.y>a.Y) cout<<"NULL"<<endl;
    else if(a.x==b.X){
        if(a.y==b.Y||a.Y==b.y)cout<<"POINT"<<endl;
        else cout<<"LINE"<<endl;
    }
    else if(a.X==b.x){
        if(a.Y==b.y||a.y==b.Y)cout<<"POINT"<<endl;
        else cout<<"LINE"<<endl;
    }
    else if(a.Y==b.y){
        if(a.X==b.x||a.x==b.X)cout<<"POINT"<<endl;
        else cout<<"LINE"<<endl;
    }
    else if(a.y==b.Y){
        if(a.x==b.X||a.X==b.x)cout<<"POINT"<<endl;
        else cout<<"LINE"<<endl;
    }
    else cout<<"FACE"<<endl;
    
    return 0;
}