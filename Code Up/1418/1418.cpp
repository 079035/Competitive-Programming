#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='t')cout<<i+1<<" ";
    }
    return 0;
}