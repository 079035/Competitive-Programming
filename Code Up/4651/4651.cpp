#include <iostream>
using namespace std;

int main(){
    int cntz=0, a;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a;
            if(a==0)cntz++;
        }
        if(cntz==1)cout<<"A"<<endl;
        else if(cntz==2)cout<<"B"<<endl;
        else if(cntz==3)cout<<"C"<<endl;
        else if(cntz==4)cout<<"D"<<endl;
        else cout<<"E"<<endl;
        cntz=0;
    }
    return 0;
}