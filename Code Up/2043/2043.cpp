#include <iostream>
#include <vector>
#define pb push_back
using namespace std;
 
int main() {
   string s;
   cin>>s;
   vector<char> v;
 
   char P=s[0];
   if(s.length()==1){
       cout<<P<<endl;
       return 0;
   }
   for(int i=s.length()-1;i>=1;i--)
   {
       if(s[i]==s[i-1])s[i]='_';
   }
   for(int i=1;i<s.length();i++)
   {
       char c=s[i];
       if(c=='a'||c=='e'||c=='h'||c=='i'||c=='o'||c=='u'||c=='w'||c=='y'){
           s[i]='_';
           continue;
       }
       if(c=='_')continue;
       v.pb(s[i]);
   }
   for(auto itr=v.begin();itr!=v.end();itr++)
   {
       char c=*itr;
       if(c=='b'||c=='f'||c=='p'||c=='v')*itr='1';
       else if(c=='c'||c=='g'||c=='j'||c=='k'||c=='q'||c=='s'||c=='x'||c=='z')*itr='2';
       else if(c=='d'||c=='t')*itr='3';
       else if(c=='l')*itr='4';
       else if(c=='m'||c=='n')*itr='5';
       else if(c=='r')*itr='6';
   }
   if(v.size()<3)
       while(v.size()<3)v.pb('0');
   cout<<P;
   for(int i=0;i<3;i++)
       cout<<v[i];
   cout<<endl;
   return 0;
}