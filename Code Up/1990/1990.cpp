#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int a=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        a+=s[i]-48;
    }
    if(a%3==0)cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}