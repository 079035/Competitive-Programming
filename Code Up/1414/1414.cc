#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int cnt=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='c'||s[i]=='C')cnt++;
    }
    cout<<cnt<<endl;
    cnt=0;
    for(int i=0;i<s.length()-1;i++){
        if((s[i]=='c'||s[i]=='C')&&(s[i+1]=='c'||s[i+1]=='C'))cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}