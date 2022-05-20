#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //linear
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][3]==arr[i][j]&&arr[i][j]==1){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

    if((arr[0][3]==arr[1][0]||arr[0][3]==arr[2][1]||arr[0][3]==arr[3][2])&&arr[0][3]==1){
        cout<<"YES"<<endl;
        return 0;
    }
    else if((arr[1][3]==arr[0][2]||arr[1][3]==arr[2][0]||arr[1][3]==arr[3][1])&&arr[1][3]==1){
        cout<<"YES"<<endl;
        return 0;
    }
    else if((arr[2][3]==arr[0][1]||arr[2][3]==arr[1][2]||arr[2][3]==arr[3][0])&&arr[2][3]==1){
        cout<<"YES"<<endl;
        return 0;
    }
    else if((arr[3][3]==arr[0][0]||arr[3][3]==arr[1][1]||arr[3][3]==arr[2][2])&&arr[3][3]==1){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}