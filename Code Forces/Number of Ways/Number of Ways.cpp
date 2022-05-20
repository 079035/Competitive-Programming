#include <iostream>

#define ll long long

using namespace std;

ll a[500005];

int main(){
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3==0){
        sum/=3;
        ll s=0;
        ll ct=0, ans=0;
        for(int i=0;i<n-1;i++){
            s+=a[i];

            if(s==sum*2)
                ans+=ct;
            if(s==sum)
                ct+=1;
        }
        cout<<ans<<endl;
    }
    
    else cout<<0<<endl;

    return 0;
}