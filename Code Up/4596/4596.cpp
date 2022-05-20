#include <iostream>
using namespace std;

int main(){
    int arr[10][10], max=-1, x,y;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            cin>>arr[i][j];
            if(arr[i][j]>max){
                max=arr[i][j];
                x=i;
                y=j;
            }
        }
    }
    cout<<max<<endl<<x<<" "<<y<<endl;
    return 0;
}