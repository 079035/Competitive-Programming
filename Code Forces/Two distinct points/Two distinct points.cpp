#include <iostream>

using namespace std;

int main() {
    int q, l, r;
    
    cin>>q;
    
    int **cor=new int*[500];
    
    for(int i=0;i<500;i++){
        cor[i]=new int[4];
    }
    
    for(int i=0;i<q;i++){
        cin>>cor[i][0]>>cor[i][1]>>cor[i][2]>>cor[i][3];
    }
    
    for(int i=0;i<q;i++){
        if(cor[i][0]==cor[i][2] && cor[i][1]==cor[i][3]){
            l = cor[i][0];
            r = cor[i][3];
        }
        else if(cor[i][0]==cor[i][2]){
            l = cor[i][1]; 
            r = cor[i][3];
        }
        else if(cor[i][1]==cor[i][3]){
            l = cor[i][0];
            r = cor[i][2];
        }
        else if(cor[i][0]==cor[i][3]){
            l=cor[i][1];
            r=cor[i][0];
        }
        else{
            l=cor[i][0];
            r=cor[i][3];
        }

        cout<<l<<" "<<r<<endl;
    }

    return 0;
}
