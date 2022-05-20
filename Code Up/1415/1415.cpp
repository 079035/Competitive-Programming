#include <iostream>
using namespace std;

int main(){
    int even_max=0, odd_max=0, a;
    for(int i=0;i<10;i++){
        cin>>a;
        if(a%2){if(a>odd_max)odd_max=a;}
        else if(a>even_max)even_max=a;
    }
    if(even_max==0)cout<<odd_max<<endl;
    else if(odd_max==0)cout<<even_max<<endl;
    else cout<<odd_max<<" "<<even_max<<endl;
    return 0;
}