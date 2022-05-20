#include <iostream>

using namespace std;

void printSquare(int w, int l, bool flag){
    for(int i=0;i<l;i++){
        for(int j=0;j<w;j++){
            if(flag)
            cout<<'.';
        }
    }
}

int main()
{
    int W,H,w,h;
    cin>>H>>W>>h>>w;
    for(int i=0;i<H;i++){
        for(int a=0;a<h;a++){
            for(int j=0;j<W;j++){
                for(int b=0;b<w;b++){
                    if(i%2==0){
                        if(j%2==0)cout<<'X';
                        else cout<<'.';
                    }
                    else{
                        if(j%2)cout<<'X';
                        else cout<<'.';
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}