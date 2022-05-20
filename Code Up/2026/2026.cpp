#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
void g(int, int);
int convert();
vector<int> res;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        int num;
        if(str[i]>=65)num=str[i]-65+10;
        else num=str[i]-48;
        //cout<<"num: "<<num<<endl;
        g(num, 2);
        /*
        cout<<"binary: ";
        for(auto itr=res.begin();itr!=res.end();itr++)
            cout<<*itr;
        cout<<endl;
        */
        num=convert();
        printf("%04d ", num);
        res.clear();
    }
    return 0;
}

void g(int x, int y){
    if(x==0)
        return;
    g(x/y,y);
    res.push_back(x%y);
}

int convert(){
    int r=0;
    int q=0;
    //cout<<res.size()<<endl;
    //cout<<pow(10,0)<<endl;
    while(!res.empty()){
        r+=res.back()*pow(10,q);
        q++;
        res.pop_back();
    }
    return r;
}