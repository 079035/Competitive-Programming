#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int n,m;
    string s1,s2,s;
    cin>>n>>m;
    map<string, string> data;
    for(int i=0;i<m;i++){
        cin>>s1>>s2;
        data.insert(pair<string, string>(s1, s2));
    }

    for(int i=0;i<n;i++){
        cin>>s;
        auto itr=data.find(s);
        if(itr->first.length()>itr->second.length()){
            s=itr->second;
        }
        else s=itr->first;
        cout<<s<<" ";
    }    
    return 0;
}