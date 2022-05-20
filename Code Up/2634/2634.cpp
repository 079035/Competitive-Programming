#include <iostream>
using namespace std;

int m,n,arr[10],ans=100000;

void getmoney(int money, int step){
    if(step>ans)return;
    if(money==m){
        if(step<ans)ans=step;
        return;
    }
    else if(money>m){
        return;
    }
    else{
        for(int i=n-1;i>=0;i--){
            getmoney(money+arr[i], step+1);
        }
    }
}

int main(){
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getmoney(0,0);
    cout<<ans<<endl;
    
    return 0;
}