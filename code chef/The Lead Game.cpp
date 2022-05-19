#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first 
#define S second 
#define mp make_pair
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)

using namespace std;


int main(){
    int i,t,p1=0,p2=0,s1=0,s2=0,l1,l2,c1=0,c2=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>l1>>l2;
        p1+=l1;
        p2+=l2;
        if(p1>p2){
            s1=p1-p2;
            if(s1>c1) c1=s1;
        }   
        else{
            s2=p2-p1;
            if(s2>c2) c2=s2;
        }
    }
    if(c1>c2)
        cout<<1<<" "<<c1<<endl;
    else
        cout<<2<<" "<<c2<<endl;
    return 0;
}