#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

/****** TLE CODE ******/

int main(){
    int n;
    cin>>n;
    int curM=n;
    vector<int> v;
    for(int i=n;i>=1;i--){
        int t;
        cin>>t;
        //cout<<"t: "<<t<<endl;
        //cout<<"curM: "<<curM<<endl;
        v.pb(t);
        sort(v.begin(), v.end());
        if(t==curM){
            for(auto itr=v.end()-1;itr>=v.begin();itr--)
            {
                if(*itr==curM){
                    cout<<*itr<<" ";
                    curM--;
                    v.pop_back();
                }
                else break;
            }            
        }
        cout<<endl;
    }

    return 0;
}