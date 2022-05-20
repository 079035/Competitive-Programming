#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int cnt=0;
    getline(cin, s);
    for(int i=0;i<=s.length()-4;i++){
        if(s[i]=='l'&&s[i+1]=='o'&&s[i+2]=='v'&&s[i+3]=='e')cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}