#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n){
        int t=n;
        int check=0;
        while(t>0){
            check+=t%10;
            t/=10;
        }
        if(check%4==0){
            cout<<n<<endl;
            return 0;
        }
        n++;
    }
}