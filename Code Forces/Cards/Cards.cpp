#include <iostream>

using namespace std;

int main(){
    int n,t,s=0;
    cin>>n;
    int *arr=new int[n];
    bool *check=new bool[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
        check[i]=false; // true means it has been used.
    }
    s/=(n/2);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(check[i])break;
            if(i==j)continue;
            if(check[j])continue;
            if(arr[i]+arr[j]==s){
                check[i]=true;
                check[j]=true;
                cout<<i+1<<" "<<j+1<<endl;
                if(i+1==j)i++;
                break;
            }
        }
    }
    return 0;
}