/*
ID: jordidc1
TASK: namenum
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int printed=0;
    ifstream fin("namenum.in"), fdict("dict.txt");
    ofstream fout("namenum.out");
    string n,s,ns="";
    fin>>n;
    for(int i=0;i<4617;i++){
        fdict>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='A'||s[j]=='B'||s[j]=='C')ns+="2";
            else if(s[j]=='D' || s[j]=='E' || s[j]=='F') ns+="3";
			else if(s[j]=='G' || s[j]=='H' || s[j]=='I') ns+="4";
			else if(s[j]=='J' || s[j]=='K' || s[j]=='L') ns+="5";
			else if(s[j]=='M' || s[j]=='N' || s[j]=='O') ns+="6";
			else if(s[j]=='P' || s[j]=='R' || s[j]=='S') ns+="7";
			else if(s[j]=='T' || s[j]=='U' || s[j]=='V') ns+="8";
			else if(s[j]=='W' || s[j]=='X' || s[j]=='Y') ns+="9";	
        }
        if(ns==n){fout<<s<<endl;printed=1;}
        else if(s=="ZYTA"&&!printed)fout<<"NONE"<<endl;
        ns="";
    }
    fout.close();
    exit(0);
}