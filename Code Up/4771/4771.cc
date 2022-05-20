#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int ans=10;
    cin>>str;
    for(int i=1;i<str.length();i++){
        if(str[i]!=str[i-1])ans+=10;
        else ans+=5;
    }
    cout<<ans<<endl;

    return 0;
}