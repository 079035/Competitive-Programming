#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int ans=0;
    cin>>s;
    for(int i=0;i<s.length()-3;i+=2){
        if(s[i+1]=='I'){
            if(s[i+3]!='I')
                ans-=(s[i]-48);
            else ans+=s[i]-48;
        }
        else if(s[i+1]=='V'){
            if(s[i+3]!='I'&&s[i+3]!='V')
                ans-=(s[i]-48)*5;
            else ans+=(s[i]-48)*5;
        }
        else if(s[i+1]=='X'){
            if(s[i+3]!='I'&&s[i+3]!='V'&&s[i+3]!='X')
                ans-=(s[i]-48)*10;
            else ans+=(s[i]-48)*10;
        }
        else if(s[i+1]=='L'){
            if(s[i+3]!='I'&&s[i+3]!='V'&&s[i+3]!='X'&&s[i+3]!='L')
                ans-=(s[i]-48)*50;
            else ans+=(s[i]-48)*50;
        }
        else if(s[i+1]=='C'){
            if(s[i+3]=='D'||s[i+3]=='M')
                ans-=(s[i]-48)*100;
            else ans+=(s[i]-48)*100;
        }
        else if(s[i+1]=='D'){
            if(s[i+3]=='M')
                ans-=(s[i]-48)*500;
            else ans+=(s[i]-48)*500;
        }
        else if(s[i+1]=='M'){
            ans+=(s[i]-48)*1000;
        }
    }
    if(s[s.length()-1]=='I')ans+=(s[s.length()-2]-48);
    else if(s[s.length()-1]=='V')ans+=(s[s.length()-2]-48)*5;
    else if(s[s.length()-1]=='X')ans+=(s[s.length()-2]-48)*10;
    else if(s[s.length()-1]=='L')ans+=(s[s.length()-2]-48)*50;
    else if(s[s.length()-1]=='C')ans+=(s[s.length()-2]-48)*100;
    else if(s[s.length()-1]=='D')ans+=(s[s.length()-2]-48)*500;
    else if(s[s.length()-1]=='M')ans+=(s[s.length()-2]-48)*1000;
    
    cout<<ans<<endl;
    
    return 0;
}