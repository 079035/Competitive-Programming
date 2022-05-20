#include <iostream>
using namespace std;

bool checkP(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int m,n,ans=0,fp=-1;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        if(i==1)i=2;
        if(checkP(i)){
            if(fp==-1) fp=i;
            ans+=i;
        }
    }
    cout<<ans<<endl<<fp<<endl;
    return 0;
}