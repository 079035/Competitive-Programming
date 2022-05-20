#include <iostream>
using namespace std;

int main(){
    int n, a=1;
    cin>>n;
    int arr[100][100];
    for(int i=0;i<n;i++){
        if(i%2==0)
            for(int j=0;j<n;j++){
                arr[i][j]=a++;
            }
        else 
            for(int j=n-1;j>=0;j--){
                arr[i][j]=a++;
            }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}