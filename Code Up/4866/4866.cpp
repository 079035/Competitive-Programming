#include <iostream>
using namespace std;

int main(){
    int n,k,s,y,young=0, old_b[2]={0}, old_g[2]={0}, ans(0);
    cin>>n>>k;
    while(n--){
        cin>>s>>y;
        if(y<3){
            young++;
        }
        else if(y<5){
            if(s==0)old_g[0]++;
            else old_b[0]++;
        }
        else {
            if(s==0)old_g[1]++;
            else old_b[1]++;
        }
    }
    ans+=young/k;
    if(young%k)ans++;
    ans+=old_b[0]/k;
    if(old_b[0]%k)ans++;
    ans+=old_b[1]/k;
    if(old_b[1]%k)ans++;
    ans+=old_g[0]/k;
    if(old_g[0]%k)ans++;
    ans+=old_g[1]/k;
    if(old_g[1]%k)ans++;
    cout<<ans<<endl;
    return 0;
}