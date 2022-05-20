#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int i=0;
    string s;
    vector<char> v;
    cin>>s;
    if(s.length()%2){
        cout<<"bad"<<endl;
        return 0;
    }
    for(i=0;i<s.length();i++){
        v.push_back(s[i]);
    }
    for(i=0;i<v.size()-1;i++){
        if(v[i]=='('&&v[i+1]==')'){
            v.erase(v.begin()+i);
            v.erase(v.begin()+i);
            i=-1;
            if(v.size()==0)break;
        }
    }
    if(v.size()==0)
        cout<<"good"<<endl;
    else
        cout<<"bad"<<endl;
    return 0;
}