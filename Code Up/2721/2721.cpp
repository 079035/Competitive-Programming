#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1[s1.length()-1]==s2[0]&&s2[s2.length()-1]==s3[0]&&s3[s3.length()-1]==s1[0])
        cout<<"good"<<endl;
    else cout<<"bad"<<endl;
    return 0;
}