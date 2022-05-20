#include <iostream>
using namespace std;

int main(){
    int n,ans=-1,w;
    cin>>n;
    for(int i=1;i<n/2;i++){
        if(ans<i*(n-i*2)) {
            ans=i*(n-i*2);
            w=i;
        }
    }
    cout<<w<<endl;

    return 0;
}