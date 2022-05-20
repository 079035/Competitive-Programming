#include <iostream>
using namespace std;

int main(){
    int k,n, arr[50][50], ans=0;
    cin>>k>>n;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
    while(n--){
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                if(arr[i][j]!=-1)arr[i][j]++;
            }
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(arr[i][j]!=-1&&arr[i][j]<=5)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}