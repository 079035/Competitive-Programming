#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int main()
{
    int moon_h=0, moon_a;
    for(int i=0;i<4;i++){
        int t;
        cin>>t;
        moon_h+=t;
    }
    cin>>moon_a;

    int pos;
    char sign=0;
    int effect=0, turn=-1;
    cin>>pos;
    if(pos==1){
        cin>>sign>>effect>>turn;
        if(sign=='+')moon_a+=effect;
        else moon_a*=effect;
    }
    int mob_h, mob_a;
    cin>>mob_a>>mob_h;
    
    bool who=true;
    while(mob_h>0&&moon_h>0)
    {
        if(who){
            if(--turn==0){
                if(sign=='+')moon_a-=effect;
                else moon_a/=effect;
            }
            mob_h-=moon_a;
            who=false;
        }
        else {
            moon_h-=mob_a;
            who=true;
        }
    }
    if(moon_h<=0)cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}