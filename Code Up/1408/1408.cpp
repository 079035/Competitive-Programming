#include <iostream>
#include <string>
using namespace std;

int main(){
    string o, s1, s2;
    cin>>o;
    s1=o;
    s2=o;
    for(int i=0;i<o.length();i++){
        s1[i]+=2;
        s2[i]=s2[i]*7%80+48;
    }
    cout<<s1<<endl<<s2<<endl;
    return 0;
}