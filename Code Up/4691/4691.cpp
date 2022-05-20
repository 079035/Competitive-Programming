#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000], a[4];

int checkP(){
    int cnt=0, res=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i]==a[j])cnt++;
        }
        if(res<cnt)res=cnt;
        cnt=0;
    }
    return res;
}

int main(){
    int n, p=0, ans=-1, cnt;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>a[j];
        }
        sort(a, a+4);
        cnt=checkP();
        if(cnt==2){
            if(a[0]==a[1]&&a[2]==a[3]){
                p=2000+a[0]*500+a[2]*500;
            }
            else {
                if(a[0]==a[1]){
                    p=1000+a[0]*100;
                }
                else if(a[1]==a[2]){
                    p=1000+a[1]*100;
                }
                else p=1000+a[2]*100;
            }
        }
        else if(cnt==3){
            p=10000+a[2]*1000;
        }
        else if(cnt==4) p=50000+a[3]*5000;
        else {
            int max=-1;
            for(int i=0;i<4;i++){
                if(max<a[i])max=a[i];
            }
            p=max*100;
        }
        if(p>ans)ans=p;
    }
    cout<<ans<<endl;

    return 0;
}