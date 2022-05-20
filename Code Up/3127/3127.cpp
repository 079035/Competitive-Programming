#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

string s;

struct d{
    long long in;
    char c;
};

ll calc(ll a, ll b, char c){
    if(c=='*')return a*b;
    else if(c=='+')return a+b;
    else return a-b;
}

ll ch_n(int st, int e){
    ll a=0, t=1;
    for(int i=e;i>=st;i--){
        a+=(s[i]-48)*t;
        t*=10;
    }
    return a;
}

int main(){
    vector<d> v;
    getline(cin, s);
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            int st, en;
            d ex;
            if(s[i]>48){
                st=i;
                for(;s.length();i++){
                    if(s[i]==' '){
                        en=i-1;
                        break;
                    }
                }
                ex.in=ch_n(st, en); //if only int: char=~
                ex.c='~';
                v.push_back(ex);
            }
            else {
                ex.in=0;
                ex.c=s[i]; //if only char: int=0
                v.push_back(ex);
            }
        }
    }
    for(ll i=0;i<v.size();i++){
        if(v[i].c=='*'||v[i].c=='+'||v[i].c=='-'){
            v[i-2].in=calc(v[i-2].in, v[i-1].in, v[i].c);
            v.erase(v.begin()+i);
            v.erase(v.begin()+i-1);
            i=0;
            if(v.size()==1){
                cout<<v[0].in<<endl;
                return 0;
            }
        }
    }
    return 0;
}