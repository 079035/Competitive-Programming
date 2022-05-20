#include <iostream>
using namespace std;

int main(){
    int n,max=-1,min=101,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>max)max=a;
        if(a<min)min=a;
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}