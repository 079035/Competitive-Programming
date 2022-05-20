#include <iostream>
using namespace std;

bool checkS(int n){
    for(int i=1;i<=n;i++){
        if(i*i==n)
            return true;
    }
    return false;
}

int main(){
    int m,n,fs=-1,ans=0;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        if(checkS(i)){
            if(fs==-1)fs=i;
            ans+=i;
        }
    }
    cout<<ans<<endl<<fs<<endl;

    return 0;
}