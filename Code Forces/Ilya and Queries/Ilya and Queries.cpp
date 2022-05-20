#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first 
#define S second 
#define mp make_pair
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define max2(a,b,c) max(max(a,b),c)
#define min2(a,b,c) min(min(a,b),c)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int n=s.length();
    int arr[100001]={0};
    //memset(arr, 0, sizeof(arr));
    //rep(i,0,n-1)cout<<arr[i]<<endl;
    int m;
    cin>>m;
    if(s[0]==s[1])arr[0]=1;
    rep(i,1,n-2){
        if(s[i]==s[i+1])arr[i]=arr[i-1]+1;
        else arr[i]=arr[i-1];
    }
    /*
    rep(i,0,n-2){
        cout<<"i: "<<i<<" arr[i]: "<<arr[i]<<endl;
    }
    */
    while(m--){
        int p,q;
        cin>>p>>q;
        p--;q--;
        if(q-p==1){
            if(s[p]==s[q])cout<<1<<endl;
            else cout<<0<<endl;
        }
        else{
            if(s[p]==s[p+1])
                cout<<arr[q-1]-arr[p]+1<<endl;
            else 
                cout<<arr[q-1]-arr[p]<<endl;
        }
    }
    return 0;
}