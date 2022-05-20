#include <iostream>
using namespace std;

char arr[101][31];
int n, m, s, t, ans=0, ma=0;

bool check_possible(){
    for(int i=s;i<t;i++){
        bool ptr=false;
        for(int j=1;j<=m;j++){
            if(arr[i][j]=='O'){
                ptr=true;
                break;
            }
        }
        if(ptr==false)return false;
    }
    return true;
}

int find_room(int idx){
    int res=0;
    for(int j=1;j<=m;j++){
        if(arr[idx][j]=='X') continue;
        for(int i=idx;i<t;i++){
            if(arr[i][j]=='X'){
                if(i>ma){
                    ma=i-1;
                    res=j;
                }
                break;
            }
            if(i==t-1){
                res=-2;
                return res;
            }
        }
    }
    return res;
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>s>>t;
    if(check_possible()==false){    //no room excp.
        cout<<-1<<endl;
        return 0;
    }
    int cur=find_room(s);
    if(cur==-2){                    //first room works
        cout<<0<<endl;
        return 0;
    }
    while(find_room(ma+1)!=-2){
        ans++;
    }
    cout<<ans+1<<endl;
    return 0;
}