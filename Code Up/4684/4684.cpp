#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int n, locked[500];

void flip(int a, int b){
    for(int i=0;i<(b-a)/2;i++){
        int t=locked[a+i];
        locked[a+i]=locked[b-i];
        locked[b-i]=t;
    }
}

void shift(int a){
    stack<int> s;
    queue<int> q;
    for(int i=n-a-1;i>=0;i--){
        s.push(locked[i]);
    }
    for(int i=n-1;i>=n-a;i--){
        q.push(locked[i]);
    }
    for(int i=0;0<q.size();i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        locked[i]=s.top();
        s.pop();
    }
}

int main(){
    int i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>locked[i];
    }
    int tmp=n,a=0;
    while(locked[0]>locked[tmp-1]){
        a++;
        tmp--;
    }
    shift(a);
        /*
        for(int i=0;i<n;i++){
            cout<<locked[i]<<" ";
        }
        cout<<endl;
        */
    
    int s=0,e=0;
    for(int i=0;i<n-1;i++){
        if(locked[i+1]==n){s=i;break;}
        if(locked[i+1]<locked[i]){s=i;break;}
    }
    s++;
    e=n-1;
    for(int i=s;i<n-1;i++){
        if(locked[i+1]==n)continue;
        if(locked[i+1]>locked[i]){e=i;break;}
        if(i==n-2){e=n-1;break;}
    }
        //cout<<"s: "<<s<<" "<<"e: "<<e<<endl;
    flip(s,e);
        /*
        for(int i=0;i<n;i++){
            cout<<locked[i]<<" ";
        }
        cout<<endl;
        */
    int b=0;tmp=n;
    while(locked[0]>locked[tmp-1]){
        b++;
        tmp--;
    }
    cout<<b<<endl<<s+1<<" "<<e+1<<endl<<a<<endl;
}