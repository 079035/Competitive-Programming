#include <iostream>

using namespace std;

int pascal[26][26]={0}, d[26][26]={0};

int h(int x, int y){
    if(d[x][y])return pascal[x][y];
    pascal[x][y]=h(x-1, y-1)+h(x-1,y);
    d[x][y]=1;
    return pascal[x][y];
}

void g(int x, int y){
    if(y<=0)return;
    g(x, y-1);
    if(y==1||x==y){
        d[x][y]=1;
        pascal[x][y]=1;
    }
    if(d[x][y]){
        cout<<pascal[x][y]<<" ";
        return;
    }
    cout<<h(x,y)<<" ";
}

void f(int k){
    if(k<=0)return;
    f(k-1);
    g(k, k);
    cout<<endl;
}

int main()
{
    d[1][1]=1;d[2][1]=1;d[2][2]=1;
    pascal[1][1]=1;pascal[2][1]=1;pascal[2][2]=1;
    int n;
    cin>>n;
    f(n);
    return 0;
}