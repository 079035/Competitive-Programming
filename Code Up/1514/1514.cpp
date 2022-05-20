#include <iostream>
using namespace std;

int arr[8][8]={0};

bool check(int x, int y){
    //Points
    if(x==1&&y==1){
        if(arr[1][2]==1||arr[2][1]==1)return true;
        else return false;
    }
    else if(x==7&&y==1){
        if(arr[6][1]==1||arr[7][2]==1)return true;
        else return false;
    }
    else if(x==7&&y==7){
        if(arr[6][7]==1||arr[7][6]==1)return true;
        else return false;
    }
    else if(x==1&&y==7){
        if(arr[2][7]==1||arr[1][6]==1)return true;
        else return false;
    }
    //Side
    else if(x==1){
        if(arr[2][y]==1||(arr[1][y-1]&&arr[1][y+1]))return true;
        else return false;
    }
    else if(y==1){
        if(arr[x][2]==1||(arr[x-1][y]&&arr[x+1][y]))return true;
        else return false;
    }
    else if(x==7){
        if(arr[6][y]==1||(arr[x][y-1]&&arr[x][y+1]))return true;
        else return false;
    }
    else if(y==7){
        if(arr[x][6]==1||(arr[x+1][y]&&arr[x-1][y]))return true;
        else return false;
    }
    //Else
    else {
        if((arr[x-1][y]&&arr[x+1][y])||(arr[x][y+1]&&arr[x][y-1]))return true;
        else return false;
    }
}

int main(){
    int var[3][2];
    for(int i=1;i<=7;i++){
        arr[4][i]=1;
    }
    for(int i=0;i<3;i++)cin>>var[i][0]>>var[i][1];
    for(int i=0;i<9;i++){
        int x,y;
        x=var[i%3][0];
        y=var[i%3][1];
        arr[x][y]=2;

        if(!check(x,y))continue;

        for(int j=x+1;j<=7;j++){
            arr[j][y]=1;
        }
        for(int j=x-1;j>=1;j--){
            arr[j][y]=1;
        }
        for(int j=y+1;j<=7;j++){
            arr[x][j]=1;
        }
        for(int j=y-1;j>=1;j--){
            arr[x][j]=1;
        }
    }
    for(int i=0;i<3;i++){
        arr[var[i][0]][var[i][1]]=2;
    }
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}