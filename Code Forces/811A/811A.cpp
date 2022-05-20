#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int main(){
    int can=1;
    int a,b;
    cin>>a>>b;
    for(int i=1; b>=0&&a>=0;i++){
        if(i%2==1)a-=i;
        else b-=i;
    }
    if(a<0)cout<<"Vladik"<<endl;
    else cout<<"Valera"<<endl;
    return 0;
}