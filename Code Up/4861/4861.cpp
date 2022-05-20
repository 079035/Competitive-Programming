#include <iostream>
using namespace std;

int main(){
    int n,k,s,y, g[7]={0}, b[7]={0}, ans=0;
    cin>>n>>k;
    while(n--){
        cin>>s>>y;
        if(s==0){
            g[y]++;
        }
        else b[y]++;
    }
    for(int i=1;i<7;i++){
        ans+=g[i]/k;
        if(g[i]%k)ans++;
        ans+=b[i]/k;
        if(b[i]%k)ans++;
    }
    cout<<ans<<endl;

    return 0;
}