#include <iostream>
using namespace std;

int arr[10][10]={0};

bool bush_included=false, destroyed=false;

void wad(int x, int y){
    for(int i=x-2;i<=x+2;i++){
        for(int j=y-2;j<=y+2;j++){
            if(i>=1&&i<=10&&j>=1&j<=10)arr[i][j]=2;
        }
    }
}

void bush(int x1, int y1, int x2, int y2){
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            if(arr[i][j]==1){arr[i][j]=4;bush_included=true;}
        }
    }
    if(bush_included){
        for(int i=x1;i<=x2;i++){
            for(int j=y1;j<=y2;j++){
                if(arr[i][j]==4)continue;
                arr[i][j]=2;
            }
        }
    }
    else{
        for(int i=x1;i<=x2;i++){
            for(int j=y1;j<=y2;j++){
                arr[i][j]=3;
            }
        }
    }
}

void lenz(int x, int y){
    for(int i=x-2;i<=x+2;i++){
        for(int j=y-2;j<=y+2;j++){
            if(i>=1&&i<=9&&j>=1&j<=9){
                if(arr[i][j]==1||arr[i][j]==4){
                    destroyed=true;
                    return;
                }
                if(arr[i][j]==2)arr[i][j]=7;  //'c'
                else arr[i][j]=6; //'b'
            }
        }
    }
}

int main(){
    int a1,a2,b1,b2,c1,c2,d1,d2,ans=0;
    cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;
    wad(a1,a2);
    arr[a1][a2]=1;
    bush(c1,c2,d1,d2);
    lenz(b1,b2);
    arr[b1][b2]=5;
    if(destroyed){
        cout<<0<<endl;
        return 0;
    }
    
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if((arr[i][j]>0&&arr[i][j]<=2)||arr[i][j]==4)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}