#include <iostream>
using namespace std;

int main(){
    long long int n,k,r(1);
    cin>>n>>k;
    if(n==k){
        cout<<1<<endl;
        return 0;
    }
    else if(k==1){
        cout<<n<<endl;
        return 0;
    }
    long long int res(1);
    for(int i=0;i<k;i++){
        res*=n-i;
    }
    for(int i=k;i>=1;i--){
        r*=i;
    }
    res/=r;
    cout<<res<<endl;
    return 0;
}