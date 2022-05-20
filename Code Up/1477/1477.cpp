#include <iostream>
using namespace std;

int main(){
    int n,m,a=1;
    cin>>n>>m;
    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[j][i-j]=a++;
        }
    }
    return 0;
}