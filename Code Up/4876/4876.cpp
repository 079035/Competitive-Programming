#include <iostream>
using namespace std;

int main(){
    int n, g, f[5], d, s[5], t;
    cin>>n;
    while(n--){
        for(int i=0;i<5;i++){ //initialization
            f[i]=0;
            s[i]=0;
        }
        cin>>g;
        for(int i=0;i<g;i++){
            cin>>t;
            if(t==1)f[1]++;
            else if(t==2)f[2]++;
            else if(t==3)f[3]++;
            else f[4]++;
        }
        cin>>d;
        for(int i=0;i<d;i++){
            cin>>t;
            if(t==1)s[1]++;
            else if(t==2)s[2]++;
            else if(t==3)s[3]++;
            else s[4]++;
        }
        for(int i=4;i>=0;i--){ //initialization
            if(f[i]==s[i]&&i==0){
                cout<<"D"<<endl;
                break;
            }
            else if(f[i]==s[i])continue;
            else if(f[i]>s[i]){
                cout<<"A"<<endl;
                break;
            }
            else if(f[i]<s[i]){
                cout<<"B"<<endl;
                break;
            }
        }
    }
    return 0;
}