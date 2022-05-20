#include <iostream>
#include <string.h>
using namespace std;

int p[4]={-1,0,0,1}, q[4]={0,-1,1,0};
int n,m;
int a[110][110], b[110][110];

void on(int x, int y){
    a[x][y]=1;
    for(int i=0;i<4;i++){
        if(a[x+p[i]][y+q[i]]==0)on(x+p[i], y+q[i]);
    }
    return;
}
void off(int x, int y){
    b[x][y]=0;
    for(int i=0;i<4;i++){
        if(b[x+p[i]][y+q[i]]==1)off(x+p[i], y+q[i]);
    }
    return;
}

int main()
{
    int onc=0, ofc=0;
    memset(a, -1, sizeof(a));
    memset(b, -1, sizeof(b));
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==0){
                on(i,j);
                onc++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(b[i][j]==1){
                off(i,j);
                ofc++;
            }
        }
    }
    cout<<onc<<" "<<ofc<<endl;
    return 0;
}