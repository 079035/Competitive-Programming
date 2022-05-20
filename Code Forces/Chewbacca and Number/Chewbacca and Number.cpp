#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

int main()
{
    ll num, length=0;
    cin>>num;
    ll tmp=num;
    while(tmp>0){
        tmp/=10;
        length++;
    }
    if(length==1&&num%10<9-num%10){
        cout<<num%10;
        return 0;
    }
    else if(length==1&&9-num>0){
        cout<<9-(num%10);
        return 0;
    }
    else if(length==1){
        cout<<num%10;
        return 0;
    }
    for(ll i=length;i>1;i--) {
        ll n=num%(ll)pow(10,i)/(ll)pow(10,i-1);
        if(i==length&&n>9-n&&9-n>0){
            cout<<9-n;
            continue;
        }
        else if(i==length){
            cout<<n;
            continue;
        }
        if(n<9-n){
            cout<<n;
        }
        else cout<<9-n;
    }
    if(num%10<9-num%10)cout<<num%10;
    else cout<<9-(num%10);

    return 0;
}