#include <iostream>
#include <algorithm>
using namespace std;

struct v{
    int a,b;
};

int cmp(v &p, v &q){
    return p.a>q.a;
}

int main(){
    int n, ans=0;
    bool f=false, s=false;
    cin>>n;
    v *arr=new v[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].a;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i].b;
    }
    for(int i=0;i<n;i++){
        if(arr[i].a>arr[i].b){
            ans+=arr[i].a;
            f=true;
        }
        else {
            ans+=arr[i].b;
            s=true;
        }
    }

    if(!s){
        sort(arr, arr+n, cmp);
        ans-=arr[n-1].a;
        ans+=arr[n-1].b;
    }
    else if(!f){
        sort(arr, arr+n, cmp);
        ans-=arr[n-1].b;
        ans+=arr[n-1].a;
    }

    cout<<ans<<endl;

    return 0;
}