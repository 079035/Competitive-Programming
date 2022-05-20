/*
NAME: jordidc1
TASK: palsquare
LANG: C++
*/
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
ifstream fin("palsquare.in");
ofstream fout("palsquare.out");

string toBase_B(int n, int b){
    vector<int> v;
    string res="";
    while(n>0){
        v.push_back(n%b);
        n/=b;
    }
    for(int i=1;i<=v.size();i++){
        int j=(int)v[v.size()-i];
        if(j>=10){
            char c=(char)((int)'A'+(j-10));
            res+=c;
        }
        else res+=(char)(j+48);
    }
    return res;
}

void isPalindrome(int a, int n, int b){
    string sub=toBase_B(n, b);
    for(int i=0;i<sub.length()/2;i++){
        if(sub[i]!=sub[sub.length()-1-i])return;
    }
    fout<<toBase_B(a,b)<<" "<<sub<<endl;
    return;
}

int main(){
    int b;
    fin>>b;
    for(int i=1;i<=300;i++){
        isPalindrome(i, i*i, b);
    }
    exit(0);
}