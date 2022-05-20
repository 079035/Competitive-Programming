#include <iostream>
#include <algorithm>

using namespace std;

struct pos{
    int x;
    int y;
};

bool range(int s, int x, int y, int l){
    int res=abs(s-x);
    res+=y;
    if(res<=l)return true;
    else return false;
}

bool cmp(pos a, pos b){
    return a.x<b.x;
}

int main(){
    int n, m, l, cnt=0, cur=0;
    cin>>m>>n>>l;
    int *spot=new int[m];
    for(int i=0;i<m;i++){
        cin>>spot[i];
    }
    sort(spot, spot+m);
    pos animal[100000];
    for(int i=0;i<n;i++){
        cin>>animal[i].x>>animal[i].y;
    }
    sort(animal, animal+n, cmp);
    for(int i=0;i<n;i++){
        if(animal[i].y<=l){
            for(int j=cur;j<m;j++){
                if(range(spot[j], animal[i].x, animal[i].y, l)){
                    cnt++;
                    cur=j;
                    break;
                }
                if(animal[i].x<spot[j])break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}